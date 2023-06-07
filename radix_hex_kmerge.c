#include <stdio.h>
#include "dataset_size.h"
#include "merge_sort.h"
#include "radix_sort_module.h"
#define bit_width_bin 32
#define bit_width_hex bit_width_bin/4


void multi_radix_hex_kmerge(int input[64][batch_size], int output[dataset_size]){
// #pragma HLS INTERFACE m_axi depth=dataset_size port=input offset=slave bundle=intput
// #pragma HLS INTERFACE m_axi depth=dataset_size port=output offset=slave bundle=output
// #pragma HLS INTERFACE s_axilite port=return bundle=control
    static int temp0[64][batch_size];
    static int temp1[32][2*batch_size];
    static int temp2[16][4*batch_size];
    static int temp3[8][8*batch_size];
    static int temp4[4][16*batch_size];
    static int temp5[2][32*batch_size];

#pragma HLS ARRAY_PARTITION variable=input type=complete dim=1
#pragma HLS ARRAY_PARTITION variable=temp0 type=complete dim=1
#pragma HLS ARRAY_PARTITION variable=temp1 type=complete dim=1
#pragma HLS ARRAY_PARTITION variable=temp2 type=complete dim=1
#pragma HLS ARRAY_PARTITION variable=temp3 type=complete dim=1
#pragma HLS ARRAY_PARTITION variable=temp4 type=complete dim=1
#pragma HLS ARRAY_PARTITION variable=temp5 type=complete dim=1

    int i;
// #pragma HLS DATAFLOW

    for(i=0; i<64; i++){
#pragma HLS UNROLL
        radix_sort(input[i], temp0[i]);
    }

    for(i=0; i<32; i++){
#pragma HLS UNROLL
        merge_sort_batch0(temp0[2*i], temp0[2*i+1], temp1[i]);
    }

    for(i=0; i<16; i++){
#pragma HLS UNROLL
        merge_sort_batch1(temp1[2*i], temp1[2*i+1], temp2[i]);
    }

    for(i=0; i<8; i++){
#pragma HLS UNROLL
        merge_sort_batch2(temp2[2*i], temp2[2*i+1], temp3[i]);
    }

    for(i=0; i<4; i++){
#pragma HLS UNROLL
        merge_sort_batch3(temp3[2*i], temp3[2*i+1], temp4[i]);
    }

    for(i=0; i<2; i++){
#pragma HLS UNROLL
        merge_sort_batch4(temp4[2*i], temp4[2*i+1], temp5[i]);
    }

    merge_sort_batch5(temp5[0], temp5[1], output);

}


void radix_hex_kmerge_top(int dataset[dataset_size], int output[dataset_size]){
// #pragma HLS INTERFACE m_axi depth=dataset_size port=dataset offset=slave bundle=dataset
// #pragma HLS INTERFACE m_axi depth=dataset_size port=output offset=slave bundle=output
// #pragma HLS INTERFACE s_axilite port=return bundle=control
	static int input[64][batch_size] = {0};
	static int output_temp[dataset_size] = {0};
#pragma HLS ARRAY_PARTITION variable=input type=complete dim=1
//#pragma HLS ARRAY_PARTITION variable=dataset type=block factor=64
	int i;
	int j;
	for(i=0; i<64; i++){
#pragma HLS PIPELINE
		for(j=0; j<batch_size; j++){
			input[i][j] = dataset[i*batch_size+j];
		}
	}
	multi_radix_hex_kmerge(input, output);

}


void radix_hex_kmerge_test(){
    static int dataset[] = {
#include "/home/boyiw7/dataset_gen/dataset_1M_1.h"
    };

    static int output[dataset_size];
    int i;

    radix_hex_kmerge_top(dataset, output);

    for(i=0; i<dataset_size; i++){
        printf("Sorted_results: rank %d, value= %d \n", i, output[i]);
    }
}