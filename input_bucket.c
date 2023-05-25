#include <stdio.h>
#include "dataset_size.h"
#define bit_width_bin 32
#define bit_width_hex bit_width_bin/4


void input_bucket(int data[dataset_size], int bucket[16][16][dataset_size/16], int bucket_pointer[16][16]){
    for (int j = 0; j < dataset_size; j++) {
#pragma HLS PIPELINE
        int shifted0 = data[j] >> 4;	
		int shifted1 = data[j] >> 8;
        int radix0 = shifted0 & 0xf;
		int radix1 = (shifted1 >> 4) & 0xf;
		bucket[radix0][radix1][bucket_pointer[radix0][radix1]] = data[j];
        bucket_pointer[radix0][radix1] += 1;
    }
}


void output_bucket_step0(int i, int bucket0[dataset_size/16], int bucket1[16][dataset_size/16], int bucket_pointer0, int bucket_pointer1[16]){
	int m;
	int shifted;
	int ith_radix;
	for(m=0; m<bucket_pointer0; m++){
#pragma HLS loop_tripcount min=dataset_size/256 max=dataset_size/256
		shifted = bucket0[m] >> (i*4);
		ith_radix = shifted & 0xf;
		bucket1[ith_radix][bucket_pointer1[ith_radix]] = bucket0[m];
		bucket_pointer1[ith_radix] += 1;
	}
}


void output_bucket_step1(int i,
		int bucket0_0[dataset_size/16], int bucket0_1[dataset_size/16], int bucket0_2[dataset_size/16], int bucket0_3[dataset_size/16],
		int bucket0_4[dataset_size/16], int bucket0_5[dataset_size/16], int bucket0_6[dataset_size/16], int bucket0_7[dataset_size/16],
		int bucket0_8[dataset_size/16], int bucket0_9[dataset_size/16], int bucket0_10[dataset_size/16], int bucket0_11[dataset_size/16],
		int bucket0_12[dataset_size/16], int bucket0_13[dataset_size/16], int bucket0_14[dataset_size/16], int bucket0_15[dataset_size/16],
		int bucket1[16][dataset_size/16],
		int bucket_pointer0_0, int bucket_pointer0_1, int bucket_pointer0_2, int bucket_pointer0_3,
		int bucket_pointer0_4, int bucket_pointer0_5, int bucket_pointer0_6, int bucket_pointer0_7,
		int bucket_pointer0_8, int bucket_pointer0_9, int bucket_pointer0_10, int bucket_pointer0_11,
		int bucket_pointer0_12, int bucket_pointer0_13, int bucket_pointer0_14, int bucket_pointer0_15,
		int bucket_pointer1[16]){

	output_bucket_step0(i, bucket0_0, bucket1, bucket_pointer0_0, bucket_pointer1);
	output_bucket_step0(i, bucket0_1, bucket1, bucket_pointer0_1, bucket_pointer1);
	output_bucket_step0(i, bucket0_2, bucket1, bucket_pointer0_2, bucket_pointer1);
	output_bucket_step0(i, bucket0_3, bucket1, bucket_pointer0_3, bucket_pointer1);
	output_bucket_step0(i, bucket0_4, bucket1, bucket_pointer0_4, bucket_pointer1);
	output_bucket_step0(i, bucket0_5, bucket1, bucket_pointer0_5, bucket_pointer1);
	output_bucket_step0(i, bucket0_6, bucket1, bucket_pointer0_6, bucket_pointer1);
	output_bucket_step0(i, bucket0_7, bucket1, bucket_pointer0_7, bucket_pointer1);
	output_bucket_step0(i, bucket0_8, bucket1, bucket_pointer0_8, bucket_pointer1);
	output_bucket_step0(i, bucket0_9, bucket1, bucket_pointer0_9, bucket_pointer1);
	output_bucket_step0(i, bucket0_10, bucket1, bucket_pointer0_10, bucket_pointer1);
	output_bucket_step0(i, bucket0_11, bucket1, bucket_pointer0_11, bucket_pointer1);
	output_bucket_step0(i, bucket0_12, bucket1, bucket_pointer0_12, bucket_pointer1);
	output_bucket_step0(i, bucket0_13, bucket1, bucket_pointer0_13, bucket_pointer1);
	output_bucket_step0(i, bucket0_14, bucket1, bucket_pointer0_14, bucket_pointer1);
	output_bucket_step0(i, bucket0_15, bucket1, bucket_pointer0_15, bucket_pointer1);

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
	output_bucket_step1(i,
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
	output_bucket_step1(i,
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
    output_bucket_step1(i,
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
    output_bucket_step1(i,
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
    output_bucket_step1(i,
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
    output_bucket_step1(i,
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
    output_bucket_step1(i,
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
    output_bucket_step1(i,
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
	output_bucket_step1(i,
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
    output_bucket_step1(i,
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
    output_bucket_step1(i,
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
    output_bucket_step1(i,
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
    output_bucket_step1(i,
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
    output_bucket_step1(i,
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
    output_bucket_step1(i,
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
	output_bucket_step1(i,
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
    static int bucket_0[16][16][dataset_size/16]; // Be careful that dataset_size can't be an odd number.
	static int bucket_1[16][16][dataset_size/16];
    // First index: pingpong_buffer id
    // Second index: Inside parallel bucket set id
    // Third index:  bucket id in a bucket set
    // Fourth index: Size of each bucket
    static int bucket_pointer_0[16][16] = {0};
	static int bucket_pointer_1[16][16] = {0};
    // First index: pingpong_buffer id
    // Second index: Inside parallel bucket set id
    // Third index: bucket id in a bucket set
#pragma HLS ARRAY_PARTITION variable=bucket_0 type=complete dim=1
#pragma HLS ARRAY_PARTITION variable=bucket_0 type=complete dim=2
#pragma HLS ARRAY_PARTITION variable=bucket_1 type=complete dim=1
#pragma HLS ARRAY_PARTITION variable=bucket_1 type=complete dim=2
#pragma HLS ARRAY_PARTITION variable=bucket_pointer_0 type=complete
#pragma HLS ARRAY_PARTITION variable=bucket_pointer_1 type=complete
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m1 = 0;

    int id = 0;

    first_round_sort:
    input_bucket(data, bucket_0, bucket_pointer_0);
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

