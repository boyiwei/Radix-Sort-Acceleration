#include <stdio.h>
#include "dataset_size.h"
#define bit_width_bin 32
#define bit_width_hex bit_width_bin/4


void input_bucket(int data[dataset_size], 
int bucket_0_0[dataset_size/16], int bucket_0_1[dataset_size/16], int bucket_0_2[dataset_size/16], int bucket_0_3[dataset_size/16], int bucket_0_4[dataset_size/16], int bucket_0_5[dataset_size/16], int bucket_0_6[dataset_size/16], int bucket_0_7[dataset_size/16], int bucket_0_8[dataset_size/16], int bucket_0_9[dataset_size/16], int bucket_0_10[dataset_size/16], int bucket_0_11[dataset_size/16], int bucket_0_12[dataset_size/16], int bucket_0_13[dataset_size/16], int bucket_0_14[dataset_size/16], int bucket_0_15[dataset_size/16],
int bucket_1_0[dataset_size/16], int bucket_1_1[dataset_size/16], int bucket_1_2[dataset_size/16], int bucket_1_3[dataset_size/16], int bucket_1_4[dataset_size/16], int bucket_1_5[dataset_size/16], int bucket_1_6[dataset_size/16], int bucket_1_7[dataset_size/16], int bucket_1_8[dataset_size/16], int bucket_1_9[dataset_size/16], int bucket_1_10[dataset_size/16], int bucket_1_11[dataset_size/16], int bucket_1_12[dataset_size/16], int bucket_1_13[dataset_size/16], int bucket_1_14[dataset_size/16], int bucket_1_15[dataset_size/16],
int bucket_2_0[dataset_size/16], int bucket_2_1[dataset_size/16], int bucket_2_2[dataset_size/16], int bucket_2_3[dataset_size/16], int bucket_2_4[dataset_size/16], int bucket_2_5[dataset_size/16], int bucket_2_6[dataset_size/16], int bucket_2_7[dataset_size/16], int bucket_2_8[dataset_size/16], int bucket_2_9[dataset_size/16], int bucket_2_10[dataset_size/16], int bucket_2_11[dataset_size/16], int bucket_2_12[dataset_size/16], int bucket_2_13[dataset_size/16], int bucket_2_14[dataset_size/16], int bucket_2_15[dataset_size/16],
int bucket_3_0[dataset_size/16], int bucket_3_1[dataset_size/16], int bucket_3_2[dataset_size/16], int bucket_3_3[dataset_size/16], int bucket_3_4[dataset_size/16], int bucket_3_5[dataset_size/16], int bucket_3_6[dataset_size/16], int bucket_3_7[dataset_size/16], int bucket_3_8[dataset_size/16], int bucket_3_9[dataset_size/16], int bucket_3_10[dataset_size/16], int bucket_3_11[dataset_size/16], int bucket_3_12[dataset_size/16], int bucket_3_13[dataset_size/16], int bucket_3_14[dataset_size/16], int bucket_3_15[dataset_size/16],
int bucket_4_0[dataset_size/16], int bucket_4_1[dataset_size/16], int bucket_4_2[dataset_size/16], int bucket_4_3[dataset_size/16], int bucket_4_4[dataset_size/16], int bucket_4_5[dataset_size/16], int bucket_4_6[dataset_size/16], int bucket_4_7[dataset_size/16], int bucket_4_8[dataset_size/16], int bucket_4_9[dataset_size/16], int bucket_4_10[dataset_size/16], int bucket_4_11[dataset_size/16], int bucket_4_12[dataset_size/16], int bucket_4_13[dataset_size/16], int bucket_4_14[dataset_size/16], int bucket_4_15[dataset_size/16],
int bucket_5_0[dataset_size/16], int bucket_5_1[dataset_size/16], int bucket_5_2[dataset_size/16], int bucket_5_3[dataset_size/16], int bucket_5_4[dataset_size/16], int bucket_5_5[dataset_size/16], int bucket_5_6[dataset_size/16], int bucket_5_7[dataset_size/16], int bucket_5_8[dataset_size/16], int bucket_5_9[dataset_size/16], int bucket_5_10[dataset_size/16], int bucket_5_11[dataset_size/16], int bucket_5_12[dataset_size/16], int bucket_5_13[dataset_size/16], int bucket_5_14[dataset_size/16], int bucket_5_15[dataset_size/16],
int bucket_6_0[dataset_size/16], int bucket_6_1[dataset_size/16], int bucket_6_2[dataset_size/16], int bucket_6_3[dataset_size/16], int bucket_6_4[dataset_size/16], int bucket_6_5[dataset_size/16], int bucket_6_6[dataset_size/16], int bucket_6_7[dataset_size/16], int bucket_6_8[dataset_size/16], int bucket_6_9[dataset_size/16], int bucket_6_10[dataset_size/16], int bucket_6_11[dataset_size/16], int bucket_6_12[dataset_size/16], int bucket_6_13[dataset_size/16], int bucket_6_14[dataset_size/16], int bucket_6_15[dataset_size/16],
int bucket_7_0[dataset_size/16], int bucket_7_1[dataset_size/16], int bucket_7_2[dataset_size/16], int bucket_7_3[dataset_size/16], int bucket_7_4[dataset_size/16], int bucket_7_5[dataset_size/16], int bucket_7_6[dataset_size/16], int bucket_7_7[dataset_size/16], int bucket_7_8[dataset_size/16], int bucket_7_9[dataset_size/16], int bucket_7_10[dataset_size/16], int bucket_7_11[dataset_size/16], int bucket_7_12[dataset_size/16], int bucket_7_13[dataset_size/16], int bucket_7_14[dataset_size/16], int bucket_7_15[dataset_size/16],
int bucket_8_0[dataset_size/16], int bucket_8_1[dataset_size/16], int bucket_8_2[dataset_size/16], int bucket_8_3[dataset_size/16], int bucket_8_4[dataset_size/16], int bucket_8_5[dataset_size/16], int bucket_8_6[dataset_size/16], int bucket_8_7[dataset_size/16], int bucket_8_8[dataset_size/16], int bucket_8_9[dataset_size/16], int bucket_8_10[dataset_size/16], int bucket_8_11[dataset_size/16], int bucket_8_12[dataset_size/16], int bucket_8_13[dataset_size/16], int bucket_8_14[dataset_size/16], int bucket_8_15[dataset_size/16],
int bucket_9_0[dataset_size/16], int bucket_9_1[dataset_size/16], int bucket_9_2[dataset_size/16], int bucket_9_3[dataset_size/16], int bucket_9_4[dataset_size/16], int bucket_9_5[dataset_size/16], int bucket_9_6[dataset_size/16], int bucket_9_7[dataset_size/16], int bucket_9_8[dataset_size/16], int bucket_9_9[dataset_size/16], int bucket_9_10[dataset_size/16], int bucket_9_11[dataset_size/16], int bucket_9_12[dataset_size/16], int bucket_9_13[dataset_size/16], int bucket_9_14[dataset_size/16], int bucket_9_15[dataset_size/16],
int bucket_10_0[dataset_size/16], int bucket_10_1[dataset_size/16], int bucket_10_2[dataset_size/16], int bucket_10_3[dataset_size/16], int bucket_10_4[dataset_size/16], int bucket_10_5[dataset_size/16], int bucket_10_6[dataset_size/16], int bucket_10_7[dataset_size/16], int bucket_10_8[dataset_size/16], int bucket_10_9[dataset_size/16], int bucket_10_10[dataset_size/16], int bucket_10_11[dataset_size/16], int bucket_10_12[dataset_size/16], int bucket_10_13[dataset_size/16], int bucket_10_14[dataset_size/16], int bucket_10_15[dataset_size/16],
int bucket_11_0[dataset_size/16], int bucket_11_1[dataset_size/16], int bucket_11_2[dataset_size/16], int bucket_11_3[dataset_size/16], int bucket_11_4[dataset_size/16], int bucket_11_5[dataset_size/16], int bucket_11_6[dataset_size/16], int bucket_11_7[dataset_size/16], int bucket_11_8[dataset_size/16], int bucket_11_9[dataset_size/16], int bucket_11_10[dataset_size/16], int bucket_11_11[dataset_size/16], int bucket_11_12[dataset_size/16], int bucket_11_13[dataset_size/16], int bucket_11_14[dataset_size/16], int bucket_11_15[dataset_size/16],
int bucket_12_0[dataset_size/16], int bucket_12_1[dataset_size/16], int bucket_12_2[dataset_size/16], int bucket_12_3[dataset_size/16], int bucket_12_4[dataset_size/16], int bucket_12_5[dataset_size/16], int bucket_12_6[dataset_size/16], int bucket_12_7[dataset_size/16], int bucket_12_8[dataset_size/16], int bucket_12_9[dataset_size/16], int bucket_12_10[dataset_size/16], int bucket_12_11[dataset_size/16], int bucket_12_12[dataset_size/16], int bucket_12_13[dataset_size/16], int bucket_12_14[dataset_size/16], int bucket_12_15[dataset_size/16],
int bucket_13_0[dataset_size/16], int bucket_13_1[dataset_size/16], int bucket_13_2[dataset_size/16], int bucket_13_3[dataset_size/16], int bucket_13_4[dataset_size/16], int bucket_13_5[dataset_size/16], int bucket_13_6[dataset_size/16], int bucket_13_7[dataset_size/16], int bucket_13_8[dataset_size/16], int bucket_13_9[dataset_size/16], int bucket_13_10[dataset_size/16], int bucket_13_11[dataset_size/16], int bucket_13_12[dataset_size/16], int bucket_13_13[dataset_size/16], int bucket_13_14[dataset_size/16], int bucket_13_15[dataset_size/16],
int bucket_14_0[dataset_size/16], int bucket_14_1[dataset_size/16], int bucket_14_2[dataset_size/16], int bucket_14_3[dataset_size/16], int bucket_14_4[dataset_size/16], int bucket_14_5[dataset_size/16], int bucket_14_6[dataset_size/16], int bucket_14_7[dataset_size/16], int bucket_14_8[dataset_size/16], int bucket_14_9[dataset_size/16], int bucket_14_10[dataset_size/16], int bucket_14_11[dataset_size/16], int bucket_14_12[dataset_size/16], int bucket_14_13[dataset_size/16], int bucket_14_14[dataset_size/16], int bucket_14_15[dataset_size/16],
int bucket_15_0[dataset_size/16], int bucket_15_1[dataset_size/16], int bucket_15_2[dataset_size/16], int bucket_15_3[dataset_size/16], int bucket_15_4[dataset_size/16], int bucket_15_5[dataset_size/16], int bucket_15_6[dataset_size/16], int bucket_15_7[dataset_size/16], int bucket_15_8[dataset_size/16], int bucket_15_9[dataset_size/16], int bucket_15_10[dataset_size/16], int bucket_15_11[dataset_size/16], int bucket_15_12[dataset_size/16], int bucket_15_13[dataset_size/16], int bucket_15_14[dataset_size/16], int bucket_15_15[dataset_size/16],
int bucket_pointer[16][16]){
    for (int j = 0; j < dataset_size; j++) {
#pragma HLS PIPELINE
        int shifted0 = data[j] >> 4;	
		int shifted1 = data[j] >> 8;
        int radix0 = shifted0 & 0xf;
		int radix1 = (shifted1 >> 4) & 0xf;
		if(radix0==0 && radix1==0){
			bucket_0_0[bucket_pointer[0][0]] = data[j];
			bucket_pointer[0][0] += 1;
		}
		else if(radix0==0 && radix1==1){
		bucket_0_1[bucket_pointer[0][1]] = data[j];
		bucket_pointer[0][1] += 1;
		}
		else if(radix0==0 && radix1==2){
			bucket_0_2[bucket_pointer[0][2]] = data[j];
			bucket_pointer[0][2] += 1;
		}
		else if(radix0==0 && radix1==3){
			bucket_0_3[bucket_pointer[0][3]] = data[j];
			bucket_pointer[0][3] += 1;
		}
		else if(radix0==0 && radix1==4){
			bucket_0_4[bucket_pointer[0][4]] = data[j];
			bucket_pointer[0][4] += 1;
		}
		else if(radix0==0 && radix1==5){
			bucket_0_5[bucket_pointer[0][5]] = data[j];
			bucket_pointer[0][5] += 1;
		}
		else if(radix0==0 && radix1==6){
			bucket_0_6[bucket_pointer[0][6]] = data[j];
			bucket_pointer[0][6] += 1;
		}
		else if(radix0==0 && radix1==7){
			bucket_0_7[bucket_pointer[0][7]] = data[j];
			bucket_pointer[0][7] += 1;
		}
		else if(radix0==0 && radix1==8){
			bucket_0_8[bucket_pointer[0][8]] = data[j];
			bucket_pointer[0][8] += 1;
		}
		else if(radix0==0 && radix1==9){
			bucket_0_9[bucket_pointer[0][9]] = data[j];
			bucket_pointer[0][9] += 1;
		}
		else if(radix0==0 && radix1==10){
			bucket_0_10[bucket_pointer[0][10]] = data[j];
			bucket_pointer[0][10] += 1;
		}
		else if(radix0==0 && radix1==11){
			bucket_0_11[bucket_pointer[0][11]] = data[j];
			bucket_pointer[0][11] += 1;
		}
		else if(radix0==0 && radix1==12){
			bucket_0_12[bucket_pointer[0][12]] = data[j];
			bucket_pointer[0][12] += 1;
		}
		else if(radix0==0 && radix1==13){
			bucket_0_13[bucket_pointer[0][13]] = data[j];
			bucket_pointer[0][13] += 1;
		}
		else if(radix0==0 && radix1==14){
			bucket_0_14[bucket_pointer[0][14]] = data[j];
			bucket_pointer[0][14] += 1;
		}
		else if(radix0==0 && radix1==15){
			bucket_0_15[bucket_pointer[0][15]] = data[j];
			bucket_pointer[0][15] += 1;
		}
		else if(radix0==1 && radix1==0){
			bucket_1_0[bucket_pointer[1][0]] = data[j];
			bucket_pointer[1][0] += 1;
		}
		else if(radix0==1 && radix1==1){
			bucket_1_1[bucket_pointer[1][1]] = data[j];
			bucket_pointer[1][1] += 1;
		}
		else if(radix0==1 && radix1==2){
			bucket_1_2[bucket_pointer[1][2]] = data[j];
			bucket_pointer[1][2] += 1;
		}
		else if(radix0==1 && radix1==3){
			bucket_1_3[bucket_pointer[1][3]] = data[j];
			bucket_pointer[1][3] += 1;
		}
		else if(radix0==1 && radix1==4){
			bucket_1_4[bucket_pointer[1][4]] = data[j];
			bucket_pointer[1][4] += 1;
		}
		else if(radix0==1 && radix1==5){
			bucket_1_5[bucket_pointer[1][5]] = data[j];
			bucket_pointer[1][5] += 1;
		}
		else if(radix0==1 && radix1==6){
			bucket_1_6[bucket_pointer[1][6]] = data[j];
			bucket_pointer[1][6] += 1;
		}
		else if(radix0==1 && radix1==7){
			bucket_1_7[bucket_pointer[1][7]] = data[j];
			bucket_pointer[1][7] += 1;
		}
		else if(radix0==1 && radix1==8){
			bucket_1_8[bucket_pointer[1][8]] = data[j];
			bucket_pointer[1][8] += 1;
		}
		else if(radix0==1 && radix1==9){
			bucket_1_9[bucket_pointer[1][9]] = data[j];
			bucket_pointer[1][9] += 1;
		}
		else if(radix0==1 && radix1==10){
			bucket_1_10[bucket_pointer[1][10]] = data[j];
			bucket_pointer[1][10] += 1;
		}
		else if(radix0==1 && radix1==11){
			bucket_1_11[bucket_pointer[1][11]] = data[j];
			bucket_pointer[1][11] += 1;
		}
		else if(radix0==1 && radix1==12){
			bucket_1_12[bucket_pointer[1][12]] = data[j];
			bucket_pointer[1][12] += 1;
		}
		else if(radix0==1 && radix1==13){
			bucket_1_13[bucket_pointer[1][13]] = data[j];
			bucket_pointer[1][13] += 1;
		}
		else if(radix0==1 && radix1==14){
			bucket_1_14[bucket_pointer[1][14]] = data[j];
			bucket_pointer[1][14] += 1;
		}
		else if(radix0==1 && radix1==15){
			bucket_1_15[bucket_pointer[1][15]] = data[j];
			bucket_pointer[1][15] += 1;
		}
		else if(radix0==2 && radix1==0){
			bucket_2_0[bucket_pointer[2][0]] = data[j];
			bucket_pointer[2][0] += 1;
		}
		else if(radix0==2 && radix1==1){
			bucket_2_1[bucket_pointer[2][1]] = data[j];
			bucket_pointer[2][1] += 1;
		}
		else if(radix0==2 && radix1==2){
			bucket_2_2[bucket_pointer[2][2]] = data[j];
			bucket_pointer[2][2] += 1;
		}
		else if(radix0==2 && radix1==3){
			bucket_2_3[bucket_pointer[2][3]] = data[j];
			bucket_pointer[2][3] += 1;
		}
		else if(radix0==2 && radix1==4){
			bucket_2_4[bucket_pointer[2][4]] = data[j];
			bucket_pointer[2][4] += 1;
		}
		else if(radix0==2 && radix1==5){
			bucket_2_5[bucket_pointer[2][5]] = data[j];
			bucket_pointer[2][5] += 1;
		}
		else if(radix0==2 && radix1==6){
			bucket_2_6[bucket_pointer[2][6]] = data[j];
			bucket_pointer[2][6] += 1;
		}
		else if(radix0==2 && radix1==7){
			bucket_2_7[bucket_pointer[2][7]] = data[j];
			bucket_pointer[2][7] += 1;
		}
		else if(radix0==2 && radix1==8){
			bucket_2_8[bucket_pointer[2][8]] = data[j];
			bucket_pointer[2][8] += 1;
		}
		else if(radix0==2 && radix1==9){
			bucket_2_9[bucket_pointer[2][9]] = data[j];
			bucket_pointer[2][9] += 1;
		}
		else if(radix0==2 && radix1==10){
			bucket_2_10[bucket_pointer[2][10]] = data[j];
			bucket_pointer[2][10] += 1;
		}
		else if(radix0==2 && radix1==11){
			bucket_2_11[bucket_pointer[2][11]] = data[j];
			bucket_pointer[2][11] += 1;
		}
		else if(radix0==2 && radix1==12){
			bucket_2_12[bucket_pointer[2][12]] = data[j];
			bucket_pointer[2][12] += 1;
		}
		else if(radix0==2 && radix1==13){
			bucket_2_13[bucket_pointer[2][13]] = data[j];
			bucket_pointer[2][13] += 1;
		}
		else if(radix0==2 && radix1==14){
			bucket_2_14[bucket_pointer[2][14]] = data[j];
			bucket_pointer[2][14] += 1;
		}
		else if(radix0==2 && radix1==15){
			bucket_2_15[bucket_pointer[2][15]] = data[j];
			bucket_pointer[2][15] += 1;
		}
		else if(radix0==3 && radix1==0){
			bucket_3_0[bucket_pointer[3][0]] = data[j];
			bucket_pointer[3][0] += 1;
		}
		else if(radix0==3 && radix1==1){
			bucket_3_1[bucket_pointer[3][1]] = data[j];
			bucket_pointer[3][1] += 1;
		}
		else if(radix0==3 && radix1==2){
			bucket_3_2[bucket_pointer[3][2]] = data[j];
			bucket_pointer[3][2] += 1;
		}
		else if(radix0==3 && radix1==3){
			bucket_3_3[bucket_pointer[3][3]] = data[j];
			bucket_pointer[3][3] += 1;
		}
		else if(radix0==3 && radix1==4){
			bucket_3_4[bucket_pointer[3][4]] = data[j];
			bucket_pointer[3][4] += 1;
		}
		else if(radix0==3 && radix1==5){
			bucket_3_5[bucket_pointer[3][5]] = data[j];
			bucket_pointer[3][5] += 1;
		}
		else if(radix0==3 && radix1==6){
			bucket_3_6[bucket_pointer[3][6]] = data[j];
			bucket_pointer[3][6] += 1;
		}
		else if(radix0==3 && radix1==7){
			bucket_3_7[bucket_pointer[3][7]] = data[j];
			bucket_pointer[3][7] += 1;
		}
		else if(radix0==3 && radix1==8){
			bucket_3_8[bucket_pointer[3][8]] = data[j];
			bucket_pointer[3][8] += 1;
		}
		else if(radix0==3 && radix1==9){
			bucket_3_9[bucket_pointer[3][9]] = data[j];
			bucket_pointer[3][9] += 1;
		}
		else if(radix0==3 && radix1==10){
			bucket_3_10[bucket_pointer[3][10]] = data[j];
			bucket_pointer[3][10] += 1;
		}
		else if(radix0==3 && radix1==11){
			bucket_3_11[bucket_pointer[3][11]] = data[j];
			bucket_pointer[3][11] += 1;
		}
		else if(radix0==3 && radix1==12){
			bucket_3_12[bucket_pointer[3][12]] = data[j];
			bucket_pointer[3][12] += 1;
		}
		else if(radix0==3 && radix1==13){
			bucket_3_13[bucket_pointer[3][13]] = data[j];
			bucket_pointer[3][13] += 1;
		}
		else if(radix0==3 && radix1==14){
			bucket_3_14[bucket_pointer[3][14]] = data[j];
			bucket_pointer[3][14] += 1;
		}
		else if(radix0==3 && radix1==15){
			bucket_3_15[bucket_pointer[3][15]] = data[j];
			bucket_pointer[3][15] += 1;
		}
		else if(radix0==4 && radix1==0){
			bucket_4_0[bucket_pointer[4][0]] = data[j];
			bucket_pointer[4][0] += 1;
		}
		else if(radix0==4 && radix1==1){
			bucket_4_1[bucket_pointer[4][1]] = data[j];
			bucket_pointer[4][1] += 1;
		}
		else if(radix0==4 && radix1==2){
			bucket_4_2[bucket_pointer[4][2]] = data[j];
			bucket_pointer[4][2] += 1;
		}
		else if(radix0==4 && radix1==3){
			bucket_4_3[bucket_pointer[4][3]] = data[j];
			bucket_pointer[4][3] += 1;
		}
		else if(radix0==4 && radix1==4){
			bucket_4_4[bucket_pointer[4][4]] = data[j];
			bucket_pointer[4][4] += 1;
		}
		else if(radix0==4 && radix1==5){
			bucket_4_5[bucket_pointer[4][5]] = data[j];
			bucket_pointer[4][5] += 1;
		}
		else if(radix0==4 && radix1==6){
			bucket_4_6[bucket_pointer[4][6]] = data[j];
			bucket_pointer[4][6] += 1;
		}
		else if(radix0==4 && radix1==7){
			bucket_4_7[bucket_pointer[4][7]] = data[j];
			bucket_pointer[4][7] += 1;
		}
		else if(radix0==4 && radix1==8){
			bucket_4_8[bucket_pointer[4][8]] = data[j];
			bucket_pointer[4][8] += 1;
		}
		else if(radix0==4 && radix1==9){
			bucket_4_9[bucket_pointer[4][9]] = data[j];
			bucket_pointer[4][9] += 1;
		}
		else if(radix0==4 && radix1==10){
			bucket_4_10[bucket_pointer[4][10]] = data[j];
			bucket_pointer[4][10] += 1;
		}
		else if(radix0==4 && radix1==11){
			bucket_4_11[bucket_pointer[4][11]] = data[j];
			bucket_pointer[4][11] += 1;
		}
		else if(radix0==4 && radix1==12){
			bucket_4_12[bucket_pointer[4][12]] = data[j];
			bucket_pointer[4][12] += 1;
		}
		else if(radix0==4 && radix1==13){
			bucket_4_13[bucket_pointer[4][13]] = data[j];
			bucket_pointer[4][13] += 1;
		}
		else if(radix0==4 && radix1==14){
			bucket_4_14[bucket_pointer[4][14]] = data[j];
			bucket_pointer[4][14] += 1;
		}
		else if(radix0==4 && radix1==15){
			bucket_4_15[bucket_pointer[4][15]] = data[j];
			bucket_pointer[4][15] += 1;
		}
		else if(radix0==5 && radix1==0){
			bucket_5_0[bucket_pointer[5][0]] = data[j];
			bucket_pointer[5][0] += 1;
		}
		else if(radix0==5 && radix1==1){
			bucket_5_1[bucket_pointer[5][1]] = data[j];
			bucket_pointer[5][1] += 1;
		}
		else if(radix0==5 && radix1==2){
			bucket_5_2[bucket_pointer[5][2]] = data[j];
			bucket_pointer[5][2] += 1;
		}
		else if(radix0==5 && radix1==3){
			bucket_5_3[bucket_pointer[5][3]] = data[j];
			bucket_pointer[5][3] += 1;
		}
		else if(radix0==5 && radix1==4){
			bucket_5_4[bucket_pointer[5][4]] = data[j];
			bucket_pointer[5][4] += 1;
		}
		else if(radix0==5 && radix1==5){
			bucket_5_5[bucket_pointer[5][5]] = data[j];
			bucket_pointer[5][5] += 1;
		}
		else if(radix0==5 && radix1==6){
			bucket_5_6[bucket_pointer[5][6]] = data[j];
			bucket_pointer[5][6] += 1;
		}
		else if(radix0==5 && radix1==7){
			bucket_5_7[bucket_pointer[5][7]] = data[j];
			bucket_pointer[5][7] += 1;
		}
		else if(radix0==5 && radix1==8){
			bucket_5_8[bucket_pointer[5][8]] = data[j];
			bucket_pointer[5][8] += 1;
		}
		else if(radix0==5 && radix1==9){
			bucket_5_9[bucket_pointer[5][9]] = data[j];
			bucket_pointer[5][9] += 1;
		}
		else if(radix0==5 && radix1==10){
			bucket_5_10[bucket_pointer[5][10]] = data[j];
			bucket_pointer[5][10] += 1;
		}
		else if(radix0==5 && radix1==11){
			bucket_5_11[bucket_pointer[5][11]] = data[j];
			bucket_pointer[5][11] += 1;
		}
		else if(radix0==5 && radix1==12){
			bucket_5_12[bucket_pointer[5][12]] = data[j];
			bucket_pointer[5][12] += 1;
		}
		else if(radix0==5 && radix1==13){
			bucket_5_13[bucket_pointer[5][13]] = data[j];
			bucket_pointer[5][13] += 1;
		}
		else if(radix0==5 && radix1==14){
			bucket_5_14[bucket_pointer[5][14]] = data[j];
			bucket_pointer[5][14] += 1;
		}
		else if(radix0==5 && radix1==15){
			bucket_5_15[bucket_pointer[5][15]] = data[j];
			bucket_pointer[5][15] += 1;
		}
		else if(radix0==6 && radix1==0){
			bucket_6_0[bucket_pointer[6][0]] = data[j];
			bucket_pointer[6][0] += 1;
		}
		else if(radix0==6 && radix1==1){
			bucket_6_1[bucket_pointer[6][1]] = data[j];
			bucket_pointer[6][1] += 1;
		}
		else if(radix0==6 && radix1==2){
			bucket_6_2[bucket_pointer[6][2]] = data[j];
			bucket_pointer[6][2] += 1;
		}
		else if(radix0==6 && radix1==3){
			bucket_6_3[bucket_pointer[6][3]] = data[j];
			bucket_pointer[6][3] += 1;
		}
		else if(radix0==6 && radix1==4){
			bucket_6_4[bucket_pointer[6][4]] = data[j];
			bucket_pointer[6][4] += 1;
		}
		else if(radix0==6 && radix1==5){
			bucket_6_5[bucket_pointer[6][5]] = data[j];
			bucket_pointer[6][5] += 1;
		}
		else if(radix0==6 && radix1==6){
			bucket_6_6[bucket_pointer[6][6]] = data[j];
			bucket_pointer[6][6] += 1;
		}
		else if(radix0==6 && radix1==7){
			bucket_6_7[bucket_pointer[6][7]] = data[j];
			bucket_pointer[6][7] += 1;
		}
		else if(radix0==6 && radix1==8){
			bucket_6_8[bucket_pointer[6][8]] = data[j];
			bucket_pointer[6][8] += 1;
		}
		else if(radix0==6 && radix1==9){
			bucket_6_9[bucket_pointer[6][9]] = data[j];
			bucket_pointer[6][9] += 1;
		}
		else if(radix0==6 && radix1==10){
			bucket_6_10[bucket_pointer[6][10]] = data[j];
			bucket_pointer[6][10] += 1;
		}
		else if(radix0==6 && radix1==11){
			bucket_6_11[bucket_pointer[6][11]] = data[j];
			bucket_pointer[6][11] += 1;
		}
		else if(radix0==6 && radix1==12){
			bucket_6_12[bucket_pointer[6][12]] = data[j];
			bucket_pointer[6][12] += 1;
		}
		else if(radix0==6 && radix1==13){
			bucket_6_13[bucket_pointer[6][13]] = data[j];
			bucket_pointer[6][13] += 1;
		}
		else if(radix0==6 && radix1==14){
			bucket_6_14[bucket_pointer[6][14]] = data[j];
			bucket_pointer[6][14] += 1;
		}
		else if(radix0==6 && radix1==15){
			bucket_6_15[bucket_pointer[6][15]] = data[j];
			bucket_pointer[6][15] += 1;
		}
		else if(radix0==7 && radix1==0){
			bucket_7_0[bucket_pointer[7][0]] = data[j];
			bucket_pointer[7][0] += 1;
		}
		else if(radix0==7 && radix1==1){
			bucket_7_1[bucket_pointer[7][1]] = data[j];
			bucket_pointer[7][1] += 1;
		}
		else if(radix0==7 && radix1==2){
			bucket_7_2[bucket_pointer[7][2]] = data[j];
			bucket_pointer[7][2] += 1;
		}
		else if(radix0==7 && radix1==3){
			bucket_7_3[bucket_pointer[7][3]] = data[j];
			bucket_pointer[7][3] += 1;
		}
		else if(radix0==7 && radix1==4){
			bucket_7_4[bucket_pointer[7][4]] = data[j];
			bucket_pointer[7][4] += 1;
		}
		else if(radix0==7 && radix1==5){
			bucket_7_5[bucket_pointer[7][5]] = data[j];
			bucket_pointer[7][5] += 1;
		}
		else if(radix0==7 && radix1==6){
			bucket_7_6[bucket_pointer[7][6]] = data[j];
			bucket_pointer[7][6] += 1;
		}
		else if(radix0==7 && radix1==7){
			bucket_7_7[bucket_pointer[7][7]] = data[j];
			bucket_pointer[7][7] += 1;
		}
		else if(radix0==7 && radix1==8){
			bucket_7_8[bucket_pointer[7][8]] = data[j];
			bucket_pointer[7][8] += 1;
		}
		else if(radix0==7 && radix1==9){
			bucket_7_9[bucket_pointer[7][9]] = data[j];
			bucket_pointer[7][9] += 1;
		}
		else if(radix0==7 && radix1==10){
			bucket_7_10[bucket_pointer[7][10]] = data[j];
			bucket_pointer[7][10] += 1;
		}
		else if(radix0==7 && radix1==11){
			bucket_7_11[bucket_pointer[7][11]] = data[j];
			bucket_pointer[7][11] += 1;
		}
		else if(radix0==7 && radix1==12){
			bucket_7_12[bucket_pointer[7][12]] = data[j];
			bucket_pointer[7][12] += 1;
		}
		else if(radix0==7 && radix1==13){
			bucket_7_13[bucket_pointer[7][13]] = data[j];
			bucket_pointer[7][13] += 1;
		}
		else if(radix0==7 && radix1==14){
			bucket_7_14[bucket_pointer[7][14]] = data[j];
			bucket_pointer[7][14] += 1;
		}
		else if(radix0==7 && radix1==15){
			bucket_7_15[bucket_pointer[7][15]] = data[j];
			bucket_pointer[7][15] += 1;
		}
		else if(radix0==8 && radix1==0){
			bucket_8_0[bucket_pointer[8][0]] = data[j];
			bucket_pointer[8][0] += 1;
		}
		else if(radix0==8 && radix1==1){
			bucket_8_1[bucket_pointer[8][1]] = data[j];
			bucket_pointer[8][1] += 1;
		}
		else if(radix0==8 && radix1==2){
			bucket_8_2[bucket_pointer[8][2]] = data[j];
			bucket_pointer[8][2] += 1;
		}
		else if(radix0==8 && radix1==3){
			bucket_8_3[bucket_pointer[8][3]] = data[j];
			bucket_pointer[8][3] += 1;
		}
		else if(radix0==8 && radix1==4){
			bucket_8_4[bucket_pointer[8][4]] = data[j];
			bucket_pointer[8][4] += 1;
		}
		else if(radix0==8 && radix1==5){
			bucket_8_5[bucket_pointer[8][5]] = data[j];
			bucket_pointer[8][5] += 1;
		}
		else if(radix0==8 && radix1==6){
			bucket_8_6[bucket_pointer[8][6]] = data[j];
			bucket_pointer[8][6] += 1;
		}
		else if(radix0==8 && radix1==7){
			bucket_8_7[bucket_pointer[8][7]] = data[j];
			bucket_pointer[8][7] += 1;
		}
		else if(radix0==8 && radix1==8){
			bucket_8_8[bucket_pointer[8][8]] = data[j];
			bucket_pointer[8][8] += 1;
		}
		else if(radix0==8 && radix1==9){
			bucket_8_9[bucket_pointer[8][9]] = data[j];
			bucket_pointer[8][9] += 1;
		}
		else if(radix0==8 && radix1==10){
			bucket_8_10[bucket_pointer[8][10]] = data[j];
			bucket_pointer[8][10] += 1;
		}
		else if(radix0==8 && radix1==11){
			bucket_8_11[bucket_pointer[8][11]] = data[j];
			bucket_pointer[8][11] += 1;
		}
		else if(radix0==8 && radix1==12){
			bucket_8_12[bucket_pointer[8][12]] = data[j];
			bucket_pointer[8][12] += 1;
		}
		else if(radix0==8 && radix1==13){
			bucket_8_13[bucket_pointer[8][13]] = data[j];
			bucket_pointer[8][13] += 1;
		}
		else if(radix0==8 && radix1==14){
			bucket_8_14[bucket_pointer[8][14]] = data[j];
			bucket_pointer[8][14] += 1;
		}
		else if(radix0==8 && radix1==15){
			bucket_8_15[bucket_pointer[8][15]] = data[j];
			bucket_pointer[8][15] += 1;
		}
		else if(radix0==9 && radix1==0){
			bucket_9_0[bucket_pointer[9][0]] = data[j];
			bucket_pointer[9][0] += 1;
		}
		else if(radix0==9 && radix1==1){
			bucket_9_1[bucket_pointer[9][1]] = data[j];
			bucket_pointer[9][1] += 1;
		}
		else if(radix0==9 && radix1==2){
			bucket_9_2[bucket_pointer[9][2]] = data[j];
			bucket_pointer[9][2] += 1;
		}
		else if(radix0==9 && radix1==3){
			bucket_9_3[bucket_pointer[9][3]] = data[j];
			bucket_pointer[9][3] += 1;
		}
		else if(radix0==9 && radix1==4){
			bucket_9_4[bucket_pointer[9][4]] = data[j];
			bucket_pointer[9][4] += 1;
		}
		else if(radix0==9 && radix1==5){
			bucket_9_5[bucket_pointer[9][5]] = data[j];
			bucket_pointer[9][5] += 1;
		}
		else if(radix0==9 && radix1==6){
			bucket_9_6[bucket_pointer[9][6]] = data[j];
			bucket_pointer[9][6] += 1;
		}
		else if(radix0==9 && radix1==7){
			bucket_9_7[bucket_pointer[9][7]] = data[j];
			bucket_pointer[9][7] += 1;
		}
		else if(radix0==9 && radix1==8){
			bucket_9_8[bucket_pointer[9][8]] = data[j];
			bucket_pointer[9][8] += 1;
		}
		else if(radix0==9 && radix1==9){
			bucket_9_9[bucket_pointer[9][9]] = data[j];
			bucket_pointer[9][9] += 1;
		}
		else if(radix0==9 && radix1==10){
			bucket_9_10[bucket_pointer[9][10]] = data[j];
			bucket_pointer[9][10] += 1;
		}
		else if(radix0==9 && radix1==11){
			bucket_9_11[bucket_pointer[9][11]] = data[j];
			bucket_pointer[9][11] += 1;
		}
		else if(radix0==9 && radix1==12){
			bucket_9_12[bucket_pointer[9][12]] = data[j];
			bucket_pointer[9][12] += 1;
		}
		else if(radix0==9 && radix1==13){
			bucket_9_13[bucket_pointer[9][13]] = data[j];
			bucket_pointer[9][13] += 1;
		}
		else if(radix0==9 && radix1==14){
			bucket_9_14[bucket_pointer[9][14]] = data[j];
			bucket_pointer[9][14] += 1;
		}
		else if(radix0==9 && radix1==15){
			bucket_9_15[bucket_pointer[9][15]] = data[j];
			bucket_pointer[9][15] += 1;
		}
		else if(radix0==10 && radix1==0){
			bucket_10_0[bucket_pointer[10][0]] = data[j];
			bucket_pointer[10][0] += 1;
		}
		else if(radix0==10 && radix1==1){
			bucket_10_1[bucket_pointer[10][1]] = data[j];
			bucket_pointer[10][1] += 1;
		}
		else if(radix0==10 && radix1==2){
			bucket_10_2[bucket_pointer[10][2]] = data[j];
			bucket_pointer[10][2] += 1;
		}
		else if(radix0==10 && radix1==3){
			bucket_10_3[bucket_pointer[10][3]] = data[j];
			bucket_pointer[10][3] += 1;
		}
		else if(radix0==10 && radix1==4){
			bucket_10_4[bucket_pointer[10][4]] = data[j];
			bucket_pointer[10][4] += 1;
		}
		else if(radix0==10 && radix1==5){
			bucket_10_5[bucket_pointer[10][5]] = data[j];
			bucket_pointer[10][5] += 1;
		}
		else if(radix0==10 && radix1==6){
			bucket_10_6[bucket_pointer[10][6]] = data[j];
			bucket_pointer[10][6] += 1;
		}
		else if(radix0==10 && radix1==7){
			bucket_10_7[bucket_pointer[10][7]] = data[j];
			bucket_pointer[10][7] += 1;
		}
		else if(radix0==10 && radix1==8){
			bucket_10_8[bucket_pointer[10][8]] = data[j];
			bucket_pointer[10][8] += 1;
		}
		else if(radix0==10 && radix1==9){
			bucket_10_9[bucket_pointer[10][9]] = data[j];
			bucket_pointer[10][9] += 1;
		}
		else if(radix0==10 && radix1==10){
			bucket_10_10[bucket_pointer[10][10]] = data[j];
			bucket_pointer[10][10] += 1;
		}
		else if(radix0==10 && radix1==11){
			bucket_10_11[bucket_pointer[10][11]] = data[j];
			bucket_pointer[10][11] += 1;
		}
		else if(radix0==10 && radix1==12){
			bucket_10_12[bucket_pointer[10][12]] = data[j];
			bucket_pointer[10][12] += 1;
		}
		else if(radix0==10 && radix1==13){
			bucket_10_13[bucket_pointer[10][13]] = data[j];
			bucket_pointer[10][13] += 1;
		}
		else if(radix0==10 && radix1==14){
			bucket_10_14[bucket_pointer[10][14]] = data[j];
			bucket_pointer[10][14] += 1;
		}
		else if(radix0==10 && radix1==15){
			bucket_10_15[bucket_pointer[10][15]] = data[j];
			bucket_pointer[10][15] += 1;
		}
		else if(radix0==11 && radix1==0){
			bucket_11_0[bucket_pointer[11][0]] = data[j];
			bucket_pointer[11][0] += 1;
		}
		else if(radix0==11 && radix1==1){
			bucket_11_1[bucket_pointer[11][1]] = data[j];
			bucket_pointer[11][1] += 1;
		}
		else if(radix0==11 && radix1==2){
			bucket_11_2[bucket_pointer[11][2]] = data[j];
			bucket_pointer[11][2] += 1;
		}
		else if(radix0==11 && radix1==3){
			bucket_11_3[bucket_pointer[11][3]] = data[j];
			bucket_pointer[11][3] += 1;
		}
		else if(radix0==11 && radix1==4){
			bucket_11_4[bucket_pointer[11][4]] = data[j];
			bucket_pointer[11][4] += 1;
		}
		else if(radix0==11 && radix1==5){
			bucket_11_5[bucket_pointer[11][5]] = data[j];
			bucket_pointer[11][5] += 1;
		}
		else if(radix0==11 && radix1==6){
			bucket_11_6[bucket_pointer[11][6]] = data[j];
			bucket_pointer[11][6] += 1;
		}
		else if(radix0==11 && radix1==7){
			bucket_11_7[bucket_pointer[11][7]] = data[j];
			bucket_pointer[11][7] += 1;
		}
		else if(radix0==11 && radix1==8){
			bucket_11_8[bucket_pointer[11][8]] = data[j];
			bucket_pointer[11][8] += 1;
		}
		else if(radix0==11 && radix1==9){
			bucket_11_9[bucket_pointer[11][9]] = data[j];
			bucket_pointer[11][9] += 1;
		}
		else if(radix0==11 && radix1==10){
			bucket_11_10[bucket_pointer[11][10]] = data[j];
			bucket_pointer[11][10] += 1;
		}
		else if(radix0==11 && radix1==11){
			bucket_11_11[bucket_pointer[11][11]] = data[j];
			bucket_pointer[11][11] += 1;
		}
		else if(radix0==11 && radix1==12){
			bucket_11_12[bucket_pointer[11][12]] = data[j];
			bucket_pointer[11][12] += 1;
		}
		else if(radix0==11 && radix1==13){
			bucket_11_13[bucket_pointer[11][13]] = data[j];
			bucket_pointer[11][13] += 1;
		}
		else if(radix0==11 && radix1==14){
			bucket_11_14[bucket_pointer[11][14]] = data[j];
			bucket_pointer[11][14] += 1;
		}
		else if(radix0==11 && radix1==15){
			bucket_11_15[bucket_pointer[11][15]] = data[j];
			bucket_pointer[11][15] += 1;
		}
		else if(radix0==12 && radix1==0){
			bucket_12_0[bucket_pointer[12][0]] = data[j];
			bucket_pointer[12][0] += 1;
		}
		else if(radix0==12 && radix1==1){
			bucket_12_1[bucket_pointer[12][1]] = data[j];
			bucket_pointer[12][1] += 1;
		}
		else if(radix0==12 && radix1==2){
			bucket_12_2[bucket_pointer[12][2]] = data[j];
			bucket_pointer[12][2] += 1;
		}
		else if(radix0==12 && radix1==3){
			bucket_12_3[bucket_pointer[12][3]] = data[j];
			bucket_pointer[12][3] += 1;
		}
		else if(radix0==12 && radix1==4){
			bucket_12_4[bucket_pointer[12][4]] = data[j];
			bucket_pointer[12][4] += 1;
		}
		else if(radix0==12 && radix1==5){
			bucket_12_5[bucket_pointer[12][5]] = data[j];
			bucket_pointer[12][5] += 1;
		}
		else if(radix0==12 && radix1==6){
			bucket_12_6[bucket_pointer[12][6]] = data[j];
			bucket_pointer[12][6] += 1;
		}
		else if(radix0==12 && radix1==7){
			bucket_12_7[bucket_pointer[12][7]] = data[j];
			bucket_pointer[12][7] += 1;
		}
		else if(radix0==12 && radix1==8){
			bucket_12_8[bucket_pointer[12][8]] = data[j];
			bucket_pointer[12][8] += 1;
		}
		else if(radix0==12 && radix1==9){
			bucket_12_9[bucket_pointer[12][9]] = data[j];
			bucket_pointer[12][9] += 1;
		}
		else if(radix0==12 && radix1==10){
			bucket_12_10[bucket_pointer[12][10]] = data[j];
			bucket_pointer[12][10] += 1;
		}
		else if(radix0==12 && radix1==11){
			bucket_12_11[bucket_pointer[12][11]] = data[j];
			bucket_pointer[12][11] += 1;
		}
		else if(radix0==12 && radix1==12){
			bucket_12_12[bucket_pointer[12][12]] = data[j];
			bucket_pointer[12][12] += 1;
		}
		else if(radix0==12 && radix1==13){
			bucket_12_13[bucket_pointer[12][13]] = data[j];
			bucket_pointer[12][13] += 1;
		}
		else if(radix0==12 && radix1==14){
			bucket_12_14[bucket_pointer[12][14]] = data[j];
			bucket_pointer[12][14] += 1;
		}
		else if(radix0==12 && radix1==15){
			bucket_12_15[bucket_pointer[12][15]] = data[j];
			bucket_pointer[12][15] += 1;
		}
		else if(radix0==13 && radix1==0){
			bucket_13_0[bucket_pointer[13][0]] = data[j];
			bucket_pointer[13][0] += 1;
		}
		else if(radix0==13 && radix1==1){
			bucket_13_1[bucket_pointer[13][1]] = data[j];
			bucket_pointer[13][1] += 1;
		}
		else if(radix0==13 && radix1==2){
			bucket_13_2[bucket_pointer[13][2]] = data[j];
			bucket_pointer[13][2] += 1;
		}
		else if(radix0==13 && radix1==3){
			bucket_13_3[bucket_pointer[13][3]] = data[j];
			bucket_pointer[13][3] += 1;
		}
		else if(radix0==13 && radix1==4){
			bucket_13_4[bucket_pointer[13][4]] = data[j];
			bucket_pointer[13][4] += 1;
		}
		else if(radix0==13 && radix1==5){
			bucket_13_5[bucket_pointer[13][5]] = data[j];
			bucket_pointer[13][5] += 1;
		}
		else if(radix0==13 && radix1==6){
			bucket_13_6[bucket_pointer[13][6]] = data[j];
			bucket_pointer[13][6] += 1;
		}
		else if(radix0==13 && radix1==7){
			bucket_13_7[bucket_pointer[13][7]] = data[j];
			bucket_pointer[13][7] += 1;
		}
		else if(radix0==13 && radix1==8){
			bucket_13_8[bucket_pointer[13][8]] = data[j];
			bucket_pointer[13][8] += 1;
		}
		else if(radix0==13 && radix1==9){
			bucket_13_9[bucket_pointer[13][9]] = data[j];
			bucket_pointer[13][9] += 1;
		}
		else if(radix0==13 && radix1==10){
			bucket_13_10[bucket_pointer[13][10]] = data[j];
			bucket_pointer[13][10] += 1;
		}
		else if(radix0==13 && radix1==11){
			bucket_13_11[bucket_pointer[13][11]] = data[j];
			bucket_pointer[13][11] += 1;
		}
		else if(radix0==13 && radix1==12){
			bucket_13_12[bucket_pointer[13][12]] = data[j];
			bucket_pointer[13][12] += 1;
		}
		else if(radix0==13 && radix1==13){
			bucket_13_13[bucket_pointer[13][13]] = data[j];
			bucket_pointer[13][13] += 1;
		}
		else if(radix0==13 && radix1==14){
			bucket_13_14[bucket_pointer[13][14]] = data[j];
			bucket_pointer[13][14] += 1;
		}
		else if(radix0==13 && radix1==15){
			bucket_13_15[bucket_pointer[13][15]] = data[j];
			bucket_pointer[13][15] += 1;
		}
		else if(radix0==14 && radix1==0){
			bucket_14_0[bucket_pointer[14][0]] = data[j];
			bucket_pointer[14][0] += 1;
		}
		else if(radix0==14 && radix1==1){
			bucket_14_1[bucket_pointer[14][1]] = data[j];
			bucket_pointer[14][1] += 1;
		}
		else if(radix0==14 && radix1==2){
			bucket_14_2[bucket_pointer[14][2]] = data[j];
			bucket_pointer[14][2] += 1;
		}
		else if(radix0==14 && radix1==3){
			bucket_14_3[bucket_pointer[14][3]] = data[j];
			bucket_pointer[14][3] += 1;
		}
		else if(radix0==14 && radix1==4){
			bucket_14_4[bucket_pointer[14][4]] = data[j];
			bucket_pointer[14][4] += 1;
		}
		else if(radix0==14 && radix1==5){
			bucket_14_5[bucket_pointer[14][5]] = data[j];
			bucket_pointer[14][5] += 1;
		}
		else if(radix0==14 && radix1==6){
			bucket_14_6[bucket_pointer[14][6]] = data[j];
			bucket_pointer[14][6] += 1;
		}
		else if(radix0==14 && radix1==7){
			bucket_14_7[bucket_pointer[14][7]] = data[j];
			bucket_pointer[14][7] += 1;
		}
		else if(radix0==14 && radix1==8){
			bucket_14_8[bucket_pointer[14][8]] = data[j];
			bucket_pointer[14][8] += 1;
		}
		else if(radix0==14 && radix1==9){
			bucket_14_9[bucket_pointer[14][9]] = data[j];
			bucket_pointer[14][9] += 1;
		}
		else if(radix0==14 && radix1==10){
			bucket_14_10[bucket_pointer[14][10]] = data[j];
			bucket_pointer[14][10] += 1;
		}
		else if(radix0==14 && radix1==11){
			bucket_14_11[bucket_pointer[14][11]] = data[j];
			bucket_pointer[14][11] += 1;
		}
		else if(radix0==14 && radix1==12){
			bucket_14_12[bucket_pointer[14][12]] = data[j];
			bucket_pointer[14][12] += 1;
		}
		else if(radix0==14 && radix1==13){
			bucket_14_13[bucket_pointer[14][13]] = data[j];
			bucket_pointer[14][13] += 1;
		}
		else if(radix0==14 && radix1==14){
			bucket_14_14[bucket_pointer[14][14]] = data[j];
			bucket_pointer[14][14] += 1;
		}
		else if(radix0==14 && radix1==15){
			bucket_14_15[bucket_pointer[14][15]] = data[j];
			bucket_pointer[14][15] += 1;
		}
		else if(radix0==15 && radix1==0){
			bucket_15_0[bucket_pointer[15][0]] = data[j];
			bucket_pointer[15][0] += 1;
		}
		else if(radix0==15 && radix1==1){
			bucket_15_1[bucket_pointer[15][1]] = data[j];
			bucket_pointer[15][1] += 1;
		}
		else if(radix0==15 && radix1==2){
			bucket_15_2[bucket_pointer[15][2]] = data[j];
			bucket_pointer[15][2] += 1;
		}
		else if(radix0==15 && radix1==3){
			bucket_15_3[bucket_pointer[15][3]] = data[j];
			bucket_pointer[15][3] += 1;
		}
		else if(radix0==15 && radix1==4){
			bucket_15_4[bucket_pointer[15][4]] = data[j];
			bucket_pointer[15][4] += 1;
		}
		else if(radix0==15 && radix1==5){
			bucket_15_5[bucket_pointer[15][5]] = data[j];
			bucket_pointer[15][5] += 1;
		}
		else if(radix0==15 && radix1==6){
			bucket_15_6[bucket_pointer[15][6]] = data[j];
			bucket_pointer[15][6] += 1;
		}
		else if(radix0==15 && radix1==7){
			bucket_15_7[bucket_pointer[15][7]] = data[j];
			bucket_pointer[15][7] += 1;
		}
		else if(radix0==15 && radix1==8){
			bucket_15_8[bucket_pointer[15][8]] = data[j];
			bucket_pointer[15][8] += 1;
		}
		else if(radix0==15 && radix1==9){
			bucket_15_9[bucket_pointer[15][9]] = data[j];
			bucket_pointer[15][9] += 1;
		}
		else if(radix0==15 && radix1==10){
			bucket_15_10[bucket_pointer[15][10]] = data[j];
			bucket_pointer[15][10] += 1;
		}
		else if(radix0==15 && radix1==11){
			bucket_15_11[bucket_pointer[15][11]] = data[j];
			bucket_pointer[15][11] += 1;
		}
		else if(radix0==15 && radix1==12){
			bucket_15_12[bucket_pointer[15][12]] = data[j];
			bucket_pointer[15][12] += 1;
		}
		else if(radix0==15 && radix1==13){
			bucket_15_13[bucket_pointer[15][13]] = data[j];
			bucket_pointer[15][13] += 1;
		}
		else if(radix0==15 && radix1==14){
			bucket_15_14[bucket_pointer[15][14]] = data[j];
			bucket_pointer[15][14] += 1;
		}
		else if(radix0==15 && radix1==15){
			bucket_15_15[bucket_pointer[15][15]] = data[j];
			bucket_pointer[15][15] += 1;
		}

    }
}


