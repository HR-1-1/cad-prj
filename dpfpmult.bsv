package dpfpmult;
////////////////////////////////////////////////////////////////////////////////
/// Imports
////////////////////////////////////////////////////////////////////////////////
import FloatingPoint     ::*;
import DReg              ::*;
import Vector            ::*;
import DefaultValue      ::*;
////////////////////////////////////////////////////////////////////////////////
/// Types
////////////////////////////////////////////////////////////////////////////////
// Return type struct for the Interface
typedef struct {
   Bit#(1) 	valid;
   FloatingPoint#(e,m)	value;
   Exception  	ex;
} ReturnType#(numeric type e, numeric type m) deriving (Bits,FShow);
////////////////////////////////////////////////////////////////////////////////
/// Auxillary Helper functions
////////////////////////////////////////////////////////////////////////////////
// function that detects & sets exception - zero, sNan & infinity
function Exception setException(Reg#(Exception) a,Int#(32) i);

	 Exception y=defaultValue;
	 case (i)
	   0: y = defaultValue;
	   1: y = Exception{invalid_op :True, divide_0 : False , overflow : False , underflow : False, inexact : False};
	   2: y = Exception{invalid_op : a.invalid_op , divide_0 : False , overflow : True , underflow : a.underflow, inexact : True};
	   3: y = Exception{invalid_op : a.invalid_op , divide_0 : False , overflow : a.overflow , underflow : True, inexact : True};
	   4: y = Exception{invalid_op : a.invalid_op , divide_0 : False , overflow : a.overflow , underflow : a.underflow, inexact : True};
	   5: y = Exception{invalid_op : a.invalid_op , divide_0 : False , overflow : a.overflow , underflow : a.underflow, inexact : a.inexact};
	   default: y = defaultValue;
	 endcase
	 return y;
endfunction

// function thtat computes resulting exponent of two dp numbers
// also detects NaN & invalid operations
function Tuple4#(Bit#(11),Int#(32), Bit#(5),Bit#(2) ) evalExponent(Bit#(11) e1,Bit#(11) e2,Bit#(52) m1,Bit#(52) m2); 

	 let e11 = (|e1==1'b0)?11'd1:e1;                    
	 let e22 = (|e2==1'b0)?11'd1:e2;
	 Bit#(13) e_0= zeroExtend(e1)+zeroExtend(e2)+negate(13'd1023); 
	 Bit#(13) e= zeroExtend(e11)+zeroExtend(e22)+negate(13'd1023);
	 Bit#(2) z =0;

	 Int#(32) shift = unpack(zeroExtend(negate(e[11:0])));
     Int#(32) shift_m =((e[12]==1'b1)&&(shift <= 105))?shift:0;
	 Bit#(5) ex =0;                                      
	 ex[3]=1'b0;
	 ex[0] = 1'b0;  
		                
	 ex[4] = ((&e1==1'b1)&&(|m1==1'b1))||((&e2==1'b1)&&(|m2==1'b1))?1'b1:1'b0;
	 ex[2] = ((e[12]==1'b0)&&(e[11:0]>12'd2046)?1'b1:1'b0); 
		 
	 let p = (e[12]==1'b0)&&(e[11:0]>12'd2046)?13'd2046:e;
	 let res_exp = (e[12]==1'b1)?11'd0:p[10:0];
		z[0] = (((|e1==1'b0)&&(|m1==1'b0))||((|e2==1'b0)&&(|m2==1'b0)))?1'b1:1'b0;
	 ex[1] = (z[0]==1'b1)?1'b0:pack((e[12]==1'b1)); 
	 z[1] = pack((|e==1'b0));

	 return tuple4(res_exp,shift_m,ex,z);
endfunction

// function that counts MSB 0's in given input of partial products
function Integer countZeros(Bit#(108) prod,Bit#(11) exp); 
             
  let x5 = prod;                    

  Vector#(10, Bit#(1)) v0 = unpack(x5[105:96]);                        
  Integer result0=0;                                  
  Bool done0 = False;
  for( Integer p0 = 9; p0 >=0; p0 = p0 - 1) 
	   begin
	     if ((v0[p0] == 0)&&(!done0))  result0 = result0+1 ;
	     else
	       done0 = True;
	   end
  Integer z0 = (result0);

  Vector#(16, Bit#(1)) v1 = unpack(x5[95:80]);                        
  Integer result1=0;                                   
  Bool done1 = False;
  for( Integer p1 = 15; p1 >=0; p1 = p1 - 1) 
	   begin
	     if ((v1[p1] == 0)&&(!done1))  result1 = result1+1 ;
	     else
	       done1 = True;
	   end
  Integer z1 = result1;

  Vector#(16, Bit#(1)) v2 = unpack(x5[79:64]);                       
  Integer result2=0;                                   
  Bool done2 = False;
  for( Integer p2 = 15; p2 >=0; p2 = p2 - 1) 
	   begin
	     if ((v2[p2] == 0)&&(!done2))  result2 = result2+1 ;
	     else
	       done2 = True;
	   end
  Integer z2 = result2;

  Vector#(16, Bit#(1)) v3 = unpack(x5[63:48]);                      
  Integer result3=0;                                   
  Bool done3 = False;
  for( Integer p3 = 15; p3 >=0; p3 = p3 - 1) 
	   begin
	     if ((v3[p3] == 0)&&(!done3))  result3 = result3+1 ;
	     else
	       done3 = True;
	   end
  Integer z3 = result3;

  Vector#(16, Bit#(1)) v4 = unpack(x5[47:32]);                     
  Integer result4=0;                                   
  Bool done4 = False;
  for( Integer p4 = 15; p4 >=0; p4 = p4 - 1) 
	   begin
	     if ((v4[p4] == 0)&&(!done4))  result4 = result4+1 ;
	     else
	       done4 = True;
	   end
  Integer z4 = result4;

  Vector#(16, Bit#(1)) v5 = unpack(x5[31:16]);                    
  Integer result5=0;                                   
  Bool done5 = False;
  for( Integer p5 = 15; p5 >=0; p5 = p5 - 1) 
	   begin
	     if ((v5[p5] == 0)&&(!done5))  result5 = result5+1 ;
	     else
	       done5 = True;
	   end
  Integer z5 = result5;

  Vector#(16, Bit#(1)) v6 = unpack(x5[15:0]);                    
  Integer result6=0;                                   
  Bool done6 = False;
  for( Integer p6 = 15; p6 >=0; p6 = p6 - 1) 
	   begin
	     if ((v6[p6] == 0)&&(!done6))  result6 = result6+1 ;
	     else
	       done6 = True;
	   end
  Integer z6 = result6;

  Integer i0 = (|x5[105:96]==1)?z0:((|x5[95:80]==1)?(z1+10):((|x5[79:64]==1)?(z2+26):((|x5[63:48]==1)?(z3+42):((|x5[47:32]==1)?(z4+58):((|x5[31:16]==1)?(z5+74):((|x5[15:0]==1)?(z6+90):106))))));  

  return i0;
endfunction

// normalize the given double precision number
function Tuple4#(Bit#(106),Bit#(11),Bit#(5),Bit#(2)) normalize(Bit#(108) prod,Bit#(11) exp,Int#(32) shift,Bit#(5) exc, Bit#(2) z,Bit#(32) i2);

  let x5 = prod;                   
  let ex= exc;
  Int#(32) i0 = unpack(i2);
  Int#(32) max_shift = unpack(zeroExtend(exp-11'd1));

  Bit#(1) norm_valid = (|exp==1'b0)?1'b0:pack((i0-1)>0); 
  Bit#(108) x01 = (|exp==1'b1)?x5:((exc[1]==1'b0)?(x5>>1):((shift==0)?108'd0:(x5>>(shift+1)))); 
  Bit#(108) x02 = ((i0)>max_shift)?x5<<(max_shift):x5<<(i0-1);
  let exp1 = ((exp == 11'd2046)?11'd2046:exp+11'd1);
  let exp2 = ((i0-1)>max_shift)?(11'd0):((exp-truncate(i2)+11'd1));
  let x_out0 = (norm_valid==1'b1)?x02:x01;      
  let ex1 = ((z[0]==1'b1)?1'b0:((|exp==1'b1)?1'b0:exc[1]));           
  ex[2] = ((exp==11'd2046)&&(i0==0))?1'b1:exc[2];          
  let x_out1 = (ex[2]==1'b1)?{108'h1ffffffffffffffffffffffffff}:x_out0;

  let exp_out = (ex1==1'b1)?(11'd0):((i0==0)?exp1:((norm_valid==1'b1)?exp2:(exp)));
  let x_out = ((ex1==1'b1)&&(shift==0))?108'd0:((ex[4]==1'b1)?108'h180000000000000000000000000:x_out1);

  Bit#(1) sfd_prec = (exc[1]==1'b1)&&(shift!=0)?|(x5<<(108-shift)):(((exc[1]==1'b1)&&(shift==0))?1'b1:1'b0);
  let x07 = x5>>(shift+1);
  let x08 = x5>>(shift);
  x07[0] = x07[0]|sfd_prec;
  Bit#(2) guard = 0;
  Bit#(2) guard_s = 0;
  Bit#(2) guard_out = 0;
  guard[1] = x07[51];
  guard[0] = |x07[50:0];
  guard_s[1] = x08[51];
  guard_s[0] = |x08[50:0];

  let ex12 = (|exp_out==1'b0)&&(guard_s!=0)&&(|x_out[51:0]==1'b0)?1'b0:1'b1;
  let ex11 = (((|x_out[51:0]==1'b0)&&((exc[1]==1'b0)))?1'b0:(((|exp_out==1'b0)&&(guard!=0))?(1'b1):(1'b0)));
  let ex2 = (|exp_out==1'b0)&&(guard_s!=0)?(1'b1):ex11;
  ex[1]=((i0-1)>max_shift)&&(|x02[51:0]==1'b0)?1'b0:ex2;

  Bit#(1) ex00 = ~((|exp_out)&(x_out[105]));

  let ex01 = (((|exp==1'b0)&&(|exp_out==1'b1))?((|x5[51:0]==1'b1)?1'b1:1'b0):1'b0);
  ex[0] =ex01;

  Bit#(1) grd = (shift>0)?|(x5<<(108-shift)):1'b0;
  Bit#(108) sfd_res = x5>>shift;
  sfd_res[0] = sfd_res[0]|grd;
  if(|exp == 1'b0)  x_out[0] = sfd_res[0];
  guard_out[1] = (norm_valid==1'b1)?1'b0:(sfd_res[51]);
  guard_out[0] = (norm_valid==1'b1)?1'b0:((sfd_prec)|(|sfd_res[50:0]));

  return tuple4(x_out[105:0],exp_out,ex,guard_out);
endfunction

//function that evaluates special exceptions -> {inf, zero, snan, qnan}
function Bit#(3) specialException(Bit#(11) e1,Bit#(11) e2,Bit#(52) m1,Bit#(52) m2);

  Bit#(1) a_inf=pack((&e1==1'b1)&&(|m1==1'b0));
  Bit#(1) b_inf=pack((&e2==1'b1)&&(|m2==1'b0));
  Bit#(1) a_z=pack((|e1==1'b0)&&(|m1==1'b0));
  Bit#(1) b_z=pack((|e2==1'b0)&&(|m2==1'b0));
  Bit#(1) a_snan=pack((&e1==1'b1)&&(m1[51]==1'b0)&&(|m1[50:0]==1'b1));
  Bit#(1) b_snan=pack((&e2==1'b1)&&(m2[51]==1'b0)&&(|m2[50:0]==1'b1));
  Bit#(1) snan_valid = pack((a_z&b_inf)|(a_inf&b_z)|(a_z&b_snan)|(a_snan&b_z)|(b_inf&a_snan)|(a_inf&b_snan));
  Bit#(1) snan = ((a_z|b_z)==1'b0)?(a_snan|b_snan):snan_valid;

  Bit#(1) a_qnan=pack((&e1==1'b1)&&(m1[51]==1'b1));
  Bit#(1) b_qnan=pack((&e2==1'b1)&&(m2[51]==1'b1));
  Bit#(1) qnan_valid = pack((a_z&b_qnan)|(a_qnan&b_z)|(a_inf&b_qnan)|(b_inf&a_qnan));
  Bit#(1) qnan = (snan==1'b1)?1'b0:(((a_z|b_z)==1'b0)?(a_qnan|b_qnan):qnan_valid);

  Bit#(1) inf = (snan==1'b1)||(qnan==1'b1)?1'b0:(a_inf|b_inf);
  Bit#(1) zero = (snan==1'b1)||(qnan==1'b1)?1'b0:(a_z|b_z);
  Bit#(1) nan = (snan==1'b1)?snan:qnan;

  Bit#(3) res = (qnan==1'b1)?3'b111:{nan,inf,zero};
  return res;
endfunction

// calculate partial prodcuts for a given mantissa number
function Bit#(216) partialProduct(Bit#(54) m,Bit#(6) b);   
  Bit#(60) y=0;
  Bit#(60) y1=0;
  Bit#(60) a=zeroExtend(m);
  Bit#(60) res1=0;
  Bit#(60) res2=0;
  Bit#(60) res3=0;
  Bit#(60) res4=0;
  Bit#(60) res6=0;
  Bit#(60) res5=0;
  Bit#(216) o=0;
  res1 = (b[0]==1'b1)?(a):60'd0;
  res2 = (b[1]==1'b1)?(a<<1):60'd0;
  res3 = (b[2]==1'b1)?(a<<2):60'd0;
  res4 = (b[3]==1'b1)?(a<<3):60'd0;
  res5 = (b[4]==1'b1)?(a<<4):60'd0;
  res6 = (b[5]==1'b1)?(a<<5):60'd0;
  y =  res1+res2+res3;
  y1 = res4+res5+res6;
  o= {48'b0,y,48'b0,y1};
  return o;          // extending the result
endfunction

// Perform rounding operation to the nearest even double precesion number
function Tuple2#(FloatingPoint#(11,52),Exception) fn_rnd_Nearest_Even_dp(Reg#(Exception) exc,Bit#(1) sgn,Bit#(11) exp,Bit#(106) x,Bit#(5) excb,Bit#(2) guard1);      

  Bit#(52) y=0;                                          
  Bit#(11) e= 0;
  Exception ex= defaultValue;
  Bit#(52) sfd_out =0;
  Bit#(11) exp_out=0;
  Bit#(3) guard = (x[105]==1'b1)?{x[52],x[51],|x[50:0]}:{x[51],x[50],|x[49:0]};
  let sfd = (x[105]==1'b1)?x[104:53]:x[103:52];
  let sfd_lsb = (x[105]==1'b1)?|x[52:0]:|x[51:0];
  Bit#(54) sfd_res = {1'b0, |exp, sfd} + 54'd1; 

  Bit#(1) sfdlsb = (x[105]==1'b1)?x[53]:x[52]; 
  if (sfd_res[53] == 1'b1) begin
	   if (exp == 11'd2046) begin
	     exp_out=11'd2047;
	     sfd_out = 52'd0;
	   end
	   else begin
	     exp_out = exp + 11'd1;
	     sfd_out = truncate(sfd_res>> 1);
	   end
  end
  else if ((exp == 0) && (truncateLSB(sfd_res) == 2'b01)) begin
	   exp_out = 11'd1;
	   sfd_out = truncate(sfd_res);
  end
  else begin
    exp_out = exp ;
    sfd_out = truncate(sfd_res);
  end
  Bit#(1) e_xu=0;
  Bit#(1) e_xo=0;
  if (excb[4] == 1'b1) begin
    y = (52'h8000000000000);
    e = 11'd2047;
  end
  else begin
    case (guard)
      3'b000 : begin   y=sfd;e=exp;  end
      3'b001 : begin   y=sfd;e=exp;  end
      3'b010 : begin   y=sfd;e=exp;  end
      3'b011 : begin   y=sfd;e=exp;  end
      3'b100 : begin if (sfdlsb==1'b1) begin   y = sfd_out; e = exp_out;
      e_xo = (exp==11'd2046)&&(&sfd==1'b1)?1'b1:1'b0;            end  


      else if ((pack(sfdlsb==1'b0)&pack(guard1!=0)&pack(exp==0))==1'b1) begin 
                  y = sfd_out; e = exp_out; 
      e_xo = (exp==11'd2046)&&(&sfd==1'b1)&&(|x[50:0]==1'b1)?1'b1:1'b0; 
                  end
      else begin    y=sfd;e=exp; end end
 
      3'b101 : begin   y = sfd_out; e = exp_out;
      e_xo = (exp==11'd2046)&&(&sfd==1'b1)&&(|x[50:0]==1'b1)?1'b1:1'b0;            end   
      3'b110 : begin   y = sfd_out; e = exp_out; e_xu = (excb[1]==1'b1)&&(&sfd==1'b1)&&(&guard[2:1]==1'b1)?1'b1:1'b0; 
      e_xo = (exp==11'd2046)&&(&sfd==1'b1)&&(|x[50:0]==1'b1)?1'b1:1'b0;            end   
      3'b111 : begin   y = sfd_out; e = exp_out; e_xu = (excb[1]==1'b1)&&(&sfd==1'b1)&&(&guard[2:1]==1'b1)?1'b1:1'b0; 
      e_xo = (exp==11'd2046)&&(&sfd==1'b1)&&(|x[50:0]==1'b1)?1'b1:1'b0;            end   
    endcase
  end

  ex = (excb[4]==1'b1)?setException(exc,0):((excb[2]==1'b1)?setException(exc,2):((excb[1]==1'b1)?((e_xu==1'b1)?(setException(exc,4)):setException(exc,3)):(((excb[0]==1'b1)||(guard!=3'b000))?((e_xo==1'b1)?(setException(exc,2)):setException(exc,4)):(setException(exc,0)))));

  return tuple2(FloatingPoint{sign: unpack(sgn),exp: e,sfd: y},ex);
endfunction
////////////////////////////////////////////////////////////////////////////////
/// Interface definitions
////////////////////////////////////////////////////////////////////////////////
interface Ifc_dpfpmult;
  method Action send(Tuple2#(FloatingPoint#(11,52), FloatingPoint#(11,52)) data_in);
  method ReturnType#(11,52) receive();
endinterface
////////////////////////////////////////////////////////////////////////////////
/// Module definitions
////////////////////////////////////////////////////////////////////////////////
(*synthesize*)
module mk_dpfpmult(Ifc_dpfpmult);       
                                        
//register declarations
Reg#(Bit#(3)) rg_dp_ex_1<-mkReg(0);
Reg#(Bit#(3)) rg_dp_ex0<-mkReg(0);
Reg#(Bit#(3)) rg_dp_ex00<-mkReg(0);
Reg#(Bit#(3)) rg_dp_ex01<-mkReg(0);
Reg#(Bit#(3)) rg_dp_ex11<-mkReg(0);
Reg#(Bit#(3)) rg_dp_ex02<-mkReg(0);
Reg#(Bit#(3)) rg_dp_ex1<-mkReg(0);
Reg#(Bit#(3)) rg_dp_ex2<-mkReg(0);
Reg#(Bit#(3)) rg_dp_ex2_d<-mkReg(0);
Reg#(Bit#(3)) rg_dp_ex3<-mkReg(0);
Reg#(Bit#(3)) rg_dp_ex4<-mkReg(0);
Reg#(Bit#(1)) rg_s0<-mkReg(0);
Reg#(Bit#(1)) rg_s00<-mkReg(0);
Reg#(Bit#(1)) rg_s01<-mkReg(0);
Reg#(Bit#(1)) rg_s11<-mkReg(0);
Reg#(Bit#(1)) rg_s02<-mkReg(0);
Reg#(Bit#(1)) rg_s1<-mkReg(0);

Reg#(Tuple4#(Bit#(11),Int#(32), Bit#(5),Bit#(2))) rg_e0<-mkReg(tuple4(0,0,0,0));
Reg#(Tuple4#(Bit#(11),Int#(32), Bit#(5),Bit#(2))) rg_e00<-mkReg(tuple4(0,0,0,0));
Reg#(Tuple4#(Bit#(11),Int#(32), Bit#(5),Bit#(2))) rg_e01<-mkReg(tuple4(0,0,0,0));
Reg#(Tuple4#(Bit#(11),Int#(32), Bit#(5),Bit#(2))) rg_e011<-mkReg(tuple4(0,0,0,0));
Reg#(Tuple4#(Bit#(11),Int#(32), Bit#(5),Bit#(2))) rg_e02<-mkReg(tuple4(0,0,0,0));
Reg#(Tuple4#(Bit#(106),Bit#(11),Bit#(5),Bit#(2))) rg_x0<-mkReg(tuple4(0,0,0,0));
Reg#(Tuple3#(Bit#(13),Bit#(1),Int#(32))) rg_e1 <- mkReg(tuple3(0,0,unpack(0)));

Reg#(Exception) rg_exc0 <- mkReg(defaultValue);
Reg#(Exception) rg_exc1 <- mkReg(defaultValue);
Reg#(Exception) rg_exc2 <- mkReg(defaultValue);

Reg#(Tuple2#(FloatingPoint#(11,52),FloatingPoint#(11,52))) rg_operands1 <- mkReg(tuple2(unpack(0),unpack(0)));
Reg#(Tuple2#(FloatingPoint#(11,52),FloatingPoint#(11,52))) rg_operands2 <- mkReg(tuple2(unpack(0),unpack(0)));
Reg#(Tuple2#(FloatingPoint#(11,52),FloatingPoint#(11,52))) rg_operands3 <- mkReg(tuple2(unpack(0),unpack(0)));
Reg#(Tuple2#(FloatingPoint#(11,52),FloatingPoint#(11,52))) rg_operands3_1 <- mkReg(tuple2(unpack(0),unpack(0)));
Reg#(Tuple2#(FloatingPoint#(11,52),FloatingPoint#(11,52))) rg_operands4 <- mkReg(tuple2(unpack(0),unpack(0)));
Reg#(Tuple2#(FloatingPoint#(11,52),FloatingPoint#(11,52))) rg_operands5 <- mkReg(tuple2(unpack(0),unpack(0)));
Reg#(Tuple2#(FloatingPoint#(11,52),FloatingPoint#(11,52))) rg_operands6 <- mkReg(tuple2(unpack(0),unpack(0)));
Reg#(Tuple2#(FloatingPoint#(11,52),FloatingPoint#(11,52))) rg_operands7 <- mkReg(tuple2(unpack(0),unpack(0)));
Reg#(Tuple2#(FloatingPoint#(11,52),FloatingPoint#(11,52))) rg_operands8 <- mkReg(tuple2(unpack(0),unpack(0)));
Reg#(Tuple2#(FloatingPoint#(11,52),FloatingPoint#(11,52))) rg_operands9 <- mkReg(tuple2(unpack(0),unpack(0)));
Reg#(Tuple2#(FloatingPoint#(11,52),FloatingPoint#(11,52))) rg_operands10 <- mkReg(tuple2(unpack(0),unpack(0)));
Reg#(Tuple2#(FloatingPoint#(11,52),FloatingPoint#(11,52))) rg_operands11 <- mkReg(tuple2(unpack(0),unpack(0)));


Reg#(Tuple2#(FloatingPoint#(11,52),Exception)) rg_out_1 <- mkReg(tuple2(unpack(0),unpack(0)));
Reg#(Tuple2#(FloatingPoint#(11,52),Exception)) rg_out_2 <- mkReg(tuple2(unpack(0),unpack(0)));
Reg#(Tuple2#(FloatingPoint#(11,52),Exception)) rg_out_3 <- mkReg(tuple2(unpack(0),unpack(0)));
Reg#(Tuple2#(FloatingPoint#(11,52),Exception)) rg_out <- mkReg(tuple2(unpack(0),unpack(0)));
Reg#(Tuple2#(FloatingPoint#(11,52),Exception)) rg_out_d <- mkReg(tuple2(unpack(0),unpack(0)));

Reg#(Bit#(108)) rg_partial_product0 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product1 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product2 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product3 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product4 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product5 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product6 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product7 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product8 <- mkReg(0);
Reg#(Bit#(216)) rg_partial_product0_1 <- mkReg(0);
Reg#(Bit#(216)) rg_partial_product1_1 <- mkReg(0);
Reg#(Bit#(216)) rg_partial_product2_1 <- mkReg(0);
Reg#(Bit#(216)) rg_partial_product3_1 <- mkReg(0);
Reg#(Bit#(216)) rg_partial_product4_1 <- mkReg(0);
Reg#(Bit#(216)) rg_partial_product5_1 <- mkReg(0);
Reg#(Bit#(216)) rg_partial_product6_1 <- mkReg(0);
Reg#(Bit#(216)) rg_partial_product7_1 <- mkReg(0);
Reg#(Bit#(216)) rg_partial_product8_1 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product0_01 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product1_11 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product2_21 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product3_31 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product4_41 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product5_51 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product6_61 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product7_71 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product8_81 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product5_2 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product6_2 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product7_2 <- mkReg(0);
Reg#(Bit#(108)) rg_partial_product8_2 <- mkReg(0);

Reg#(Bit#(108)) rg_res <- mkReg(0);
Reg#(Bit#(108)) rg_res1 <- mkReg(0);
Reg#(Bit#(108)) rg_res11 <- mkReg(0);

Vector#(8,Reg#(Bit#(1))) rg_dp_valid <- replicateM(mkDReg(0));

Reg#(Bit#(32)) i1 <- mkReg(0);
Integer i0=0;

////////////////////////////////////////////////////////////////////////////////
/// Various stages of pipeline
////////////////////////////////////////////////////////////////////////////////
// Stage 1 -> evaluate exponent & sign + evaluate special exceptions + evaluate partial products for mantissa
rule rl_exponent_evaluate_stage1;                                         
  match {.opA, .opB} = rg_operands1;
  rg_e02 <= evalExponent(opA.exp,opB.exp,opA.sfd,opB.sfd);                  
  rg_s02<= pack(opA.sign != opB.sign);                                     
endrule


rule rl_special_exception_check_stage1;
  match {.opA, .opB} = rg_operands2;
  rg_dp_ex02<= specialException(opA.exp,opB.exp,opA.sfd,opB.sfd);             
endrule

rule rl_stage1;                  
  match {.opA, .opB} = rg_operands3;                                 
  Bit#(11) expA1 = 0;
  Bit#(11) expB1 = 0;
  Bit#(52) sfdA1 = 0;
  Bit#(52) sfdB1 = 0;
  
  sfdA1 = opA.sfd;
  expA1 = opA.exp;
  sfdB1 = opB.sfd;
  expB1 = opB.exp;
  
  rg_partial_product0_1<=partialProduct({1'b0,(|expA1),sfdA1},sfdB1[5:0]);
  rg_partial_product1_1<= partialProduct({1'b0,(|expA1),sfdA1},sfdB1[11:6]);
  rg_partial_product2_1<=partialProduct({1'b0,(|expA1),sfdA1},sfdB1[17:12]);
  rg_partial_product3_1<=partialProduct({1'b0,(|expA1),sfdA1},sfdB1[23:18]);
  rg_partial_product4_1<=partialProduct({1'b0,(|expA1),sfdA1},sfdB1[29:24]);
  rg_partial_product5_1<=partialProduct({1'b0,(|expA1),sfdA1},sfdB1[35:30]);
  rg_partial_product6_1<=partialProduct({1'b0,(|expA1),sfdA1},sfdB1[41:36]);
  rg_partial_product7_1<=partialProduct({1'b0,(|expA1),sfdA1},sfdB1[47:42]);
  rg_partial_product8_1<=partialProduct({1'b0,(|expA1),sfdA1},{1'b0,(|expB1),sfdB1[51:48]});
  
  rg_operands3_1 <= rg_operands3;
endrule  

// Stage 2 -> combine the evaluated partial products for mantissa
rule rl_stage2;
  match {.opA, .opB} = rg_operands3_1;
  Bit#(11) expA1 = 0;
  Bit#(11) expB1 = 0;
  Bit#(52) sfdA1 = 0;
  Bit#(52) sfdB1 = 0;
  
  sfdA1 = opA.sfd;
  expA1 = opA.exp;
  sfdB1 = opB.sfd;
  expB1 = opB.exp;
  
  rg_partial_product0 <= rg_partial_product0_1[107:0]+rg_partial_product0_1[215:108];
  rg_partial_product1 <= {(rg_partial_product1_1[107:0]+rg_partial_product1_1[215:108])[101:0],6'd0};
  rg_partial_product2 <= {(rg_partial_product2_1[107:0]+rg_partial_product2_1[215:108])[95:0],12'd0};
  rg_partial_product3 <= {(rg_partial_product3_1[107:0]+rg_partial_product3_1[215:108])[89:0],18'd0};
  rg_partial_product4 <= {(rg_partial_product4_1[107:0]+rg_partial_product4_1[215:108])[83:0],24'd0};
  rg_partial_product5 <= {(rg_partial_product5_1[107:0]+rg_partial_product5_1[215:108])[77:0],30'd0};
  rg_partial_product6 <= {(rg_partial_product6_1[107:0]+rg_partial_product6_1[215:108])[71:0],36'd0};
  rg_partial_product7 <= {(rg_partial_product7_1[107:0]+rg_partial_product7_1[215:108])[65:0],42'd0};
  rg_partial_product8 <= {(rg_partial_product8_1[107:0]+rg_partial_product8_1[215:108])[59:0],48'd0};
  
  rg_dp_ex0<=rg_dp_ex02; 
  rg_s0<=rg_s02;
  rg_e0<=rg_e02;
 
endrule

//Stage3-> addition of 5 partial products to get intermediate product 
rule rl_stage3;           
  Bit#(108) v1 =0;
  Bit#(108) v2 =0;
  Bit#(108) v3 =0;
  Bit#(108) v4 =0;
  Bit#(108) v5 =0;

  v1 = pack(rg_partial_product0);
  v2 = pack(rg_partial_product1);
  v3 = pack(rg_partial_product2);
  v4 = pack(rg_partial_product3);
  v5 = pack(rg_partial_product4);

  rg_res<= v1+v2+v3+v4+v5;                   
  rg_dp_ex00<=rg_dp_ex0; 
  rg_s00<=rg_s0;
  rg_e00<=rg_e0;
  
  rg_partial_product5_2 <= rg_partial_product5;
  rg_partial_product6_2 <= rg_partial_product6;
  rg_partial_product7_2 <= rg_partial_product7;
  rg_partial_product8_2 <= rg_partial_product8;
endrule 

//Stage4 -> further propagation of partial products and compute final result
rule rl_stage4; 
  Bit#(108) v6 =0;
  Bit#(108) v7 =0;
  Bit#(108) v8 =0;
  Bit#(108) v9 =0;
  Bit#(108) v10 =0;
  v6 = pack(rg_partial_product5_2);
  v7 = pack(rg_partial_product6_2);
  v8 = pack(rg_partial_product7_2);
  v9 = pack(rg_partial_product8_2);
  v10 = pack(rg_res);
  
  rg_res1<=v6+v7+v8+v9+v10;   
  
  rg_s01<=rg_s00;
  rg_dp_ex01<=rg_dp_ex00;
  rg_e01<=rg_e00;
endrule

//stage5 -> counting zeros for normalization,evaluating mantissa products,exception generation
rule rl_stage5;                         
  Integer i0 =0;
  rg_dp_ex11<=rg_dp_ex01;
  rg_s11<=(tpl_3(rg_e01)[4]==1'b1)?1'b0:rg_s01;
  i0 = countZeros(pack(rg_res1),tpl_1(rg_e01));
  i1 <= fromInteger(i0);
  rg_res11<=rg_res1; 
  rg_e011 <= rg_e01;      
endrule

//stage6 -> normalization
rule rl_stage6;  
  rg_dp_ex1<=rg_dp_ex11;
  rg_s1<=(tpl_3(rg_e011)[4]==1'b1)?1'b0:rg_s11;
  rg_x0<= normalize(pack(rg_res11),tpl_1(rg_e011),tpl_2(rg_e011),tpl_3(rg_e011),tpl_4(rg_e011),i1); 
  rg_exc2<=unpack(tpl_3(rg_e011));                
endrule
                         
//stage7 -> round-off + exceptions
rule rl_stage7;                              
  rg_dp_ex2_d<=rg_dp_ex1;
  rg_out_d <= fn_rnd_Nearest_Even_dp(rg_exc2,pack(rg_s1),tpl_2(rg_x0),tpl_1(rg_x0),tpl_3(rg_x0),tpl_4(rg_x0));
endrule

rule rl_valid_check;
  for(Integer i = 1 ; i <= 7 ; i = i+1)
   begin
     rg_dp_valid[i] <= rg_dp_valid[i-1];
   end
endrule

// send and receive methods
method Action send(Tuple2#(FloatingPoint#(11,52),FloatingPoint#(11,52)) data_in);
 rg_operands1<=data_in;
 rg_operands2<=data_in;
 rg_operands3<=data_in;
 rg_operands4<=data_in;
 rg_operands5<=data_in;
 rg_operands6<=data_in;
 rg_operands7<=data_in;
 rg_operands8<=data_in;
 rg_operands9<=data_in;
 rg_operands10<=data_in;
 rg_operands11<=data_in;
 rg_dp_valid[0]<=unpack(1'b1);
endmethod

method ReturnType#(11,52) receive();                                                  
  return case (pack(rg_dp_ex2_d))
    3'b000:  ReturnType{valid: pack(rg_dp_valid[7]),value:tpl_1(rg_out_d),ex:tpl_2(rg_out_d)};
    3'b100:  ReturnType{valid: pack(rg_dp_valid[7]),value:FloatingPoint{sign: unpack(1'b0),exp: 11'd2047,sfd:  truncate(52'h8000000000000)},ex:unpack(5'b10000)};
    3'b010:  ReturnType{valid: pack(rg_dp_valid[7]),value:FloatingPoint{sign: tpl_1(rg_out_d).sign,exp: 11'd2047,sfd: 52'd0},ex:defaultValue};
    3'b001:  ReturnType{valid: pack(rg_dp_valid[7]),value:FloatingPoint{sign: tpl_1(rg_out_d).sign,exp: 11'd0,sfd: 52'd0},ex:defaultValue};
    3'b111:  ReturnType{valid: pack(rg_dp_valid[7]),value:FloatingPoint{sign: unpack(1'b0),exp: 11'd2047,sfd:  truncate(52'h8000000000000)},ex:unpack(5'b00000)};
  endcase;
endmethod

endmodule

endpackage
