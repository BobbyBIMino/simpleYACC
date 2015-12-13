#include "stdafx.h"
#include "data.h"

Data::Data()
{
	
	setAction();
	setGotoT();
	setVN();
	setProduct();
	in.open("in.txt",ios::in);
}

Data::~Data()
{
	in.close();
}

void Data::setGotoT()
{
	gotoT[0][1] = 1;gotoT[2][1] = 10;gotoT[9][1] = 37;gotoT[11][1] = 40;gotoT[25][1] = 1;gotoT[38][1] = 64;gotoT[39][1] = 65;gotoT[66][1] = 119;gotoT[0][2] = 4;gotoT[2][2] = 13;gotoT[9][2] = 4;gotoT[11][2] = 13;gotoT[25][2] = 131;gotoT[38][2] = 4;gotoT[39][2] = 13;gotoT[61][2] = 134;gotoT[66][2] = 13;gotoT[70][2] = 123;gotoT[77][2] = 108;gotoT[115][2] = 145;gotoT[0][3] = 60;gotoT[2][3] = 76;gotoT[9][3] = 60;gotoT[11][3] = 76;gotoT[25][3] = 60;gotoT[38][3] = 60;gotoT[39][3] = 76;gotoT[61][3] = 114;gotoT[62][3] = 117;gotoT[66][3] = 76;gotoT[69][3] = 76;gotoT[70][3] = 76;gotoT[77][3] = 114;gotoT[78][3] = 130;gotoT[97][3] = 135;gotoT[101][3] = 136;gotoT[115][3] = 114;gotoT[116][3] = 146;gotoT[126][3] = 147;gotoT[127][3] = 148;gotoT[138][3] = 114;gotoT[143][3] = 151;gotoT[0][4] = 59;gotoT[2][4] = 75;gotoT[9][4] = 59;gotoT[11][4] = 75;gotoT[25][4] = 63;gotoT[38][4] = 59;gotoT[39][4] = 75;gotoT[61][4] = 113;gotoT[69][4] = 121;gotoT[70][4] = 75;gotoT[77][4] = 113;gotoT[115][4] = 113;gotoT[138][4] = 150;gotoT[5][5] = 70;gotoT[14][5] = 70;gotoT[4][6] = 25;gotoT[13][6] = 69;gotoT[108][6] = 138;gotoT[123][6] = 69;gotoT[131][6] = 25;gotoT[134][6] = 138;gotoT[145][6] = 138;gotoT[59][7] = 97;gotoT[63][7] = 97;gotoT[75][7] = 126;gotoT[113][7] = 143;gotoT[121][7] = 126;gotoT[150][7] = 143;gotoT[60][8] = 101;gotoT[76][8] = 127;gotoT[114][8] = 144;gotoT[117][8] = 101;gotoT[130][8] = 127;gotoT[135][8] = 101;gotoT[136][8] = 101;gotoT[146][8] = 144;gotoT[147][8] = 127;gotoT[148][8] = 127;gotoT[151][8] = 144;

}