void output_bucket_step_0(int i, int bucket_0[dataset_size/16], 
int bucket_1_0[dataset_size/16], int bucket_1_1[dataset_size/16], int bucket_1_2[dataset_size/16], int bucket_1_3[dataset_size/16], 
int bucket_1_4[dataset_size/16], int bucket_1_5[dataset_size/16], int bucket_1_6[dataset_size/16], int bucket_1_7[dataset_size/16], 
int bucket_1_8[dataset_size/16], int bucket_1_9[dataset_size/16], int bucket_1_10[dataset_size/16], int bucket_1_11[dataset_size/16], 
int bucket_1_12[dataset_size/16], int bucket_1_13[dataset_size/16], int bucket_1_14[dataset_size/16], int bucket_1_15[dataset_size/16],
int bucket_pointer_0, int bucket_pointer_1[16]){
	int m;
	int shifted;
	int ith_radix;
	for(m=0; m<bucket_pointer_0; m++){
#pragma HLS loop_tripcount min=dataset_size/256 max=dataset_size/256
		shifted = bucket_0[m] >> (i*4);
		ith_radix = shifted & 0xf;
		if(ith_radix==0){
			bucket_1_0[bucket_pointer_1[0]] = bucket_0[m];
			bucket_pointer_1[0] += 1;
		}
		else if(ith_radix==1){
			bucket_1_1[bucket_pointer_1[1]] = bucket_0[m];
			bucket_pointer_1[1] += 1;
		}
		else if(ith_radix==2){
			bucket_1_2[bucket_pointer_1[2]] = bucket_0[m];
			bucket_pointer_1[2] += 1;
		}
		else if(ith_radix==3){
			bucket_1_3[bucket_pointer_1[3]] = bucket_0[m];
			bucket_pointer_1[3] += 1;
		}
		else if(ith_radix==4){
			bucket_1_4[bucket_pointer_1[4]] = bucket_0[m];
			bucket_pointer_1[4] += 1;
		}
		else if(ith_radix==5){
			bucket_1_5[bucket_pointer_1[5]] = bucket_0[m];
			bucket_pointer_1[5] += 1;
		}
		else if(ith_radix==6){
			bucket_1_6[bucket_pointer_1[6]] = bucket_0[m];
			bucket_pointer_1[6] += 1;
		}
		else if(ith_radix==7){
			bucket_1_7[bucket_pointer_1[7]] = bucket_0[m];
			bucket_pointer_1[7] += 1;
		}
		else if(ith_radix==8){
			bucket_1_8[bucket_pointer_1[8]] = bucket_0[m];
			bucket_pointer_1[8] += 1;
		}
		else if(ith_radix==9){
			bucket_1_9[bucket_pointer_1[9]] = bucket_0[m];
			bucket_pointer_1[9] += 1;
		}
		else if(ith_radix==10){
			bucket_1_10[bucket_pointer_1[10]] = bucket_0[m];
			bucket_pointer_1[10] += 1;
		}
		else if(ith_radix==11){
			bucket_1_11[bucket_pointer_1[11]] = bucket_0[m];
			bucket_pointer_1[11] += 1;
		}
		else if(ith_radix==12){
			bucket_1_12[bucket_pointer_1[12]] = bucket_0[m];
			bucket_pointer_1[12] += 1;
		}
		else if(ith_radix==13){
			bucket_1_13[bucket_pointer_1[13]] = bucket_0[m];
			bucket_pointer_1[13] += 1;
		}
		else if(ith_radix==14){
			bucket_1_14[bucket_pointer_1[14]] = bucket_0[m];
			bucket_pointer_1[14] += 1;
		}
		else if(ith_radix==15){
			bucket_1_15[bucket_pointer_1[15]] = bucket_0[m];
			bucket_pointer_1[15] += 1;
		}

	}
}


