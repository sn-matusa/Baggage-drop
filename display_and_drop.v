`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:52:24 11/11/2021 
// Design Name: 
// Module Name:    display_and_drop 
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
module display_and_drop (
    output   [6 : 0]   seven_seg1, 
    output   [6 : 0]   seven_seg2,
    output   [6 : 0]   seven_seg3,
    output   [6 : 0]   seven_seg4,  // modulele 7Seg pe care va fi afisat mesajul corespunzator
    output   [0 : 0]   drop_activated, //semnalul de alarma ce se activeaza când se respecta conditia de lansare a pachetului 
													//(drop_en - activ si t_act <= t_lim)
    input    [15: 0]   t_act,  //timpul curent posibil de coborare a pachetului
    input    [15: 0]   t_lim, // timpul limita de coborare a pachetului
    input              drop_en);  //activeaza posibilitatea lansarii pachetului
	 
	 reg[6:0] seven_seg1_reg, seven_seg2_reg, seven_seg3_reg, seven_seg4_reg;
	 reg[0:0] drop_activated_reg;
	 
	 always @(drop_en or t_act or t_lim) begin
	 
		drop_activated_reg=0;
		seven_seg1_reg=0;
		seven_seg2_reg=0;
		seven_seg3_reg=0;
		seven_seg4_reg=0;
	 
		if(drop_en == 0) begin   //daca elicopterul nu se afla in aria de aruncare
			seven_seg1_reg=7'b0111001;
			seven_seg2_reg=7'b1011100;
			seven_seg3_reg=7'b0111000;
			seven_seg4_reg=7'b1011110;   //COLD
			drop_activated_reg=0;
		end
		else if(drop_en == 1 && t_act > t_lim) begin  // daca elicopterul se afli in aria de aruncare, dar timpul limita este prea mare
			seven_seg1_reg=7'b0000000;
			seven_seg2_reg=7'b1110110;
			seven_seg3_reg=7'b1011100;
			seven_seg4_reg=7'b1111000;    //_HOT
			drop_activated_reg=0;
		end
		else if(drop_en == 1 && t_act <= t_lim) begin  //daca elipcopterul a aruncat pachetul
			seven_seg1_reg=7'b1011110;
			seven_seg2_reg=7'b1010000;
			seven_seg3_reg=7'b1011100;
			seven_seg4_reg=7'b1110011;    //DROP
			drop_activated_reg=1;
		end
	 
	 end
	 
	 assign seven_seg1=seven_seg1_reg;
	 assign seven_seg2=seven_seg2_reg;
	 assign seven_seg3=seven_seg3_reg;
	 assign seven_seg4=seven_seg4_reg;
	 assign drop_activated=drop_activated_reg;
	 
endmodule 