void Data::setAction()
{
	action[4][1] = "S26";action[5][1] = "r14";action[6][1] = "r15";action[13][1] = "S26";action[14][1] = "r14";action[15][1] = "r15";action[28][1] = "r28";action[29][1] = "r29";action[35][1] = "r30";action[36][1] = "r31";action[42][1] = "r30";action[43][1] = "r31";action[59][1] = "r8";action[60][1] = "r10";action[63][1] = "r8";action[75][1] = "r8";action[76][1] = "r10";action[91][1] = "r28";action[92][1] = "r29";action[108][1] = "S26";action[109][1] = "r14";action[110][1] = "r15";action[113][1] = "r8";action[114][1] = "r10";action[117][1] = "r12";action[118][1] = "r14";action[121][1] = "r7";action[122][1] = "r14";action[123][1] = "S26";action[130][1] = "r12";action[131][1] = "S26";action[134][1] = "S26";action[135][1] = "r9";action[136][1] = "r13";action[137][1] = "r11";action[139][1] = "r28";action[140][1] = "r29";action[141][1] = "r30";action[142][1] = "r31";action[144][1] = "r13";action[145][1] = "S26";action[146][1] = "r12";action[147][1] = "r9";action[148][1] = "r13";action[149][1] = "r11";action[150][1] = "r7";action[151][1] = "r9";action[152][1] = "r11";


	action[4][2] = "S27";action[5][2] = "r14";action[6][2] = "r15";action[13][2] = "S27";action[14][2] = "r14";action[15][2] = "r15";action[28][2] = "r28";action[29][2] = "r29";action[35][2] = "r30";action[36][2] = "r31";action[42][2] = "r30";action[43][2] = "r31";action[59][2] = "r8";action[60][2] = "r10";action[63][2] = "r8";action[75][2] = "r8";action[76][2] = "r10";action[91][2] = "r28";action[92][2] = "r29";action[108][2] = "S27";action[109][2] = "r14";action[110][2] = "r15";action[113][2] = "r8";action[114][2] = "r10";action[117][2] = "r12";action[118][2] = "r14";action[121][2] = "r7";action[122][2] = "r14";action[123][2] = "S27";action[130][2] = "r12";action[131][2] = "S27";action[134][2] = "S27";action[135][2] = "r9";action[136][2] = "r13";action[137][2] = "r11";action[139][2] = "r28";action[140][2] = "r29";action[141][2] = "r30";action[142][2] = "r31";action[144][2] = "r13";action[145][2] = "S27";action[146][2] = "r12";action[147][2] = "r9";action[148][2] = "r13";action[149][2] = "r11";action[150][2] = "r7";action[151][2] = "r9";action[152][2] = "r11";

	action[5][3] = "r14";action[6][3] = "r15";action[14][3] = "r14";action[15][3] = "r15";action[28][3] = "r28";action[29][3] = "r29";action[35][3] = "r30";action[36][3] = "r31";action[42][3] = "r30";action[43][3] = "r31";action[59][3] = "S98";action[60][3] = "r10";action[63][3] = "S98";action[75][3] = "S98";action[76][3] = "r10";action[91][3] = "r28";action[92][3] = "r29";action[109][3] = "r14";action[110][3] = "r15";action[113][3] = "S98";action[114][3] = "r10";action[117][3] = "r12";action[118][3] = "r14";action[121][3] = "S98";action[122][3] = "r14";action[130][3] = "r12";action[13][3] = "r9";action[136][3] = "r13";action[137][3] = "r11";action[139][3] = "r28";action[140][3] = "r29";action[141][3] = "r30";action[142][3] = "r31";action[144][3] = "r13";action[146][3] = "r12";action[14][3] = "r9";action[148][3] = "r13";action[149][3] = "r11";action[150][3] = "S98";action[15][3] = "r9";action[152][3] = "r11";


	action[5][4] = "r14";action[6][4] = "r15";action[14][4] = "r14";action[15][4] = "r15";action[28][4] = "r28";action[29][4] = "r29";action[35][4] = "r30";action[36][4] = "r31";action[42][4] = "r30";action[43][4] = "r31";action[59][4] = "S99";action[60][4] = "r10";action[63][4] = "S99";action[75][4] = "S99";action[76][4] = "r10";action[91][4] = "r28";action[92][4] = "r29";action[109][4] = "r14";action[110][4] = "r15";action[113][4] = "S99";action[114][4] = "r10";action[117][4] = "r12";action[118][4] = "r14";action[121][4] = "S99";action[122][4] = "r14";action[130][4] = "r12";action[13][4] = "r9";action[136][4] = "r13";action[137][4] = "r11";action[139][4] = "r28";action[140][4] = "r29";action[141][4] = "r30";action[142][4] = "r31";action[144][4] = "r13";action[146][4] = "r12";action[14][4] = "r9";action[148][4] = "r13";action[149][4] = "r11";action[150][4] = "S99";action[15][4] = "r9";action[152][4] = "r11";

	action[0][5] = "S7";action[2][5] = "S16";action[5][5] = "S28";action[9][5] = "S7";action[11][5] = "S16";action[14][5] = "S91";action[25][5] = "S7";action[26][5] = "r16";action[27][5] = "r17";action[30][5] = "r32";action[31][5] = "r33";action[32][5] = "r34";action[33][5] = "r35";action[34][5] = "r23";action[38][5] = "S7";action[39][5] = "S16";action[61][5] = "S111";action[62][5] = "S7";action[66][5] = "S16";action[69][5] = "S16";action[70][5] = "S16";action[77][5] = "S111";action[78][5] = "S16";action[97][5] = "S7";action[98][5] = "r18";action[99][5] = "r19";action[100][5] = "r20";action[101][5] = "S7";action[102][5] = "r21";action[103][5] = "r22";action[104][5] = "r24";action[105][5] = "r25";action[106][5] = "r26";action[107][5] = "r27";action[109][5] = "S139";action[115][5] = "S111";action[116][5] = "S111";action[118][5] = "S28";action[122][5] = "S91";action[126][5] = "S16";action[127][5] = "S16";action[138][5] = "S111";action[143][5] = "S111";action[144][5] = "S111";

	action[0][6] = "S8";action[2][6] = "S17";action[5][6] = "S29";action[9][6] = "S8";action[11][6] = "S17";action[14][6] = "S92";action[25][6] = "S8";action[26][6] = "r16";action[27][6] = "r17";action[30][6] = "r32";action[31][6] = "r33";action[32][6] = "r34";action[33][6] = "r35";action[34][6] = "r23";action[38][6] = "S8";action[39][6] = "S17";action[61][6] = "S112";action[62][6] = "S8";action[66][6] = "S17";action[69][6] = "S17";action[70][6] = "S17";action[77][6] = "S112";action[78][6] = "S17";action[97][6] = "S8";action[98][6] = "r18";action[99][6] = "r19";action[100][6] = "r20";action[101][6] = "S8";action[102][6] = "r21";action[103][6] = "r22";action[104][6] = "r24";action[105][6] = "r25";action[106][6] = "r26";action[107][6] = "r27";action[109][6] = "S140";action[115][6] = "S112";action[116][6] = "S112";action[118][6] = "S29";action[122][6] = "S92";action[126][6] = "S17";action[127][6] = "S17";action[138][6] = "S112";action[143][6] = "S112";action[144][6] = "S112";

	action[5][7] = "r14";action[6][7] = "r15";action[14][7] = "r14";action[15][7] = "r15";action[28][7] = "r28";action[29][7] = "r29";action[35][7] = "r30";action[36][7] = "r31";action[42][7] = "r30";action[43][7] = "r31";action[59][7] = "S100";action[60][7] = "r10";action[63][7] = "S100";action[75][7] = "S100";action[76][7] = "r10";action[91][7] = "r28";action[92][7] = "r29";action[109][7] = "r14";action[110][7] = "r15";action[113][7] = "S100";action[114][7] = "r10";action[117][7] = "r12";action[118][7] = "r14";action[121][7] = "S100";action[122][7] = "r14";action[130][7] = "r12";action[135][7] = "r9";action[136][7] = "r13";action[137][7] = "r11";action[139][7] = "r28";action[140][7] = "r29";action[141][7] = "r30";action[142][7] = "r31";action[144][7] = "r13";action[146][7] = "r12";action[147][7] = "r9";action[148][7] = "r13";action[149][7] = "r11";action[150][7] = "S100";action[151][7] = "r9";action[152][7] = "r11";

	action[0][8] = "S62";action[2][8] = "S78";action[9][8] = "S62";action[11][8] = "S78";action[25][8] = "S62";action[26][8] = "r16";action[27][8] = "r17";action[30][8] = "r32";action[31][8] = "r33";action[32][8] = "r34";action[33][8] = "r35";action[34][8] = "r23";action[38][8] = "S62";action[39][8] = "S78";action[61][8] = "S116";action[66][8] = "S78";action[69][8] = "S78";action[70][8] = "S78";action[77][8] = "S116";action[78][8] = "S78";action[98][8] = "r18";action[99][8] = "r19";action[100][8] = "r20";action[102][8] = "r21";action[103][8] = "r22";action[104][8] = "r24";action[105][8] = "r25";action[106][8] = "r26";action[107][8] = "r27";action[115][8] = "S116";action[116][8] = "S116";action[126][8] = "S78";action[127][8] = "S78";action[138][8] = "S116";action[143][8] = "S116";action[144][8] = "S116";
	action[5][9] = "r14";action[6][9] = "r15";action[14][9] = "r14";action[15][9] = "r15";action[28][9] = "r28";action[29][9] = "r29";action[35][9] = "r30";action[36][9] = "r31";action[42][9] = "r30";action[43][9] = "r31";action[60][9] = "S105";action[76][9] = "S105";action[91][9] = "r28";action[92][9] = "r29";action[109][9] = "r14";action[110][9] = "r15";action[114][9] = "S105";action[117][9] = "r12";action[118][9] = "r14";action[122][9] = "r14";action[130][9] = "r12";action[135][9] = "S105";action[136][9] = "r13";action[137][9] = "r11";action[139][9] = "r28";action[140][9] = "r29";action[141][9] = "r30";action[142][9] = "r31";action[144][9] = "r13";action[146][9] = "r12";action[147][9] = "S105";action[148][9] = "r13";action[149][9] = "r11";action[151][9] = "S105";action[152][9] = "r11";

	action[5][10] = "r14";action[6][10] = "r15";action[14][10] = "r14";action[15][10] = "r15";action[28][10] = "r28";action[29][10] = "r29";action[35][10] = "r30";action[36][10] = "r31";action[42][10] = "r30";action[43][10] = "r31";action[60][10] = "S102";action[76][10] = "S102";action[91][10] = "r28";action[92][10] = "r29";action[109][10] = "r14";action[110][10] = "r15";action[114][10] = "S102";action[117][10] = "r12";action[118][10] = "r14";action[122][10] = "r14";action[130][10] = "r12";action[135][10] = "S102";action[136][10] = "r13";action[137][10] = "r11";action[139][10] = "r28";action[140][10] = "r29";action[141][10] = "r30";action[142][10] = "r31";action[144][10] = "r13";action[146][10] = "r12";action[147][10] = "S102";action[148][10] = "r13";action[149][10] = "r11";action[151][10] = "S102";action[152][10] = "r11";

	action[5][11] = "r14";action[6][11] = "r15";action[14][11] = "r14";action[15][11] = "r15";action[28][11] = "r28";action[29][11] = "r29";action[35][11] = "r30";action[36][11] = "r31";action[42][11] = "r30";action[43][11] = "r31";action[60][11] = "S106";action[76][11] = "S106";action[91][11] = "r28";action[92][11] = "r29";action[109][11] = "r14";action[110][11] = "r15";action[114][11] = "S106";action[117][11] = "r12";action[118][11] = "r14";action[122][11] = "r14";action[130][11] = "r12";action[135][11] = "S106";action[136][11] = "r13";action[137][11] = "r11";action[139][11] = "r28";action[140][11] = "r29";action[141][11] = "r30";action[142][11] = "r31";action[144][11] = "r13";action[146][11] = "r12";action[147][11] = "S106";action[148][11] = "r13";action[149][11] = "r11";action[151][11] = "S106";action[152][11] = "r11";
	action[5][12] = "r14";action[6][12] = "r15";action[14][12] = "r14";action[15][12] = "r15";action[28][12] = "r28";action[29][12] = "r29";action[35][12] = "r30";action[36][12] = "r31";action[42][12] = "r30";action[43][12] = "r31";action[60][12] = "S107";action[76][12] = "S107";action[91][12] = "r28";action[92][12] = "r29";action[109][12] = "r14";action[110][12] = "r15";action[114][12] = "S107";action[117][12] = "r12";action[118][12] = "r14";action[122][12] = "r14";action[130][12] = "r12";action[135][12] = "S107";action[136][12] = "r13";action[137][12] = "r11";action[139][12] = "r28";action[140][12] = "r29";action[141][12] = "r30";action[142][12] = "r31";action[144][12] = "r13";action[146][12] = "r12";action[147][12] = "S107";action[148][12] = "r13";action[149][12] = "r11";action[151][12] = "S107";action[152][12] = "r11";

	action[5][13] = "r14";action[6][13] = "r15";action[14][13] = "r14";action[15][13] = "r15";action[28][13] = "r28";action[29][13] = "r29";action[35][13] = "r30";action[36][13] = "r31";action[42][13] = "r30";action[43][13] = "r31";action[60][13] = "S104";action[76][13] = "S104";action[91][13] = "r28";action[92][13] = "r29";action[109][13] = "r14";action[110][13] = "r15";action[114][13] = "S104";action[117][13] = "r12";action[118][13] = "r14";action[122][13] = "r14";action[130][13] = "r12";action[135][13] = "S104";action[136][13] = "r13";action[137][13] = "r11";action[139][13] = "r28";action[140][13] = "r29";action[141][13] = "r30";action[142][13] = "r31";action[144][13] = "r13";action[146][13] = "r12";action[147][13] = "S104";action[148][13] = "r13";action[149][13] = "r11";action[151][13] = "S104";action[152][13] = "r11";

	action[5][14] = "r14";action[6][14] = "r15";action[14][14] = "r14";action[15][14] = "r15";action[28][14] = "r28";action[29][14] = "r29";action[35][14] = "r30";action[36][14] = "r31";action[42][14] = "r30";action[43][14] = "r31";action[60][14] = "S103";action[76][14] = "S103";action[91][14] = "r28";action[92][14] = "r29";action[109][14] = "r14";action[110][14] = "r15";action[114][14] = "S103";action[117][14] = "r12";action[118][14] = "r14";action[122][14] = "r14";action[130][14] = "r12";action[135][14] = "S103";action[136][14] = "r13";action[137][14] = "r11";action[139][14] = "r28";action[140][14] = "r29";action[141][14] = "r30";action[142][14] = "r31";action[144][14] = "r13";action[146][14] = "r12";action[147][14] = "S103";action[148][14] = "r13";action[149][14] = "r11";action[151][14] = "S103";action[152][14] = "r11";

	action[5][15] = "S34";action[14][15] = "S34";action[122][15] = "S34";
	action[5][16] = "S30";action[14][16] = "S30";action[122][16] = "S30";
	action[5][17] = "S31";action[14][17] = "S31";action[122][17] = "S31";
	action[5][18] = "S32";action[14][18] = "S32";action[122][18] = "S32";
	action[5][19] = "S33";action[14][19] = "S33";action[122][19] = "S33";

	action[0][21] = "S61";action[2][21] = "S77";action[9][21] = "S61";action[11][21] = "S77";action[25][21] = "S61";action[26][21] = "r16";action[27][21] = "r17";action[30][21] = "r32";action[31][21] = "r33";action[32][21] = "r34";action[33][21] = "r35";action[34][21] = "r23";action[38][21] = "S61";action[39][21] = "S77";action[61][21] = "S115";action[66][21] = "S77";action[69][21] = "S77";action[70][21] = "S77";action[77][21] = "S115";action[78][21] = "S77";action[98][21] = "r18";action[99][21] = "r19";action[100][21] = "r20";action[102][21] = "r21";action[103][21] = "r22";action[104][21] = "r24";action[105][21] = "r25";action[106][21] = "r26";action[107][21] = "r27";action[115][21] = "S115";action[116][21] = "S115";action[126][21] = "S77";action[127][21] = "S77";action[138][21] = "S115";action[143][21] = "S115";action[144][21] = "S115";

	action[98][23] = "r18";action[99][23] = "r19";action[100][23] = "r20";action[108][23] = "S137";action[109][23] = "r14";action[110][23] = "r15";action[113][23] = "r8";action[114][23] = "r10";action[134][23] = "S149";action[139][23] = "r28";action[140][23] = "r29";action[144][23] = "r13";action[145][23] = "S152";action[146][23] = "r12";action[150][23] = "r7";action[151][23] = "r9";action[152][23] = "r11";

	action[1][24] = "S9";action[4][24] = "r5";action[5][24] = "r14";action[6][24] = "r15";action[10][24] = "r2";action[13][24] = "r5";action[14][24] = "r14";action[15][24] = "r15";action[35][24] = "r30";action[36][24] = "r31";action[37][24] = "r3";action[40][24] = "r2";action[42][24] = "r30";action[43][24] = "r31";action[59][24] = "r8";action[60][24] = "r10";action[63][24] = "r7";action[64][24] = "r1";action[65][24] = "r3";action[75][24] = "r8";action[76][24] = "r10";action[117][24] = "r12";action[118][24] = "r14";action[119][24] = "r1";action[121][24] = "r7";action[122][24] = "r14";action[123][24] = "r6";action[135][24] = "r9";action[136][24] = "r13";action[137][24] = "r11";action[147][24] = "r9";action[148][24] = "r13";action[149][24] = "r11";action[28][24] = "r28";action[24][29] = "r29";

	action[0][25] = "S5";action[2][25] = "S14";action[7][25] = "S35";action[8][25] = "S36";action[11][25] = "S14";action[16][25] = "S42";action[17][25] = "S43";action[25][25] = "S118";action[26][25] = "r16";action[27][25] = "r17";action[30][25] = "r32";action[31][25] = "r33";action[32][25] = "r34";action[33][25] = "r35";action[34][25] = "r23";action[38][25] = "S5";action[39][25] = "S14";action[61][25] = "S109";action[62][25] = "S118";action[66][25] = "S14";action[69][25] = "S122";action[70][25] = "S122";action[77][25] = "S109";action[78][25] = "S122";action[97][25] = "S118";action[98][25] = "r18";action[99][25] = "r19";action[100][25] = "r20";action[101][25] = "S118";action[102][25] = "r21";action[103][25] = "r22";action[104][25] = "r24";action[105][25] = "r25";action[106][25] = "r26";action[107][25] = "r27";action[111][25] = "S141";action[112][25] = "S142";action[115][25] = "S109";action[116][25] = "S109";action[126][25] = "S122";action[127][25] = "S122";action[138][25] = "S109";action[143][25] = "S109";action[144][25] = "S109";action[9][25] = "S5";

	action[0][26] = "S6";action[2][26] = "S15";action[11][26] = "S15";action[14][26] = "S34";action[39][26] = "S15";action[61][26] = "S110";action[62][26] = "S6";action[66][26] = "S15";action[69][26] = "S15";action[70][26] = "S15";action[78][26] = "S15";action[97][26] = "S6";action[98][26] = "r18";action[99][26] = "r19";action[100][26] = "r20";action[101][26] = "S6";action[102][26] = "r21";action[103][26] = "r22";action[104][26] = "r24";action[105][26] = "r25";action[106][26] = "r26";action[107][26] = "r27";action[116][26] = "S110";action[122][26] = "S34";action[126][26] = "S15";action[127][26] = "S15";action[138][26] = "S110";action[143][26] = "S110";action[144][26] = "S110";action[26][26] = "r16";action[27][26] = "r17";action[30][26] = "r32";action[31][26] = "r33";action[32][26] = "r34";action[33][26] = "r35";action[34][26] = "r23";
	action[0][27] = "S2";action[2][27] = "S11";action[9][27] = "S2";action[11][27] = "S11";action[38][27] = "S2";action[39][27] = "S11";action[66][27] = "S11";action[9][26] = "S6";

	action[10][28] = "S38";action[13][28] = "r5";action[14][28] = "r14";action[15][28] = "r15";action[40][28] = "r2";action[42][28] = "r30";action[43][28] = "r31";action[65][28] = "r3";action[75][28] = "r8";action[76][28] = "r10";action[91][28] = "r28";action[92][28] = "r29";action[119][28] = "r1";action[121][28] = "r7";action[122][28] = "r14";action[123][28] = "r6";action[147][28] = "r9";action[148][28] = "r13";action[149][28] = "r11";

	action[1][29] = "acc";action[4][29] = "r5";action[5][29] = "r14";action[6][29] = "r15";action[10][29] = "r2";action[13][29] = "r5";action[14][29] = "r14";action[15][29] = "r15";action[35][29] = "r30";action[36][29] = "r31";action[37][29] = "r3";action[40][29] = "r2";action[42][29] = "r30";action[43][29] = "r31";action[59][29] = "r8";action[60][29] = "r10";action[63][29] = "r7";action[64][29] = "r1";action[65][29] = "r3";action[75][29] = "r8";action[76][29] = "r10";action[117][29] = "r12";action[118][29] = "r14";action[119][29] = "r1";action[121][29] = "r7";action[122][29] = "r14";action[123][29] = "r6";action[135][29] = "r9";action[136][29] = "r13";action[137][29] = "r11";action[147][29] = "r9";action[148][29] = "r13";action[149][29] = "r11";action[28][29] = "r28";action[29][29] = "r29";
}