void output_bucket_step_1(int i,
		int bucket_0_0[dataset_size/16], int bucket_0_1[dataset_size/16], int bucket_0_2[dataset_size/16], int bucket_0_3[dataset_size/16],
		int bucket_0_4[dataset_size/16], int bucket_0_5[dataset_size/16], int bucket_0_6[dataset_size/16], int bucket_0_7[dataset_size/16],
		int bucket_0_8[dataset_size/16], int bucket_0_9[dataset_size/16], int bucket_0_10[dataset_size/16], int bucket_0_11[dataset_size/16],
		int bucket_0_12[dataset_size/16], int bucket_0_13[dataset_size/16], int bucket_0_14[dataset_size/16], int bucket_0_15[dataset_size/16],
		int bucket_1_0[dataset_size/16], int bucket_1_1[dataset_size/16], int bucket_1_2[dataset_size/16], int bucket_1_3[dataset_size/16], 
		int bucket_1_4[dataset_size/16], int bucket_1_5[dataset_size/16], int bucket_1_6[dataset_size/16], int bucket_1_7[dataset_size/16], 
		int bucket_1_8[dataset_size/16], int bucket_1_9[dataset_size/16], int bucket_1_10[dataset_size/16], int bucket_1_11[dataset_size/16], 
		int bucket_1_12[dataset_size/16], int bucket_1_13[dataset_size/16], int bucket_1_14[dataset_size/16], int bucket_1_15[dataset_size/16],
		int bucket_pointer0_0, int bucket_pointer0_1, int bucket_pointer0_2, int bucket_pointer0_3,
		int bucket_pointer0_4, int bucket_pointer0_5, int bucket_pointer0_6, int bucket_pointer0_7,
		int bucket_pointer0_8, int bucket_pointer0_9, int bucket_pointer0_10, int bucket_pointer0_11,
		int bucket_pointer0_12, int bucket_pointer0_13, int bucket_pointer0_14, int bucket_pointer0_15,
		int bucket_pointer1[16]){

	output_bucket_step_0(i, bucket_0_0, bucket_1_0, bucket_1_1, bucket_1_2, bucket_1_3, bucket_1_4, bucket_1_5, bucket_1_6, bucket_1_7, bucket_1_8, bucket_1_9, bucket_1_10, bucket_1_11, bucket_1_12, bucket_1_13, bucket_1_14, bucket_1_15, bucket_pointer0_0, bucket_pointer1);
	output_bucket_step_0(i, bucket_0_1, bucket_1_0, bucket_1_1, bucket_1_2, bucket_1_3, bucket_1_4, bucket_1_5, bucket_1_6, bucket_1_7, bucket_1_8, bucket_1_9, bucket_1_10, bucket_1_11, bucket_1_12, bucket_1_13, bucket_1_14, bucket_1_15, bucket_pointer0_1, bucket_pointer1);
	output_bucket_step_0(i, bucket_0_2, bucket_1_0, bucket_1_1, bucket_1_2, bucket_1_3, bucket_1_4, bucket_1_5, bucket_1_6, bucket_1_7, bucket_1_8, bucket_1_9, bucket_1_10, bucket_1_11, bucket_1_12, bucket_1_13, bucket_1_14, bucket_1_15, bucket_pointer0_2, bucket_pointer1);
	output_bucket_step_0(i, bucket_0_3, bucket_1_0, bucket_1_1, bucket_1_2, bucket_1_3, bucket_1_4, bucket_1_5, bucket_1_6, bucket_1_7, bucket_1_8, bucket_1_9, bucket_1_10, bucket_1_11, bucket_1_12, bucket_1_13, bucket_1_14, bucket_1_15, bucket_pointer0_3, bucket_pointer1);
	output_bucket_step_0(i, bucket_0_4, bucket_1_0, bucket_1_1, bucket_1_2, bucket_1_3, bucket_1_4, bucket_1_5, bucket_1_6, bucket_1_7, bucket_1_8, bucket_1_9, bucket_1_10, bucket_1_11, bucket_1_12, bucket_1_13, bucket_1_14, bucket_1_15, bucket_pointer0_4, bucket_pointer1);
	output_bucket_step_0(i, bucket_0_5, bucket_1_0, bucket_1_1, bucket_1_2, bucket_1_3, bucket_1_4, bucket_1_5, bucket_1_6, bucket_1_7, bucket_1_8, bucket_1_9, bucket_1_10, bucket_1_11, bucket_1_12, bucket_1_13, bucket_1_14, bucket_1_15, bucket_pointer0_5, bucket_pointer1);
	output_bucket_step_0(i, bucket_0_6, bucket_1_0, bucket_1_1, bucket_1_2, bucket_1_3, bucket_1_4, bucket_1_5, bucket_1_6, bucket_1_7, bucket_1_8, bucket_1_9, bucket_1_10, bucket_1_11, bucket_1_12, bucket_1_13, bucket_1_14, bucket_1_15, bucket_pointer0_6, bucket_pointer1);
	output_bucket_step_0(i, bucket_0_7, bucket_1_0, bucket_1_1, bucket_1_2, bucket_1_3, bucket_1_4, bucket_1_5, bucket_1_6, bucket_1_7, bucket_1_8, bucket_1_9, bucket_1_10, bucket_1_11, bucket_1_12, bucket_1_13, bucket_1_14, bucket_1_15, bucket_pointer0_7, bucket_pointer1);
	output_bucket_step_0(i, bucket_0_8, bucket_1_0, bucket_1_1, bucket_1_2, bucket_1_3, bucket_1_4, bucket_1_5, bucket_1_6, bucket_1_7, bucket_1_8, bucket_1_9, bucket_1_10, bucket_1_11, bucket_1_12, bucket_1_13, bucket_1_14, bucket_1_15, bucket_pointer0_8, bucket_pointer1);
	output_bucket_step_0(i, bucket_0_9, bucket_1_0, bucket_1_1, bucket_1_2, bucket_1_3, bucket_1_4, bucket_1_5, bucket_1_6, bucket_1_7, bucket_1_8, bucket_1_9, bucket_1_10, bucket_1_11, bucket_1_12, bucket_1_13, bucket_1_14, bucket_1_15, bucket_pointer0_9, bucket_pointer1);
	output_bucket_step_0(i, bucket_0_10, bucket_1_0, bucket_1_1, bucket_1_2, bucket_1_3, bucket_1_4, bucket_1_5, bucket_1_6, bucket_1_7, bucket_1_8, bucket_1_9, bucket_1_10, bucket_1_11, bucket_1_12, bucket_1_13, bucket_1_14, bucket_1_15, bucket_pointer0_10, bucket_pointer1);
	output_bucket_step_0(i, bucket_0_11, bucket_1_0, bucket_1_1, bucket_1_2, bucket_1_3, bucket_1_4, bucket_1_5, bucket_1_6, bucket_1_7, bucket_1_8, bucket_1_9, bucket_1_10, bucket_1_11, bucket_1_12, bucket_1_13, bucket_1_14, bucket_1_15, bucket_pointer0_11, bucket_pointer1);
	output_bucket_step_0(i, bucket_0_12, bucket_1_0, bucket_1_1, bucket_1_2, bucket_1_3, bucket_1_4, bucket_1_5, bucket_1_6, bucket_1_7, bucket_1_8, bucket_1_9, bucket_1_10, bucket_1_11, bucket_1_12, bucket_1_13, bucket_1_14, bucket_1_15, bucket_pointer0_12, bucket_pointer1);
	output_bucket_step_0(i, bucket_0_13, bucket_1_0, bucket_1_1, bucket_1_2, bucket_1_3, bucket_1_4, bucket_1_5, bucket_1_6, bucket_1_7, bucket_1_8, bucket_1_9, bucket_1_10, bucket_1_11, bucket_1_12, bucket_1_13, bucket_1_14, bucket_1_15, bucket_pointer0_13, bucket_pointer1);
	output_bucket_step_0(i, bucket_0_14, bucket_1_0, bucket_1_1, bucket_1_2, bucket_1_3, bucket_1_4, bucket_1_5, bucket_1_6, bucket_1_7, bucket_1_8, bucket_1_9, bucket_1_10, bucket_1_11, bucket_1_12, bucket_1_13, bucket_1_14, bucket_1_15, bucket_pointer0_14, bucket_pointer1);
	output_bucket_step_0(i, bucket_0_15, bucket_1_0, bucket_1_1, bucket_1_2, bucket_1_3, bucket_1_4, bucket_1_5, bucket_1_6, bucket_1_7, bucket_1_8, bucket_1_9, bucket_1_10, bucket_1_11, bucket_1_12, bucket_1_13, bucket_1_14, bucket_1_15, bucket_pointer0_15, bucket_pointer1);

}


