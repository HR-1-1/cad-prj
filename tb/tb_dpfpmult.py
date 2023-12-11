import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge, ClockCycles

import random
import numpy as np

import struct

import struct

def ieee754_double_precision_multiply(a, b):
    # Convert input values to IEEE 754 double-precision binary representation
    a_binary = struct.unpack('!Q', struct.pack('!d', a))[0]
    b_binary = struct.unpack('!Q', struct.pack('!d', b))[0]
    #print(bin(a_binary))
    #print(bin(b_binary))

    # Extract sign, exponent, and mantissa from the binary representation
    a_sign = (a_binary >> 63) & 1
    a_exponent = (a_binary >> 52) & 0x7FF
    a_mantissa = a_binary & 0xFFFFFFFFFFFFF

    b_sign = (b_binary >> 63) & 1
    b_exponent = (b_binary >> 52) & 0x7FF
    b_mantissa = b_binary & 0xFFFFFFFFFFFFF

    # Calculate the product
    result_sign = a_sign ^ b_sign
    result_exponent = a_exponent + b_exponent - 1023
    result_mantissa = (a_mantissa * b_mantissa) >> 52

    # Handle normalization and rounding
    if result_mantissa & (1 << 52):
        result_mantissa >>= 1
        result_exponent += 1

    # Construct the result binary representation
    result_binary = (result_sign << 63) | (result_exponent << 52) | result_mantissa
    #print(bin(result_binary))
    # Convert the result back to a double-precision floating-point number
    result = struct.unpack('!d', struct.pack('!Q', result_binary))[0]

    return result

'''
1. Testbench
'''

@cocotb.test()
async def mult_test(dut):
    clock = Clock(dut.CLK, 10, units="us")  # Create a 10us period clock on port clk
    # generate a random 64 bit integer  
    val1 = random.randint(-2**20, 2**20) 
    val2 = random.randint(-2**20, 2**20)
    #(val1, val2) = (2, -4)
    # get the dp representation of 64 bit integer
    a_binary = struct.unpack('!Q', struct.pack('!d', val1))[0]
    b_binary = struct.unpack('!Q', struct.pack('!d', val2))[0]
    
    a_sign = (a_binary >> 63) & 1
    a_exponent = (a_binary >> 52) & 0x7FF
    a_mantissa = a_binary & 0xFFFFFFFFFFFFF

    b_sign = (b_binary >> 63) & 1
    b_exponent = (b_binary >> 52) & 0x7FF
    b_mantissa = b_binary & 0xFFFFFFFFFFFFF
    # append format {num1, num2, round}
    data_in = b_sign<<66 | b_exponent<<55 | b_mantissa<<3 | 0 
    data_in = a_sign<<130 | a_exponent<<119 | a_mantissa<<67 | data_in
    data_in = data_in >> 3
    #print(val1, val2)
    #print(bin(data_in))
    #print(bin(a_binary), bin(b_binary))
    # start the clock
    cocotb.start_soon(clock.start())
    # toggle the reset
    dut.RST_N.value = 0
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 1
    # send input stream
    dut.send_data_in.setimmediatevalue(data_in)
    dut.EN_send.value = 1
    await Timer(10*10, units="us")
    recv = dut.receive.value
    # recv[68] -> valid bit; recv[67:5] -> result; recv[4:] -> exception
    golden_res_f = ieee754_double_precision_multiply(val1, val2)
    golden_res = int(str(bin(struct.unpack('!Q',struct.pack('!d',golden_res_f))[0])[2:].zfill(64)), 2)
    dut_res = int(str(recv[1:64]), 2)
    assert((abs(golden_res-dut_res)/max(golden_res, dut_res)) < 0.001)
