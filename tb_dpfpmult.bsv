package tb_dpfpmult;

  import dpfpmult :: * ;
  import FloatingPoint :: *;

  (*synthesize*)
  module mktb_dpfpmult();
    Ifc_dpfpmult ifc_mult <- mk_dpfpmult();
    Reg#(Bit#(8)) state <- mkReg(0);
   
    rule rl_send0(state==0); 
      FloatingPoint#(11, 52) f,g;
      
      f.sign = False;
      f.exp = 11'h7ff;
      f.sfd = 52'hfffffffffffff;
      
      g.sign = False;
      g.exp = 11'h7ff;
      g.sfd = 52'hfffffffffffff;


      ifc_mult.send(tuple2(f,g));
      $display("cycle:",state," ",fshow(f),fshow(g));

    endrule
    
    rule rl_send1(state==1);  
      FloatingPoint#(11, 52) f,g;
      
      f.sign = False;
      f.exp = 11'h001;
      f.sfd = 52'hfffffefffffff;
      
      g.sign = True;
      g.exp = 11'h3fe;
      g.sfd = 52'h000000fffffff;


      ifc_mult.send(tuple2(f,g));
      $display("cycle:",state," ",fshow(f),fshow(g));

    endrule
    
    rule rl_send2(state==2);  
      FloatingPoint#(11, 52) f,g;
      
      f.sign = True;
      f.exp = 11'h001;
      f.sfd = 52'hfffffefffffff;
      
      g.sign = True;
      g.exp = 11'h3fe;
      g.sfd = 52'h000000fffffff;


      ifc_mult.send(tuple2(f,g));
      $display("cycle:",state," ",fshow(f),fshow(g));

    endrule
    
    rule rl_send3(state==3);  
      FloatingPoint#(11, 52) f,g;
            
      f.sign = True;
      f.exp = 11'h7ff;
      f.sfd = 52'hfffffffffffff;
      
      g.sign = False;
      g.exp = 11'h40f;
      g.sfd = 52'hfffffffffffff;

      ifc_mult.send(tuple2(f,g));
      $display("cycle:",state," ",fshow(f),fshow(g));

    endrule
    
    rule rl_receive;
      ReturnType#(11, 52) r;
      r = ifc_mult.receive();
      $display("cycle: ",state," dut result: ",fshow(r.value), " exceptions: ", fshow(r.ex));
      
    endrule

    rule rl_end;
      if (state > 11) begin
        $finish(0);
      end
      state <= state + 1;
    endrule

  endmodule
endpackage
