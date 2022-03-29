`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:52:08 11/11/2021 
// Design Name: 
// Module Name:    square_root 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module square_root (  
    output [15:0] out,
    input  [7:0] in );
	 
	 reg[15:0] base;    
	 reg[15:0] y;
	 reg[4:0] i;
	 
	 always @(in) begin       //detaliat in README
		y=0;
		base=32768;  // 2^15
		for (i=0; i<16 ; i=i+1) begin
			y=y+base;
			if((y*y) > in * 65536 ) begin   //in este shiftat la stanga cu 16 biti.
				y=y-base;
			end
			base=base/2; // la fiecare iteratie a lui i , base trebuie shiftat
		end
	 end
	 
	 assign out=y; // radacina patrata a lui in. suma de puteri ale lui 2

endmodule 