void output_bucket(int i, int bucket0[16][16][dataset_size/16], int bucket1[16][16][dataset_size/16], int bucket_pointer0[16][16], int bucket_pointer1[16][16]){
    /*
     * i: ith_radix
     * bucket0: output_bucket
     * bucket_pointer0: output_bucket's pointer
     * bucket1: input_bucket
     * bucket_pointer1: input_bucket's pointer
     */
    int l;
    int m1;
    int m2;
    int n;
    int shifted;
    int ith_radix;

    output_bucket_temp1:
	output_bucket_step_1(i,
				bucket0[0][0], bucket0[1][0], bucket0[2][0], bucket0[3][0],
				bucket0[4][0], bucket0[5][0], bucket0[6][0], bucket0[7][0],
				bucket0[8][0], bucket0[9][0], bucket0[10][0], bucket0[11][0],
				bucket0[12][0], bucket0[13][0], bucket0[14][0], bucket0[15][0],
				bucket1[0],
				bucket_pointer0[0][0], bucket_pointer0[1][0], bucket_pointer0[2][0], bucket_pointer0[3][0],
				bucket_pointer0[4][0], bucket_pointer0[5][0], bucket_pointer0[6][0], bucket_pointer0[7][0],
				bucket_pointer0[8][0], bucket_pointer0[9][0], bucket_pointer0[10][0], bucket_pointer0[11][0],
				bucket_pointer0[12][0], bucket_pointer0[13][0], bucket_pointer0[14][0], bucket_pointer0[15][0],
				bucket_pointer1[0]);
	output_bucket_step_1(i,
				bucket0[0][1], bucket0[1][1], bucket0[2][1], bucket0[3][1],
				bucket0[4][1], bucket0[5][1], bucket0[6][1], bucket0[7][1],
				bucket0[8][1], bucket0[9][1], bucket0[10][1], bucket0[11][1],
				bucket0[12][1], bucket0[13][1], bucket0[14][1], bucket0[15][1],
				bucket1[1],
				bucket_pointer0[0][1], bucket_pointer0[1][1], bucket_pointer0[2][1], bucket_pointer0[3][1],
				bucket_pointer0[4][1], bucket_pointer0[5][1], bucket_pointer0[6][1], bucket_pointer0[7][1],
				bucket_pointer0[8][1], bucket_pointer0[9][1], bucket_pointer0[10][1], bucket_pointer0[11][1],
				bucket_pointer0[12][1], bucket_pointer0[13][1], bucket_pointer0[14][1], bucket_pointer0[15][1],
				bucket_pointer1[1]);
    output_bucket_step_1(i,
				bucket0[0][2], bucket0[1][2], bucket0[2][2], bucket0[3][2],
				bucket0[4][2], bucket0[5][2], bucket0[6][2], bucket0[7][2],
				bucket0[8][2], bucket0[9][2], bucket0[10][2], bucket0[11][2],
				bucket0[12][2], bucket0[13][2], bucket0[14][2], bucket0[15][2],
				bucket1[2],
				bucket_pointer0[0][2], bucket_pointer0[1][2], bucket_pointer0[2][2], bucket_pointer0[3][2],
				bucket_pointer0[4][2], bucket_pointer0[5][2], bucket_pointer0[6][2], bucket_pointer0[7][2],
				bucket_pointer0[8][2], bucket_pointer0[9][2], bucket_pointer0[10][2], bucket_pointer0[11][2],
				bucket_pointer0[12][2], bucket_pointer0[13][2], bucket_pointer0[14][2], bucket_pointer0[15][2],
				bucket_pointer1[2]);
    output_bucket_step_1(i,
				bucket0[0][3], bucket0[1][3], bucket0[2][3], bucket0[3][3],
				bucket0[4][3], bucket0[5][3], bucket0[6][3], bucket0[7][3],
				bucket0[8][3], bucket0[9][3], bucket0[10][3], bucket0[11][3],
				bucket0[12][3], bucket0[13][3], bucket0[14][3], bucket0[15][3],
				bucket1[3],
				bucket_pointer0[0][3], bucket_pointer0[1][3], bucket_pointer0[2][3], bucket_pointer0[3][3],
				bucket_pointer0[4][3], bucket_pointer0[5][3], bucket_pointer0[6][3], bucket_pointer0[7][3],
				bucket_pointer0[8][3], bucket_pointer0[9][3], bucket_pointer0[10][3], bucket_pointer0[11][3],
				bucket_pointer0[12][3], bucket_pointer0[13][3], bucket_pointer0[14][3], bucket_pointer0[15][3],
				bucket_pointer1[3]);
    output_bucket_step_1(i,
				bucket0[0][4], bucket0[1][4], bucket0[2][4], bucket0[3][4],
				bucket0[4][4], bucket0[5][4], bucket0[6][4], bucket0[7][4],
				bucket0[8][4], bucket0[9][4], bucket0[10][4], bucket0[11][4],
				bucket0[12][4], bucket0[13][4], bucket0[14][4], bucket0[15][4],
				bucket1[4],
				bucket_pointer0[0][4], bucket_pointer0[1][4], bucket_pointer0[2][4], bucket_pointer0[3][4],
				bucket_pointer0[4][4], bucket_pointer0[5][4], bucket_pointer0[6][4], bucket_pointer0[7][4],
				bucket_pointer0[8][4], bucket_pointer0[9][4], bucket_pointer0[10][4], bucket_pointer0[11][4],
				bucket_pointer0[12][4], bucket_pointer0[13][4], bucket_pointer0[14][4], bucket_pointer0[15][4],
				bucket_pointer1[4]);
    output_bucket_step_1(i,
				bucket0[0][5], bucket0[1][5], bucket0[2][5], bucket0[3][5],
				bucket0[4][5], bucket0[5][5], bucket0[6][5], bucket0[7][5],
				bucket0[8][5], bucket0[9][5], bucket0[10][5], bucket0[11][5],
				bucket0[12][5], bucket0[13][5], bucket0[14][5], bucket0[15][5],
				bucket1[5],
				bucket_pointer0[0][5], bucket_pointer0[1][5], bucket_pointer0[2][5], bucket_pointer0[3][5],
				bucket_pointer0[4][5], bucket_pointer0[5][5], bucket_pointer0[6][5], bucket_pointer0[7][5],
				bucket_pointer0[8][5], bucket_pointer0[9][5], bucket_pointer0[10][5], bucket_pointer0[11][5],
				bucket_pointer0[12][5], bucket_pointer0[13][5], bucket_pointer0[14][5], bucket_pointer0[15][5],
				bucket_pointer1[5]);
    output_bucket_step_1(i,
				bucket0[0][6], bucket0[1][6], bucket0[2][6], bucket0[3][6],
				bucket0[4][6], bucket0[5][6], bucket0[6][6], bucket0[7][6],
				bucket0[8][6], bucket0[9][6], bucket0[10][6], bucket0[11][6],
				bucket0[12][6], bucket0[13][6], bucket0[14][6], bucket0[15][6],
				bucket1[6],
				bucket_pointer0[0][6], bucket_pointer0[1][6], bucket_pointer0[2][6], bucket_pointer0[3][6],
				bucket_pointer0[4][6], bucket_pointer0[5][6], bucket_pointer0[6][6], bucket_pointer0[7][6],
				bucket_pointer0[8][6], bucket_pointer0[9][6], bucket_pointer0[10][6], bucket_pointer0[11][6],
				bucket_pointer0[12][6], bucket_pointer0[13][6], bucket_pointer0[14][6], bucket_pointer0[15][6],
				bucket_pointer1[6]);
    output_bucket_step_1(i,
				bucket0[0][7], bucket0[1][7], bucket0[2][7], bucket0[3][7],
				bucket0[4][7], bucket0[5][7], bucket0[6][7], bucket0[7][7],
				bucket0[8][7], bucket0[9][7], bucket0[10][7], bucket0[11][7],
				bucket0[12][7], bucket0[13][7], bucket0[14][7], bucket0[15][7],
				bucket1[7],
				bucket_pointer0[0][7], bucket_pointer0[1][7], bucket_pointer0[2][7], bucket_pointer0[3][7],
				bucket_pointer0[4][7], bucket_pointer0[5][7], bucket_pointer0[6][7], bucket_pointer0[7][7],
				bucket_pointer0[8][7], bucket_pointer0[9][7], bucket_pointer0[10][7], bucket_pointer0[11][7],
				bucket_pointer0[12][7], bucket_pointer0[13][7], bucket_pointer0[14][7], bucket_pointer0[15][7],
				bucket_pointer1[7]);
	output_bucket_step_1(i,
				bucket0[0][8], bucket0[1][8], bucket0[2][8], bucket0[3][8],
				bucket0[4][8], bucket0[5][8], bucket0[6][8], bucket0[7][8],
				bucket0[8][8], bucket0[9][8], bucket0[10][8], bucket0[11][8],
				bucket0[12][8], bucket0[13][8], bucket0[14][8], bucket0[15][8],
				bucket1[8],
				bucket_pointer0[0][8], bucket_pointer0[1][8], bucket_pointer0[2][8], bucket_pointer0[3][8],
				bucket_pointer0[4][8], bucket_pointer0[5][8], bucket_pointer0[6][8], bucket_pointer0[7][8],
				bucket_pointer0[8][8], bucket_pointer0[9][8], bucket_pointer0[10][8], bucket_pointer0[11][8],
				bucket_pointer0[12][8], bucket_pointer0[13][8], bucket_pointer0[14][8], bucket_pointer0[15][8],
				bucket_pointer1[8]);
    output_bucket_step_1(i,
				bucket0[0][9], bucket0[1][9], bucket0[2][9], bucket0[3][9],
				bucket0[4][9], bucket0[5][9], bucket0[6][9], bucket0[7][9],
				bucket0[8][9], bucket0[9][9], bucket0[10][9], bucket0[11][9],
				bucket0[12][9], bucket0[13][9], bucket0[14][9], bucket0[15][9],
				bucket1[9],
				bucket_pointer0[0][9], bucket_pointer0[1][9], bucket_pointer0[2][9], bucket_pointer0[3][9],
				bucket_pointer0[4][9], bucket_pointer0[5][9], bucket_pointer0[6][9], bucket_pointer0[7][9],
				bucket_pointer0[8][9], bucket_pointer0[9][9], bucket_pointer0[10][9], bucket_pointer0[11][9],
				bucket_pointer0[12][9], bucket_pointer0[13][9], bucket_pointer0[14][9], bucket_pointer0[15][9],
				bucket_pointer1[9]);
    output_bucket_step_1(i,
				bucket0[0][10], bucket0[1][10], bucket0[2][10], bucket0[3][10],
				bucket0[4][10], bucket0[5][10], bucket0[6][10], bucket0[7][10],
				bucket0[8][10], bucket0[9][10], bucket0[10][10], bucket0[11][10],
				bucket0[12][10], bucket0[13][10], bucket0[14][10], bucket0[15][10],
				bucket1[10],
				bucket_pointer0[0][10], bucket_pointer0[1][10], bucket_pointer0[2][10], bucket_pointer0[3][10],
				bucket_pointer0[4][10], bucket_pointer0[5][10], bucket_pointer0[6][10], bucket_pointer0[7][10],
				bucket_pointer0[8][10], bucket_pointer0[9][10], bucket_pointer0[10][10], bucket_pointer0[11][10],
				bucket_pointer0[12][10], bucket_pointer0[13][10], bucket_pointer0[14][10], bucket_pointer0[15][10],
				bucket_pointer1[10]);
    output_bucket_step_1(i,
				bucket0[0][11], bucket0[1][11], bucket0[2][11], bucket0[3][11],
				bucket0[4][11], bucket0[5][11], bucket0[6][11], bucket0[7][11],
				bucket0[8][11], bucket0[9][11], bucket0[10][11], bucket0[11][11],
				bucket0[12][11], bucket0[13][11], bucket0[14][11], bucket0[15][11],
				bucket1[11],
				bucket_pointer0[0][11], bucket_pointer0[1][11], bucket_pointer0[2][11], bucket_pointer0[3][11],
				bucket_pointer0[4][11], bucket_pointer0[5][11], bucket_pointer0[6][11], bucket_pointer0[7][11],
				bucket_pointer0[8][11], bucket_pointer0[9][11], bucket_pointer0[10][11], bucket_pointer0[11][11],
				bucket_pointer0[12][11], bucket_pointer0[13][11], bucket_pointer0[14][11], bucket_pointer0[15][11],
				bucket_pointer1[11]);
    output_bucket_step_1(i,
				bucket0[0][12], bucket0[1][12], bucket0[2][12], bucket0[3][12],
				bucket0[4][12], bucket0[5][12], bucket0[6][12], bucket0[7][12],
				bucket0[8][12], bucket0[9][12], bucket0[10][12], bucket0[11][12],
				bucket0[12][12], bucket0[13][12], bucket0[14][12], bucket0[15][12],
				bucket1[12],
				bucket_pointer0[0][12], bucket_pointer0[1][12], bucket_pointer0[2][12], bucket_pointer0[3][12],
				bucket_pointer0[4][12], bucket_pointer0[5][12], bucket_pointer0[6][12], bucket_pointer0[7][12],
				bucket_pointer0[8][12], bucket_pointer0[9][12], bucket_pointer0[10][12], bucket_pointer0[11][12],
				bucket_pointer0[12][12], bucket_pointer0[13][12], bucket_pointer0[14][12], bucket_pointer0[15][12],
				bucket_pointer1[12]);
    output_bucket_step_1(i,
				bucket0[0][13], bucket0[1][13], bucket0[2][13], bucket0[3][13],
				bucket0[4][13], bucket0[5][13], bucket0[6][13], bucket0[7][13],
				bucket0[8][13], bucket0[9][13], bucket0[10][13], bucket0[11][13],
				bucket0[12][13], bucket0[13][13], bucket0[14][13], bucket0[15][13],
				bucket1[13],
				bucket_pointer0[0][13], bucket_pointer0[1][13], bucket_pointer0[2][13], bucket_pointer0[3][13],
				bucket_pointer0[4][13], bucket_pointer0[5][13], bucket_pointer0[6][13], bucket_pointer0[7][13],
				bucket_pointer0[8][13], bucket_pointer0[9][13], bucket_pointer0[10][13], bucket_pointer0[11][13],
				bucket_pointer0[12][13], bucket_pointer0[13][13], bucket_pointer0[14][13], bucket_pointer0[15][13],
				bucket_pointer1[13]);
    output_bucket_step_1(i,
				bucket0[0][14], bucket0[1][14], bucket0[2][14], bucket0[3][14],
				bucket0[4][14], bucket0[5][14], bucket0[6][14], bucket0[7][14],
				bucket0[8][14], bucket0[9][14], bucket0[10][14], bucket0[11][14],
				bucket0[12][14], bucket0[13][14], bucket0[14][14], bucket0[15][14],
				bucket1[14],
				bucket_pointer0[0][14], bucket_pointer0[1][14], bucket_pointer0[2][14], bucket_pointer0[3][14],
				bucket_pointer0[4][14], bucket_pointer0[5][14], bucket_pointer0[6][14], bucket_pointer0[7][14],
				bucket_pointer0[8][14], bucket_pointer0[9][14], bucket_pointer0[10][14], bucket_pointer0[11][14],
				bucket_pointer0[12][14], bucket_pointer0[13][14], bucket_pointer0[14][14], bucket_pointer0[15][14],
				bucket_pointer1[14]);
	output_bucket_step_1(i,
				bucket0[0][15], bucket0[1][15], bucket0[2][15], bucket0[3][15],
				bucket0[4][15], bucket0[5][15], bucket0[6][15], bucket0[7][15],
				bucket0[8][15], bucket0[9][15], bucket0[10][15], bucket0[11][15],
				bucket0[12][15], bucket0[13][15], bucket0[14][15], bucket0[15][15],
				bucket1[15],
				bucket_pointer0[0][15], bucket_pointer0[1][15], bucket_pointer0[2][15], bucket_pointer0[3][15],
				bucket_pointer0[4][15], bucket_pointer0[5][15], bucket_pointer0[6][15], bucket_pointer0[7][15],
				bucket_pointer0[8][15], bucket_pointer0[9][15], bucket_pointer0[10][15], bucket_pointer0[11][15],
				bucket_pointer0[12][15], bucket_pointer0[13][15], bucket_pointer0[14][15], bucket_pointer0[15][15],
				bucket_pointer1[15]);

    clear_original_bucket_pointer:
    for(n=0; n<16; n++){
#pragma HLS PIPELINE
        bucket_pointer0[0][n] = 0;
        bucket_pointer0[1][n] = 0;
        bucket_pointer0[2][n] = 0;
        bucket_pointer0[3][n] = 0;
        bucket_pointer0[4][n] = 0;
        bucket_pointer0[5][n] = 0;
        bucket_pointer0[6][n] = 0;
        bucket_pointer0[7][n] = 0;
        bucket_pointer0[8][n] = 0;
        bucket_pointer0[9][n] = 0;
        bucket_pointer0[10][n] = 0;
        bucket_pointer0[11][n] = 0;
        bucket_pointer0[12][n] = 0;
        bucket_pointer0[13][n] = 0;
        bucket_pointer0[14][n] = 0;
        bucket_pointer0[15][n] = 0;
    }
}