void Data::setVN()
{
	VN.resize(33);
	VN = { "", "+","-","*","/","++","--","%","!","!=","==",">","<","<=",">=","=","+=","-=","*=","/=","{","(","}",")",";","id","num","if","else" };
}

void Data::setProduct()
{
	prods.resize(36);
	prods = {
		{ 0,"S'->S",1 },
		{ 1,"S->if S else S",4 },
		{ 1,"S->if S",2 },
		{ 1,"S->S;S",3 },
		{ 1,"S->{S}",3 },
		{ 1,"S->E",1 },
		{ 1,"S->id<assign>E",3 },
		{ 2,"E->E<op1>T",3 },
		{ 2,"E->T",1 },
		{ 4,"T->T<op2>F",3 },
		{ 4,"T->F",1 },
		{ 3,"F->(E)",3 },
		{ 3,"F->!F",2 },
		{ 3,"F->F<op3>F",3 },
		{ 3,"F->id",1 },
		{ 3,"F->num",1 },
		{ 6,"<op1>->+",1 },
		{ 6,"<op1>->-",1 },
		{ 7,"<op2>->*",1 },
		{ 7,"<op2>->/",1 },
		{ 7,"<op2>->%",1 },
		{ 8,"<op3>->==",1 },
		{ 8,"<op3>->>=",1 },
		{ 5,"<assign>->=",1 },
		{ 8,"<op3>-><=",1 },
		{ 8,"<op3>->!=",1 },
		{ 8,"<op3>->>",1 },
		{ 8,"<op3>-><",1 },
		{ 3,"F->id++",2 },
		{ 3,"F->id--",2 },
		{ 3,"F->++id",2 },
		{ 3,"F->--id",2 },
		{ 5,"<assign>->+=",1 },
		{ 5,"<assign>->-=",1 },
		{ 5,"<assign>->*=",1 },
		{ 5,"<assign>->/=",1 } };
}

int Data::nextToken()
{
	string content;
	string value;
	if (in.eof())
	{
		return 29;
	}
	in >> content;
	while ((content == "")&&!(in.eof()))
	{
		in >> content;
	}
	if (in.eof())
	{
		return 29;
	}
		int index = content.find(',');
		value = content.substr(1, index - 1);
	   for (int i = 0;i < VN.size();i++)
	  {
		if (value==VN[i])
		return i;
	  }
	  int  index1 = content.find(',', index + 1);
	  value = content.substr(index+1, index1- index - 1);
	  if (value == "ID")
		  return 25;
	  if (value == "Num")
		  return 26;
	return 0;
}
