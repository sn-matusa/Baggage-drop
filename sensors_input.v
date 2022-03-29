`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:51:19 11/11/2021 
// Design Name: 
// Module Name:    sensors_input 
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
module sensors_input(
	output   [7 : 0]   height,
   input    [7 : 0]   sensor1,
   input    [7 : 0]   sensor2,
   input    [7 : 0]   sensor3,
   input    [7 : 0]   sensor4
	);
	
	reg[15:0] height_reg;
	
	always @(*) begin  
		height_reg=0;
		if(sensor1 == 0 || sensor3 ==0) begin
			height_reg=( sensor2 + sensor4 + ((sensor2+sensor4) & 1) )>>1; //fac media intre senzorii 2 si 4 si aproximez rezultatul
		end
		else if(sensor2 == 0 || sensor4 ==0) begin
			height_reg=( sensor1 + sensor3 + ((sensor1+sensor3) & 1) )>>1; //fac media intre sezorii 1 si 3 si aproximez rezultatul
		end
		else begin
		height_reg=( sensor1 + sensor2 + sensor3 + sensor4 + ((sensor1+sensor2+sensor3+sensor4) & 2) )>>2; // fac media intre toti senzorii si aproximez rezultatul
		end
	end
	
	assign height=height_reg;
	
endmodule 