void radix_sort(int data[dataset_size], int sorted_data[dataset_size]){
    static int bucket_0_0_0[dataset_size/16]; 
	static int bucket_0_0_1[dataset_size/16];
    static int bucket_0_0_2[dataset_size/16]; 
	static int bucket_0_0_3[dataset_size/16];
	static int bucket_0_0_4[dataset_size/16]; 
	static int bucket_0_0_5[dataset_size/16];
    static int bucket_0_0_6[dataset_size/16]; 
	static int bucket_0_0_7[dataset_size/16];
	static int bucket_0_0_8[dataset_size/16]; 
	static int bucket_0_0_9[dataset_size/16];
    static int bucket_0_0_10[dataset_size/16]; 
	static int bucket_0_0_11[dataset_size/16];
	static int bucket_0_0_12[dataset_size/16]; 
	static int bucket_0_0_13[dataset_size/16];
    static int bucket_0_0_14[dataset_size/16]; 
	static int bucket_0_0_15[dataset_size/16];
	static int bucket_0_1_0[dataset_size/16]; 
	static int bucket_0_1_1[dataset_size/16];
    static int bucket_0_1_2[dataset_size/16]; 
	static int bucket_0_1_3[dataset_size/16];
	static int bucket_0_1_4[dataset_size/16]; 
	static int bucket_0_1_5[dataset_size/16];
    static int bucket_0_1_6[dataset_size/16]; 
	static int bucket_0_1_7[dataset_size/16];
	static int bucket_0_1_8[dataset_size/16]; 
	static int bucket_0_1_9[dataset_size/16];
    static int bucket_0_1_10[dataset_size/16]; 
	static int bucket_0_1_11[dataset_size/16];
	static int bucket_0_1_12[dataset_size/16]; 
	static int bucket_0_1_13[dataset_size/16];
    static int bucket_0_1_14[dataset_size/16]; 
	static int bucket_0_1_15[dataset_size/16];
	static int bucket_0_2_0[dataset_size/16]; 
	static int bucket_0_2_1[dataset_size/16];
    static int bucket_0_2_2[dataset_size/16]; 
	static int bucket_0_2_3[dataset_size/16];
	static int bucket_0_2_4[dataset_size/16]; 
	static int bucket_0_2_5[dataset_size/16];
    static int bucket_0_2_6[dataset_size/16]; 
	static int bucket_0_2_7[dataset_size/16];
	static int bucket_0_2_8[dataset_size/16]; 
	static int bucket_0_2_9[dataset_size/16];
    static int bucket_0_2_10[dataset_size/16]; 
	static int bucket_0_2_11[dataset_size/16];
	static int bucket_0_2_12[dataset_size/16]; 
	static int bucket_0_2_13[dataset_size/16];
    static int bucket_0_2_14[dataset_size/16]; 
	static int bucket_0_2_15[dataset_size/16];
	static int bucket_0_3_0[dataset_size/16]; 
	static int bucket_0_3_1[dataset_size/16];
    static int bucket_0_3_2[dataset_size/16]; 
	static int bucket_0_3_3[dataset_size/16];
	static int bucket_0_3_4[dataset_size/16]; 
	static int bucket_0_3_5[dataset_size/16];
    static int bucket_0_3_6[dataset_size/16]; 
	static int bucket_0_3_7[dataset_size/16];
	static int bucket_0_3_8[dataset_size/16]; 
	static int bucket_0_3_9[dataset_size/16];
    static int bucket_0_3_10[dataset_size/16]; 
	static int bucket_0_3_11[dataset_size/16];
	static int bucket_0_3_12[dataset_size/16]; 
	static int bucket_0_3_13[dataset_size/16];
    static int bucket_0_3_14[dataset_size/16]; 
	static int bucket_0_3_15[dataset_size/16];
	static int bucket_0_4_0[dataset_size/16]; 
	static int bucket_0_4_1[dataset_size/16];
    static int bucket_0_4_2[dataset_size/16]; 
	static int bucket_0_4_3[dataset_size/16];
	static int bucket_0_4_4[dataset_size/16]; 
	static int bucket_0_4_5[dataset_size/16];
    static int bucket_0_4_6[dataset_size/16]; 
	static int bucket_0_4_7[dataset_size/16];
	static int bucket_0_4_8[dataset_size/16]; 
	static int bucket_0_4_9[dataset_size/16];
    static int bucket_0_4_10[dataset_size/16]; 
	static int bucket_0_4_11[dataset_size/16];
	static int bucket_0_4_12[dataset_size/16]; 
	static int bucket_0_4_13[dataset_size/16];
    static int bucket_0_4_14[dataset_size/16]; 
	static int bucket_0_4_15[dataset_size/16];
	static int bucket_0_5_0[dataset_size/16]; 
	static int bucket_0_5_1[dataset_size/16];
    static int bucket_0_5_2[dataset_size/16]; 
	static int bucket_0_5_3[dataset_size/16];
	static int bucket_0_5_4[dataset_size/16]; 
	static int bucket_0_5_5[dataset_size/16];
    static int bucket_0_5_6[dataset_size/16]; 
	static int bucket_0_5_7[dataset_size/16];
	static int bucket_0_5_8[dataset_size/16]; 
	static int bucket_0_5_9[dataset_size/16];
    static int bucket_0_5_10[dataset_size/16]; 
	static int bucket_0_5_11[dataset_size/16];
	static int bucket_0_5_12[dataset_size/16]; 
	static int bucket_0_5_13[dataset_size/16];
    static int bucket_0_5_14[dataset_size/16]; 
	static int bucket_0_5_15[dataset_size/16];
	static int bucket_0_6_0[dataset_size/16]; 
	static int bucket_0_6_1[dataset_size/16];
    static int bucket_0_6_2[dataset_size/16]; 
	static int bucket_0_6_3[dataset_size/16];
	static int bucket_0_6_4[dataset_size/16]; 
	static int bucket_0_6_5[dataset_size/16];
    static int bucket_0_6_6[dataset_size/16]; 
	static int bucket_0_6_7[dataset_size/16];
	static int bucket_0_6_8[dataset_size/16]; 
	static int bucket_0_6_9[dataset_size/16];
    static int bucket_0_6_10[dataset_size/16]; 
	static int bucket_0_6_11[dataset_size/16];
	static int bucket_0_6_12[dataset_size/16]; 
	static int bucket_0_6_13[dataset_size/16];
    static int bucket_0_6_14[dataset_size/16]; 
	static int bucket_0_6_15[dataset_size/16];
	static int bucket_0_7_0[dataset_size/16]; 
	static int bucket_0_7_1[dataset_size/16];
    static int bucket_0_7_2[dataset_size/16]; 
	static int bucket_0_7_3[dataset_size/16];
	static int bucket_0_7_4[dataset_size/16]; 
	static int bucket_0_7_5[dataset_size/16];
    static int bucket_0_7_6[dataset_size/16]; 
	static int bucket_0_7_7[dataset_size/16];
	static int bucket_0_7_8[dataset_size/16]; 
	static int bucket_0_7_9[dataset_size/16];
    static int bucket_0_7_10[dataset_size/16]; 
	static int bucket_0_7_11[dataset_size/16];
	static int bucket_0_7_12[dataset_size/16]; 
	static int bucket_0_7_13[dataset_size/16];
    static int bucket_0_7_14[dataset_size/16]; 
	static int bucket_0_7_15[dataset_size/16];
	static int bucket_0_8_0[dataset_size/16]; 
	static int bucket_0_8_1[dataset_size/16];
    static int bucket_0_8_2[dataset_size/16]; 
	static int bucket_0_8_3[dataset_size/16];
	static int bucket_0_8_4[dataset_size/16]; 
	static int bucket_0_8_5[dataset_size/16];
    static int bucket_0_8_6[dataset_size/16]; 
	static int bucket_0_8_7[dataset_size/16];
	static int bucket_0_8_8[dataset_size/16]; 
	static int bucket_0_8_9[dataset_size/16];
    static int bucket_0_8_10[dataset_size/16]; 
	static int bucket_0_8_11[dataset_size/16];
	static int bucket_0_8_12[dataset_size/16]; 
	static int bucket_0_8_13[dataset_size/16];
    static int bucket_0_8_14[dataset_size/16]; 
	static int bucket_0_8_15[dataset_size/16];
	static int bucket_0_9_0[dataset_size/16]; 
	static int bucket_0_9_1[dataset_size/16];
    static int bucket_0_9_2[dataset_size/16]; 
	static int bucket_0_9_3[dataset_size/16];
	static int bucket_0_9_4[dataset_size/16]; 
	static int bucket_0_9_5[dataset_size/16];
    static int bucket_0_9_6[dataset_size/16]; 
	static int bucket_0_9_7[dataset_size/16];
	static int bucket_0_9_8[dataset_size/16]; 
	static int bucket_0_9_9[dataset_size/16];
    static int bucket_0_9_10[dataset_size/16]; 
	static int bucket_0_9_11[dataset_size/16];
	static int bucket_0_9_12[dataset_size/16]; 
	static int bucket_0_9_13[dataset_size/16];
    static int bucket_0_9_14[dataset_size/16]; 
	static int bucket_0_9_15[dataset_size/16];
	static int bucket_0_10_0[dataset_size/16]; 
	static int bucket_0_10_1[dataset_size/16];
    static int bucket_0_10_2[dataset_size/16]; 
	static int bucket_0_10_3[dataset_size/16];
	static int bucket_0_10_4[dataset_size/16]; 
	static int bucket_0_10_5[dataset_size/16];
    static int bucket_0_10_6[dataset_size/16]; 
	static int bucket_0_10_7[dataset_size/16];
	static int bucket_0_10_8[dataset_size/16]; 
	static int bucket_0_10_9[dataset_size/16];
    static int bucket_0_10_10[dataset_size/16]; 
	static int bucket_0_10_11[dataset_size/16];
	static int bucket_0_10_12[dataset_size/16]; 
	static int bucket_0_10_13[dataset_size/16];
    static int bucket_0_10_14[dataset_size/16]; 
	static int bucket_0_10_15[dataset_size/16];
	static int bucket_0_11_0[dataset_size/16]; 
	static int bucket_0_11_1[dataset_size/16];
    static int bucket_0_11_2[dataset_size/16]; 
	static int bucket_0_11_3[dataset_size/16];
	static int bucket_0_11_4[dataset_size/16]; 
	static int bucket_0_11_5[dataset_size/16];
    static int bucket_0_11_6[dataset_size/16]; 
	static int bucket_0_11_7[dataset_size/16];
	static int bucket_0_11_8[dataset_size/16]; 
	static int bucket_0_11_9[dataset_size/16];
    static int bucket_0_11_10[dataset_size/16]; 
	static int bucket_0_11_11[dataset_size/16];
	static int bucket_0_11_12[dataset_size/16]; 
	static int bucket_0_11_13[dataset_size/16];
    static int bucket_0_11_14[dataset_size/16]; 
	static int bucket_0_11_15[dataset_size/16];
	static int bucket_0_12_0[dataset_size/16]; 
	static int bucket_0_12_1[dataset_size/16];
    static int bucket_0_12_2[dataset_size/16]; 
	static int bucket_0_12_3[dataset_size/16];
	static int bucket_0_12_4[dataset_size/16]; 
	static int bucket_0_12_5[dataset_size/16];
    static int bucket_0_12_6[dataset_size/16]; 
	static int bucket_0_12_7[dataset_size/16];
	static int bucket_0_12_8[dataset_size/16]; 
	static int bucket_0_12_9[dataset_size/16];
    static int bucket_0_12_10[dataset_size/16]; 
	static int bucket_0_12_11[dataset_size/16];
	static int bucket_0_12_12[dataset_size/16]; 
	static int bucket_0_12_13[dataset_size/16];
    static int bucket_0_12_14[dataset_size/16]; 
	static int bucket_0_12_15[dataset_size/16];
	static int bucket_0_13_0[dataset_size/16]; 
	static int bucket_0_13_1[dataset_size/16];
    static int bucket_0_13_2[dataset_size/16]; 
	static int bucket_0_13_3[dataset_size/16];
	static int bucket_0_13_4[dataset_size/16]; 
	static int bucket_0_13_5[dataset_size/16];
    static int bucket_0_13_6[dataset_size/16]; 
	static int bucket_0_13_7[dataset_size/16];
	static int bucket_0_13_8[dataset_size/16]; 
	static int bucket_0_13_9[dataset_size/16];
    static int bucket_0_13_10[dataset_size/16]; 
	static int bucket_0_13_11[dataset_size/16];
	static int bucket_0_13_12[dataset_size/16]; 
	static int bucket_0_13_13[dataset_size/16];
    static int bucket_0_13_14[dataset_size/16]; 
	static int bucket_0_13_15[dataset_size/16];
	static int bucket_0_14_0[dataset_size/16]; 
	static int bucket_0_14_1[dataset_size/16];
    static int bucket_0_14_2[dataset_size/16]; 
	static int bucket_0_14_3[dataset_size/16];
	static int bucket_0_14_4[dataset_size/16]; 
	static int bucket_0_14_5[dataset_size/16];
    static int bucket_0_14_6[dataset_size/16]; 
	static int bucket_0_14_7[dataset_size/16];
	static int bucket_0_14_8[dataset_size/16]; 
	static int bucket_0_14_9[dataset_size/16];
    static int bucket_0_14_10[dataset_size/16]; 
	static int bucket_0_14_11[dataset_size/16];
	static int bucket_0_14_12[dataset_size/16]; 
	static int bucket_0_14_13[dataset_size/16];
    static int bucket_0_14_14[dataset_size/16]; 
	static int bucket_0_14_15[dataset_size/16];
	static int bucket_0_15_0[dataset_size/16]; 
	static int bucket_0_15_1[dataset_size/16];
    static int bucket_0_15_2[dataset_size/16]; 
	static int bucket_0_15_3[dataset_size/16];
	static int bucket_0_15_4[dataset_size/16]; 
	static int bucket_0_15_5[dataset_size/16];
    static int bucket_0_15_6[dataset_size/16]; 
	static int bucket_0_15_7[dataset_size/16];
	static int bucket_0_15_8[dataset_size/16]; 
	static int bucket_0_15_9[dataset_size/16];
    static int bucket_0_15_10[dataset_size/16]; 
	static int bucket_0_15_11[dataset_size/16];
	static int bucket_0_15_12[dataset_size/16]; 
	static int bucket_0_15_13[dataset_size/16];
    static int bucket_0_15_14[dataset_size/16]; 
	static int bucket_0_15_15[dataset_size/16];		
	static int bucket_1_0_0[dataset_size/16]; 
	static int bucket_1_0_1[dataset_size/16];
    static int bucket_1_0_2[dataset_size/16]; 
	static int bucket_1_0_3[dataset_size/16];
	static int bucket_1_0_4[dataset_size/16]; 
	static int bucket_1_0_5[dataset_size/16];
    static int bucket_1_0_6[dataset_size/16]; 
	static int bucket_1_0_7[dataset_size/16];
	static int bucket_1_0_8[dataset_size/16]; 
	static int bucket_1_0_9[dataset_size/16];
    static int bucket_1_0_10[dataset_size/16]; 
	static int bucket_1_0_11[dataset_size/16];
	static int bucket_1_0_12[dataset_size/16]; 
	static int bucket_1_0_13[dataset_size/16];
    static int bucket_1_0_14[dataset_size/16]; 
	static int bucket_1_0_15[dataset_size/16];
	static int bucket_1_1_0[dataset_size/16]; 
	static int bucket_1_1_1[dataset_size/16];
    static int bucket_1_1_2[dataset_size/16]; 
	static int bucket_1_1_3[dataset_size/16];
	static int bucket_1_1_4[dataset_size/16]; 
	static int bucket_1_1_5[dataset_size/16];
    static int bucket_1_1_6[dataset_size/16]; 
	static int bucket_1_1_7[dataset_size/16];
	static int bucket_1_1_8[dataset_size/16]; 
	static int bucket_1_1_9[dataset_size/16];
    static int bucket_1_1_10[dataset_size/16]; 
	static int bucket_1_1_11[dataset_size/16];
	static int bucket_1_1_12[dataset_size/16]; 
	static int bucket_1_1_13[dataset_size/16];
    static int bucket_1_1_14[dataset_size/16]; 
	static int bucket_1_1_15[dataset_size/16];
	static int bucket_1_2_0[dataset_size/16]; 
	static int bucket_1_2_1[dataset_size/16];
    static int bucket_1_2_2[dataset_size/16]; 
	static int bucket_1_2_3[dataset_size/16];
	static int bucket_1_2_4[dataset_size/16]; 
	static int bucket_1_2_5[dataset_size/16];
    static int bucket_1_2_6[dataset_size/16]; 
	static int bucket_1_2_7[dataset_size/16];
	static int bucket_1_2_8[dataset_size/16]; 
	static int bucket_1_2_9[dataset_size/16];
    static int bucket_1_2_10[dataset_size/16]; 
	static int bucket_1_2_11[dataset_size/16];
	static int bucket_1_2_12[dataset_size/16]; 
	static int bucket_1_2_13[dataset_size/16];
    static int bucket_1_2_14[dataset_size/16]; 
	static int bucket_1_2_15[dataset_size/16];
	static int bucket_1_3_0[dataset_size/16]; 
	static int bucket_1_3_1[dataset_size/16];
    static int bucket_1_3_2[dataset_size/16]; 
	static int bucket_1_3_3[dataset_size/16];
	static int bucket_1_3_4[dataset_size/16]; 
	static int bucket_1_3_5[dataset_size/16];
    static int bucket_1_3_6[dataset_size/16]; 
	static int bucket_1_3_7[dataset_size/16];
	static int bucket_1_3_8[dataset_size/16]; 
	static int bucket_1_3_9[dataset_size/16];
    static int bucket_1_3_10[dataset_size/16]; 
	static int bucket_1_3_11[dataset_size/16];
	static int bucket_1_3_12[dataset_size/16]; 
	static int bucket_1_3_13[dataset_size/16];
    static int bucket_1_3_14[dataset_size/16]; 
	static int bucket_1_3_15[dataset_size/16];
	static int bucket_1_4_0[dataset_size/16]; 
	static int bucket_1_4_1[dataset_size/16];
    static int bucket_1_4_2[dataset_size/16]; 
	static int bucket_1_4_3[dataset_size/16];
	static int bucket_1_4_4[dataset_size/16]; 
	static int bucket_1_4_5[dataset_size/16];
    static int bucket_1_4_6[dataset_size/16]; 
	static int bucket_1_4_7[dataset_size/16];
	static int bucket_1_4_8[dataset_size/16]; 
	static int bucket_1_4_9[dataset_size/16];
    static int bucket_1_4_10[dataset_size/16]; 
	static int bucket_1_4_11[dataset_size/16];
	static int bucket_1_4_12[dataset_size/16]; 
	static int bucket_1_4_13[dataset_size/16];
    static int bucket_1_4_14[dataset_size/16]; 
	static int bucket_1_4_15[dataset_size/16];
	static int bucket_1_5_0[dataset_size/16]; 
	static int bucket_1_5_1[dataset_size/16];
    static int bucket_1_5_2[dataset_size/16]; 
	static int bucket_1_5_3[dataset_size/16];
	static int bucket_1_5_4[dataset_size/16]; 
	static int bucket_1_5_5[dataset_size/16];
    static int bucket_1_5_6[dataset_size/16]; 
	static int bucket_1_5_7[dataset_size/16];
	static int bucket_1_5_8[dataset_size/16]; 
	static int bucket_1_5_9[dataset_size/16];
    static int bucket_1_5_10[dataset_size/16]; 
	static int bucket_1_5_11[dataset_size/16];
	static int bucket_1_5_12[dataset_size/16]; 
	static int bucket_1_5_13[dataset_size/16];
    static int bucket_1_5_14[dataset_size/16]; 
	static int bucket_1_5_15[dataset_size/16];
	static int bucket_1_6_0[dataset_size/16]; 
	static int bucket_1_6_1[dataset_size/16];
    static int bucket_1_6_2[dataset_size/16]; 
	static int bucket_1_6_3[dataset_size/16];
	static int bucket_1_6_4[dataset_size/16]; 
	static int bucket_1_6_5[dataset_size/16];
    static int bucket_1_6_6[dataset_size/16]; 
	static int bucket_1_6_7[dataset_size/16];
	static int bucket_1_6_8[dataset_size/16]; 
	static int bucket_1_6_9[dataset_size/16];
    static int bucket_1_6_10[dataset_size/16]; 
	static int bucket_1_6_11[dataset_size/16];
	static int bucket_1_6_12[dataset_size/16]; 
	static int bucket_1_6_13[dataset_size/16];
    static int bucket_1_6_14[dataset_size/16]; 
	static int bucket_1_6_15[dataset_size/16];
	static int bucket_1_7_0[dataset_size/16]; 
	static int bucket_1_7_1[dataset_size/16];
    static int bucket_1_7_2[dataset_size/16]; 
	static int bucket_1_7_3[dataset_size/16];
	static int bucket_1_7_4[dataset_size/16]; 
	static int bucket_1_7_5[dataset_size/16];
    static int bucket_1_7_6[dataset_size/16]; 
	static int bucket_1_7_7[dataset_size/16];
	static int bucket_1_7_8[dataset_size/16]; 
	static int bucket_1_7_9[dataset_size/16];
    static int bucket_1_7_10[dataset_size/16]; 
	static int bucket_1_7_11[dataset_size/16];
	static int bucket_1_7_12[dataset_size/16]; 
	static int bucket_1_7_13[dataset_size/16];
    static int bucket_1_7_14[dataset_size/16]; 
	static int bucket_1_7_15[dataset_size/16];
	static int bucket_1_8_0[dataset_size/16]; 
	static int bucket_1_8_1[dataset_size/16];
    static int bucket_1_8_2[dataset_size/16]; 
	static int bucket_1_8_3[dataset_size/16];
	static int bucket_1_8_4[dataset_size/16]; 
	static int bucket_1_8_5[dataset_size/16];
    static int bucket_1_8_6[dataset_size/16]; 
	static int bucket_1_8_7[dataset_size/16];
	static int bucket_1_8_8[dataset_size/16]; 
	static int bucket_1_8_9[dataset_size/16];
    static int bucket_1_8_10[dataset_size/16]; 
	static int bucket_1_8_11[dataset_size/16];
	static int bucket_1_8_12[dataset_size/16]; 
	static int bucket_1_8_13[dataset_size/16];
    static int bucket_1_8_14[dataset_size/16]; 
	static int bucket_1_8_15[dataset_size/16];
	static int bucket_1_9_0[dataset_size/16]; 
	static int bucket_1_9_1[dataset_size/16];
    static int bucket_1_9_2[dataset_size/16]; 
	static int bucket_1_9_3[dataset_size/16];
	static int bucket_1_9_4[dataset_size/16]; 
	static int bucket_1_9_5[dataset_size/16];
    static int bucket_1_9_6[dataset_size/16]; 
	static int bucket_1_9_7[dataset_size/16];
	static int bucket_1_9_8[dataset_size/16]; 
	static int bucket_1_9_9[dataset_size/16];
    static int bucket_1_9_10[dataset_size/16]; 
	static int bucket_1_9_11[dataset_size/16];
	static int bucket_1_9_12[dataset_size/16]; 
	static int bucket_1_9_13[dataset_size/16];
    static int bucket_1_9_14[dataset_size/16]; 
	static int bucket_1_9_15[dataset_size/16];
	static int bucket_1_10_0[dataset_size/16]; 
	static int bucket_1_10_1[dataset_size/16];
    static int bucket_1_10_2[dataset_size/16]; 
	static int bucket_1_10_3[dataset_size/16];
	static int bucket_1_10_4[dataset_size/16]; 
	static int bucket_1_10_5[dataset_size/16];
    static int bucket_1_10_6[dataset_size/16]; 
	static int bucket_1_10_7[dataset_size/16];
	static int bucket_1_10_8[dataset_size/16]; 
	static int bucket_1_10_9[dataset_size/16];
    static int bucket_1_10_10[dataset_size/16]; 
	static int bucket_1_10_11[dataset_size/16];
	static int bucket_1_10_12[dataset_size/16]; 
	static int bucket_1_10_13[dataset_size/16];
    static int bucket_1_10_14[dataset_size/16]; 
	static int bucket_1_10_15[dataset_size/16];
	static int bucket_1_11_0[dataset_size/16]; 
	static int bucket_1_11_1[dataset_size/16];
    static int bucket_1_11_2[dataset_size/16]; 
	static int bucket_1_11_3[dataset_size/16];
	static int bucket_1_11_4[dataset_size/16]; 
	static int bucket_1_11_5[dataset_size/16];
    static int bucket_1_11_6[dataset_size/16]; 
	static int bucket_1_11_7[dataset_size/16];
	static int bucket_1_11_8[dataset_size/16]; 
	static int bucket_1_11_9[dataset_size/16];
    static int bucket_1_11_10[dataset_size/16]; 
	static int bucket_1_11_11[dataset_size/16];
	static int bucket_1_11_12[dataset_size/16]; 
	static int bucket_1_11_13[dataset_size/16];
    static int bucket_1_11_14[dataset_size/16]; 
	static int bucket_1_11_15[dataset_size/16];
	static int bucket_1_12_0[dataset_size/16]; 
	static int bucket_1_12_1[dataset_size/16];
    static int bucket_1_12_2[dataset_size/16]; 
	static int bucket_1_12_3[dataset_size/16];
	static int bucket_1_12_4[dataset_size/16]; 
	static int bucket_1_12_5[dataset_size/16];
    static int bucket_1_12_6[dataset_size/16]; 
	static int bucket_1_12_7[dataset_size/16];
	static int bucket_1_12_8[dataset_size/16]; 
	static int bucket_1_12_9[dataset_size/16];
    static int bucket_1_12_10[dataset_size/16]; 
	static int bucket_1_12_11[dataset_size/16];
	static int bucket_1_12_12[dataset_size/16]; 
	static int bucket_1_12_13[dataset_size/16];
    static int bucket_1_12_14[dataset_size/16]; 
	static int bucket_1_12_15[dataset_size/16];
	static int bucket_1_13_0[dataset_size/16]; 
	static int bucket_1_13_1[dataset_size/16];
    static int bucket_1_13_2[dataset_size/16]; 
	static int bucket_1_13_3[dataset_size/16];
	static int bucket_1_13_4[dataset_size/16]; 
	static int bucket_1_13_5[dataset_size/16];
    static int bucket_1_13_6[dataset_size/16]; 
	static int bucket_1_13_7[dataset_size/16];
	static int bucket_1_13_8[dataset_size/16]; 
	static int bucket_1_13_9[dataset_size/16];
    static int bucket_1_13_10[dataset_size/16]; 
	static int bucket_1_13_11[dataset_size/16];
	static int bucket_1_13_12[dataset_size/16]; 
	static int bucket_1_13_13[dataset_size/16];
    static int bucket_1_13_14[dataset_size/16]; 
	static int bucket_1_13_15[dataset_size/16];
	static int bucket_1_14_0[dataset_size/16]; 
	static int bucket_1_14_1[dataset_size/16];
    static int bucket_1_14_2[dataset_size/16]; 
	static int bucket_1_14_3[dataset_size/16];
	static int bucket_1_14_4[dataset_size/16]; 
	static int bucket_1_14_5[dataset_size/16];
    static int bucket_1_14_6[dataset_size/16]; 
	static int bucket_1_14_7[dataset_size/16];
	static int bucket_1_14_8[dataset_size/16]; 
	static int bucket_1_14_9[dataset_size/16];
    static int bucket_1_14_10[dataset_size/16]; 
	static int bucket_1_14_11[dataset_size/16];
	static int bucket_1_14_12[dataset_size/16]; 
	static int bucket_1_14_13[dataset_size/16];
    static int bucket_1_14_14[dataset_size/16]; 
	static int bucket_1_14_15[dataset_size/16];
	static int bucket_1_15_0[dataset_size/16]; 
	static int bucket_1_15_1[dataset_size/16];
    static int bucket_1_15_2[dataset_size/16]; 
	static int bucket_1_15_3[dataset_size/16];
	static int bucket_1_15_4[dataset_size/16]; 
	static int bucket_1_15_5[dataset_size/16];
    static int bucket_1_15_6[dataset_size/16]; 
	static int bucket_1_15_7[dataset_size/16];
	static int bucket_1_15_8[dataset_size/16]; 
	static int bucket_1_15_9[dataset_size/16];
    static int bucket_1_15_10[dataset_size/16]; 
	static int bucket_1_15_11[dataset_size/16];
	static int bucket_1_15_12[dataset_size/16]; 
	static int bucket_1_15_13[dataset_size/16];
    static int bucket_1_15_14[dataset_size/16]; 
	static int bucket_1_15_15[dataset_size/16];
    // First index: pingpong_buffer id
    // Second index: Inside parallel bucket set id
    // Third index:  bucket id in a bucket set
    // Fourth index: Size of each bucket
    static int bucket_pointer_0[16][16] = {0};
	static int bucket_pointer_1[16][16] = {0};
    // First index: pingpong_buffer id
    // Second index: Inside parallel bucket set id
    // Third index: bucket id in a bucket set
#pragma HLS ARRAY_PARTITION variable=bucket_pointer_0 type=complete
#pragma HLS ARRAY_PARTITION variable=bucket_pointer_1 type=complete
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m1 = 0;

    int id = 0;

    first_round_sort:
    input_bucket(data, 
	bucket_0_0_0, bucket_0_0_1, bucket_0_0_2, bucket_0_0_3, bucket_0_0_4, bucket_0_0_5, bucket_0_0_6, bucket_0_0_7, bucket_0_0_8, bucket_0_0_9, bucket_0_0_10, bucket_0_0_11, bucket_0_0_12, bucket_0_0_13, bucket_0_0_14, bucket_0_0_15,
	bucket_0_1_0, bucket_0_1_1, bucket_0_1_2, bucket_0_1_3, bucket_0_1_4, bucket_0_1_5, bucket_0_1_6, bucket_0_1_7, bucket_0_1_8, bucket_0_1_9, bucket_0_1_10, bucket_0_1_11, bucket_0_1_12, bucket_0_1_13, bucket_0_1_14, bucket_0_1_15,
	bucket_0_2_0, bucket_0_2_1, bucket_0_2_2, bucket_0_2_3, bucket_0_2_4, bucket_0_2_5, bucket_0_2_6, bucket_0_2_7, bucket_0_2_8, bucket_0_2_9, bucket_0_2_10, bucket_0_2_11, bucket_0_2_12, bucket_0_2_13, bucket_0_2_14, bucket_0_2_15,
	bucket_0_3_0, bucket_0_3_1, bucket_0_3_2, bucket_0_3_3, bucket_0_3_4, bucket_0_3_5, bucket_0_3_6, bucket_0_3_7, bucket_0_3_8, bucket_0_3_9, bucket_0_3_10, bucket_0_3_11, bucket_0_3_12, bucket_0_3_13, bucket_0_3_14, bucket_0_3_15,
	bucket_0_4_0, bucket_0_4_1, bucket_0_4_2, bucket_0_4_3, bucket_0_4_4, bucket_0_4_5, bucket_0_4_6, bucket_0_4_7, bucket_0_4_8, bucket_0_4_9, bucket_0_4_10, bucket_0_4_11, bucket_0_4_12, bucket_0_4_13, bucket_0_4_14, bucket_0_4_15,
	bucket_0_5_0, bucket_0_5_1, bucket_0_5_2, bucket_0_5_3, bucket_0_5_4, bucket_0_5_5, bucket_0_5_6, bucket_0_5_7, bucket_0_5_8, bucket_0_5_9, bucket_0_5_10, bucket_0_5_11, bucket_0_5_12, bucket_0_5_13, bucket_0_5_14, bucket_0_5_15,
	bucket_0_6_0, bucket_0_6_1, bucket_0_6_2, bucket_0_6_3, bucket_0_6_4, bucket_0_6_5, bucket_0_6_6, bucket_0_6_7, bucket_0_6_8, bucket_0_6_9, bucket_0_6_10, bucket_0_6_11, bucket_0_6_12, bucket_0_6_13, bucket_0_6_14, bucket_0_6_15,
	bucket_0_7_0, bucket_0_7_1, bucket_0_7_2, bucket_0_7_3, bucket_0_7_4, bucket_0_7_5, bucket_0_7_6, bucket_0_7_7, bucket_0_7_8, bucket_0_7_9, bucket_0_7_10, bucket_0_7_11, bucket_0_7_12, bucket_0_7_13, bucket_0_7_14, bucket_0_7_15,
	bucket_0_8_0, bucket_0_8_1, bucket_0_8_2, bucket_0_8_3, bucket_0_8_4, bucket_0_8_5, bucket_0_8_6, bucket_0_8_7, bucket_0_8_8, bucket_0_8_9, bucket_0_8_10, bucket_0_8_11, bucket_0_8_12, bucket_0_8_13, bucket_0_8_14, bucket_0_8_15,
	bucket_0_9_0, bucket_0_9_1, bucket_0_9_2, bucket_0_9_3, bucket_0_9_4, bucket_0_9_5, bucket_0_9_6, bucket_0_9_7, bucket_0_9_8, bucket_0_9_9, bucket_0_9_10, bucket_0_9_11, bucket_0_9_12, bucket_0_9_13, bucket_0_9_14, bucket_0_9_15,
	bucket_0_10_0, bucket_0_10_1, bucket_0_10_2, bucket_0_10_3, bucket_0_10_4, bucket_0_10_5, bucket_0_10_6, bucket_0_10_7, bucket_0_10_8, bucket_0_10_9, bucket_0_10_10, bucket_0_10_11, bucket_0_10_12, bucket_0_10_13, bucket_0_10_14, bucket_0_10_15,
	bucket_0_11_0, bucket_0_11_1, bucket_0_11_2, bucket_0_11_3, bucket_0_11_4, bucket_0_11_5, bucket_0_11_6, bucket_0_11_7, bucket_0_11_8, bucket_0_11_9, bucket_0_11_10, bucket_0_11_11, bucket_0_11_12, bucket_0_11_13, bucket_0_11_14, bucket_0_11_15,
	bucket_0_12_0, bucket_0_12_1, bucket_0_12_2, bucket_0_12_3, bucket_0_12_4, bucket_0_12_5, bucket_0_12_6, bucket_0_12_7, bucket_0_12_8, bucket_0_12_9, bucket_0_12_10, bucket_0_12_11, bucket_0_12_12, bucket_0_12_13, bucket_0_12_14, bucket_0_12_15,
	bucket_0_13_0, bucket_0_13_1, bucket_0_13_2, bucket_0_13_3, bucket_0_13_4, bucket_0_13_5, bucket_0_13_6, bucket_0_13_7, bucket_0_13_8, bucket_0_13_9, bucket_0_13_10, bucket_0_13_11, bucket_0_13_12, bucket_0_13_13, bucket_0_13_14, bucket_0_13_15,
	bucket_0_14_0, bucket_0_14_1, bucket_0_14_2, bucket_0_14_3, bucket_0_14_4, bucket_0_14_5, bucket_0_14_6, bucket_0_14_7, bucket_0_14_8, bucket_0_14_9, bucket_0_14_10, bucket_0_14_11, bucket_0_14_12, bucket_0_14_13, bucket_0_14_14, bucket_0_14_15,
	bucket_0_15_0, bucket_0_15_1, bucket_0_15_2, bucket_0_15_3, bucket_0_15_4, bucket_0_15_5, bucket_0_15_6, bucket_0_15_7, bucket_0_15_8, bucket_0_15_9, bucket_0_15_10, bucket_0_15_11, bucket_0_15_12, bucket_0_15_13, bucket_0_15_14, bucket_0_15_15,
	bucket_pointer_0);
    id = 1 - id;
    after_first_round_sort:
    for(i=2; i<bit_width_hex; i++){
        id = 1 - id;
		if(id==0){
			output_bucket(i, bucket_0, bucket_1, bucket_pointer_0, bucket_pointer_1);
		}
        else{
			output_bucket(i, bucket_1, bucket_0, bucket_pointer_1, bucket_pointer_0);
		}	
    }

    output_bucket:
    for (l = 0; l < 16; l++) {
#pragma HLS PIPELINE
		for(j = 0; j < 16; j++){
			for(m1=0; m1<bucket_pointer_0[j][l]; m1++){
	#pragma HLS loop_tripcount min=dataset_size/256 max=dataset_size/256// depends on the size of dataset_size/n
				sorted_data[k] = bucket_0[j][l][m1];
				k = k + 1;
			}
		}
	}
}


void radix_sort_test(){
    static int dataset[] = {
#include "/home/boyiw7/dataset_gen/dataset_1M_1.h"
    };

    static int output[dataset_size];
    int i;

    radix_sort(dataset, output);

    for(i=0; i<dataset_size; i++){
        printf("Sorted_results: rank %d, value= %d \n", i, output[i]);
    }
}

