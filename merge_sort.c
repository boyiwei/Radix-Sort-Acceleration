#include <stdio.h>
#include "dataset_size.h"
#include "merge_sort.h"
#include "assert.h"
#define STAGES 24
#define MAX_VALUE 2147483647

struct data_index_pair{
    int data;
    int index;
};

void merge_sort(int input1[batch_size], int input2[batch_size], int sorted_data[2*batch_size]){
	int j = 0;
	int k = 0;
	for(int i=0; i<2*batch_size; i++){
		printf("i=%d, input1[%d] = %d, input2[%d]=%d\n", i, j, input1[j], k, input2[k]);
#pragma HLS PIPELINE
		if((j<batch_size)&&(k<batch_size)){
			if(input1[j]<input2[k]){
				sorted_data[i] = input1[j];
				j = j + 1;
				printf("sorted_data[%d]=%d, j=%d\n", i, sorted_data[i], j);
			}
			else{
				sorted_data[i] = input2[k];
				k = k + 1;
				printf("sorted_data[%d]=%d, k=%d\n", i, sorted_data[i], k);
			}
		}

		else if((j==batch_size)&&(k<batch_size)){
			sorted_data[i] = input2[k];
			k = k + 1;
		}
		else{
			sorted_data[i] = input1[j];
			j = j + 1;
		}
	}
}


void merge_arrays(int in[batch_size], int width, int out[batch_size]){
	int f1 = 0;
	int f2 = width;
	int i2 = width;
	int i3 = 2 * width;
	if(i2 >= batch_size)
		i2 = batch_size;
	if(i3 >= batch_size)
		i3 = batch_size;
	merge_arrays:
	for(int i=0; i<batch_size; i++){
#pragma HLS PIPELINE II=1
		int t1 = in[f1];
		int t2 = (f2==i3)?0:in[f2];
		if(f2==i3||(f1<i2&&t1<=t2)){
			out[i] = t1;
			f1++;
		}
		else{
			assert(f2<i3);
			out[i] = t2;
			f2++;
		}
		if(f1==i2 && f2==i3){
			f1 = i3;
			i2 += 2*width;
			i3 += 2*width;
			if(i2>=batch_size)
				i2 = batch_size;
			if(i3 >= batch_size)
				i3 = batch_size;
			f2 = i2;
		}
	}
}


void merge_sort_parallel(int in[batch_size], int out[batch_size]){
#pragma HLS DATAFLOW

	int temp[STAGES-1][batch_size];
#pragma HLS ARRAY_PARTITION variable=temp type=complete dim=1
	int width = 1;
	merge_arrays(in, width, temp[0]);
	width *= 2;

	for(int stage=1; stage<STAGES-1;stage++){
#pragma HLS UNROLL
		merge_arrays(temp[stage-1], width, temp[stage]);
		width *= 2;
	}
	merge_arrays(temp[STAGES-2], width, out);
}


//----functions for k-way merge tree------------------------------


void merge_sort_batch0(int input1[batch_size], int input2[batch_size], int sorted_data[2*batch_size]){
    int j = 0;
    int k = 0;
    for(int i=0; i<2*batch_size; i++){
#pragma HLS PIPELINE
        if((j<batch_size)&&(k<batch_size)){
            if(input1[j]<input2[k]){
                sorted_data[i] = input1[j];
                j = j + 1;
            }
            else{
                sorted_data[i] = input2[k];
                k = k + 1;
            }
        }

        else if((j==batch_size)&&(k<batch_size)){
            sorted_data[i] = input2[k];
            k = k + 1;
        }
        else{
            sorted_data[i] = input1[j];
            j = j + 1;
        }
    }
}


void merge_sort_batch1(int input1[2*batch_size], int input2[2*batch_size], int sorted_data[4*batch_size]){
    int j = 0;
    int k = 0;
    for(int i=0; i<4*batch_size; i++){
#pragma HLS PIPELINE
        if((j<2*batch_size)&&(k<2*batch_size)){
            if(input1[j]<input2[k]){
                sorted_data[i] = input1[j];
                j = j + 1;
            }
            else{
                sorted_data[i] = input2[k];
                k = k + 1;
            }
        }

        else if((j==2*batch_size)&&(k<2*batch_size)){
            sorted_data[i] = input2[k];
            k = k + 1;
        }
        else{
            sorted_data[i] = input1[j];
            j = j + 1;
        }
    }
}


void merge_sort_batch2(int input1[4*batch_size], int input2[4*batch_size], int sorted_data[8*batch_size]){
    int j = 0;
    int k = 0;
    for(int i=0; i<8*batch_size; i++){
#pragma HLS PIPELINE
        if((j<4*batch_size)&&(k<4*batch_size)){
            if(input1[j]<input2[k]){
                sorted_data[i] = input1[j];
                j = j + 1;
            }
            else{
                sorted_data[i] = input2[k];
                k = k + 1;
            }
        }

        else if((j==4*batch_size)&&(k<4*batch_size)){
            sorted_data[i] = input2[k];
            k = k + 1;
        }
        else{
            sorted_data[i] = input1[j];
            j = j + 1;
        }
    }
}


void merge_sort_batch3(int input1[8*batch_size], int input2[8*batch_size], int sorted_data[16*batch_size]){
    int j = 0;
    int k = 0;
    for(int i=0; i<16*batch_size; i++){
#pragma HLS PIPELINE
        if((j<8*batch_size)&&(k<8*batch_size)){
            if(input1[j]<input2[k]){
                sorted_data[i] = input1[j];
                j = j + 1;
            }
            else{
                sorted_data[i] = input2[k];
                k = k + 1;
            }
        }

        else if((j==8*batch_size)&&(k<8*batch_size)){
            sorted_data[i] = input2[k];
            k = k + 1;
        }
        else{
            sorted_data[i] = input1[j];
            j = j + 1;
        }
    }
}


void merge_sort_batch4(int input1[16*batch_size], int input2[16*batch_size], int sorted_data[32*batch_size]){
    int j = 0;
    int k = 0;
    for(int i=0; i<32*batch_size; i++){
#pragma HLS PIPELINE
        if((j<16*batch_size)&&(k<16*batch_size)){
            if(input1[j]<input2[k]){
                sorted_data[i] = input1[j];
                j = j + 1;
            }
            else{
                sorted_data[i] = input2[k];
                k = k + 1;
            }
        }

        else if((j==16*batch_size)&&(k<16*batch_size)){
            sorted_data[i] = input2[k];
            k = k + 1;
        }
        else{
            sorted_data[i] = input1[j];
            j = j + 1;
        }
    }
}


void merge_sort_batch5(int input1[32*batch_size], int input2[32*batch_size], int sorted_data[dataset_size]){
    int j = 0;
    int k = 0;
    for(int i=0; i<dataset_size; i++){
#pragma HLS PIPELINE
        if((j<32*batch_size)&&(k<32*batch_size)){
            if(input1[j]<input2[k]){
                sorted_data[i] = input1[j];
                j = j + 1;
            }
            else{
                sorted_data[i] = input2[k];
                k = k + 1;
            }
        }

        else if((j==32*batch_size)&&(k<32*batch_size)){
            sorted_data[i] = input2[k];
            k = k + 1;
        }
        else{
            sorted_data[i] = input1[j];
            j = j + 1;
        }
    }
}

// ---------------------------functions for loser_tree-------------------------------------


void loser_tree_64(int input[64][batch_size], int output[64 * batch_size]) {
    int loser_tree[64];
    int current_indices[64] = {0};
    int winner_index_stage0[32] = {0};
    int winner_index_stage1[16] = {0};
    int winner_index_stage2[8] = {0};
    int winner_index_stage3[4] = {0};
    int winner_index_stage4[2] = {0};
#pragma HLS ARRAY_PARTITION variable=input type=complete dim=1
#pragma HLS ARRAY_PARTITION variable=loser_tree type=complete
#pragma HLS ARRAY_PARTITION variable=current_indices type=complete
#pragma HLS ARRAY_PARTITION variable=winner_index_stage0 type=complete
#pragma HLS ARRAY_PARTITION variable=winner_index_stage1 type=complete
#pragma HLS ARRAY_PARTITION variable=winner_index_stage2 type=complete
#pragma HLS ARRAY_PARTITION variable=winner_index_stage3 type=complete
#pragma HLS ARRAY_PARTITION variable=winner_index_stage4 type=complete


    int i;
    int j;
    for (i = 0; i < 64; i++) {
#pragma HLS UNROLL
        loser_tree[i] = input[i][0];
    }

    for (i = 0; i < 64*batch_size; i++) {
#pragma HLS PIPELINE II=1

        int winner_index = 0;
        int winner_value = MAX_VALUE;

        find_winner:
			find_winner_stage0:
			for(j=0; j<32; j++){
#pragma HLS UNROLL
				winner_index_stage0[j] = loser_tree[2*j] < loser_tree[2*j+1] ? 2*j : 2*j+1;
			}
        	find_winner_stage1:
			for(j=0; j<16; j++){
#pragma HLS UNROLL
				winner_index_stage1[j] = loser_tree[winner_index_stage0[2*j]]< loser_tree[winner_index_stage0[2*j+1]] ? winner_index_stage0[2*j] : winner_index_stage0[2*j+1];
			}
			find_winner_stage2:
			for(j=0; j<8; j++){
#pragma HLS UNROLL
				winner_index_stage2[j] = loser_tree[winner_index_stage1[2*j]] < loser_tree[winner_index_stage1[2*j+1]] ? winner_index_stage1[2*j] : winner_index_stage1[2*j+1];
			}
			find_winner_stage3:
			for(j=0; j<4; j++){
#pragma HLS UNROLL
				winner_index_stage3[j] = loser_tree[winner_index_stage2[2*j]] < loser_tree[winner_index_stage2[2*j+1]] ? winner_index_stage2[2*j] : winner_index_stage2[2*j+1];
			}
			find_winner_stage4:
			for(j=0; j<2; j++){
#pragma HLS UNROLL
				winner_index_stage4[j] = loser_tree[winner_index_stage3[2*j]] < loser_tree[winner_index_stage3[2*j+1]] ? winner_index_stage3[2*j] : winner_index_stage3[2*j+1];
			}

			winner_index = loser_tree[winner_index_stage4[0]] < loser_tree[winner_index_stage4[1]] ? winner_index_stage4[0] : winner_index_stage4[1];
			winner_value = loser_tree[winner_index];


        output[i] = winner_value;

        int input_index = winner_index;
        current_indices[input_index]++;

        if (current_indices[input_index] < batch_size) {
            loser_tree[winner_index] = input[input_index][current_indices[input_index]];
        } else {
            loser_tree[winner_index] = MAX_VALUE;
        }
    }
}


void loser_tree_32(int input[32][batch_size], int output[32 * batch_size]) {
    int loser_tree[32];
    int current_indices[32] = {0};
    int winner_index_stage0[16] = {0};
    int winner_index_stage1[8] = {0};
    int winner_index_stage2[4] = {0};
    int winner_index_stage3[2] = {0};
#pragma HLS ARRAY_PARTITION variable=input type=complete dim=1
#pragma HLS ARRAY_PARTITION variable=loser_tree type=complete
#pragma HLS ARRAY_PARTITION variable=current_indices type=complete
#pragma HLS ARRAY_PARTITION variable=winner_index_stage0 type=complete
#pragma HLS ARRAY_PARTITION variable=winner_index_stage1 type=complete
#pragma HLS ARRAY_PARTITION variable=winner_index_stage2 type=complete
#pragma HLS ARRAY_PARTITION variable=winner_index_stage3 type=complete


    int i;
    int j;
    for (i = 0; i < 32; i++) {
#pragma HLS UNROLL
        loser_tree[i] = input[i][0];
    }

    for (i = 0; i < 32*batch_size; i++) {
#pragma HLS PIPELINE II=1

        int winner_index = 0;
        int winner_value = MAX_VALUE;

        find_winner:
			find_winner_stage0:
			for(j=0; j<16; j++){
#pragma HLS UNROLL
				winner_index_stage0[j] = loser_tree[2*j] < loser_tree[2*j+1] ? 2*j : 2*j+1;
			}
        	find_winner_stage1:
			for(j=0; j<8; j++){
#pragma HLS UNROLL
				winner_index_stage1[j] = loser_tree[winner_index_stage0[2*j]]< loser_tree[winner_index_stage0[2*j+1]] ? winner_index_stage0[2*j] : winner_index_stage0[2*j+1];
			}
			find_winner_stage2:
			for(j=0; j<4; j++){
#pragma HLS UNROLL
				winner_index_stage2[j] = loser_tree[winner_index_stage1[2*j]] < loser_tree[winner_index_stage1[2*j+1]] ? winner_index_stage1[2*j] : winner_index_stage1[2*j+1];
			}
			find_winner_stage3:
			for(j=0; j<2; j++){
#pragma HLS UNROLL
				winner_index_stage3[j] = loser_tree[winner_index_stage2[2*j]] < loser_tree[winner_index_stage2[2*j+1]] ? winner_index_stage2[2*j] : winner_index_stage2[2*j+1];
			}

			winner_index = loser_tree[winner_index_stage3[0]] < loser_tree[winner_index_stage3[1]] ? winner_index_stage3[0] : winner_index_stage3[1];
			winner_value = loser_tree[winner_index];


        output[i] = winner_value;

        int input_index = winner_index;
        current_indices[input_index]++;

        if (current_indices[input_index] < batch_size) {
            loser_tree[winner_index] = input[input_index][current_indices[input_index]];
        } else {
            loser_tree[winner_index] = MAX_VALUE;
        }
    }
}


void loser_tree_16(int input[16][batch_size], int output[16 * batch_size]) {
    int loser_tree[16];
    int current_indices[16] = {0};
    int winner_index_stage0[8] = {0};
    int winner_index_stage1[4] = {0};
    int winner_index_stage2[2] = {0};
#pragma HLS ARRAY_PARTITION variable=input type=complete dim=1
#pragma HLS ARRAY_PARTITION variable=loser_tree type=complete
#pragma HLS ARRAY_PARTITION variable=current_indices type=complete
#pragma HLS ARRAY_PARTITION variable=winner_index_stage0 type=complete
#pragma HLS ARRAY_PARTITION variable=winner_index_stage1 type=complete
#pragma HLS ARRAY_PARTITION variable=winner_index_stage2 type=complete


    int i;
    int j;
    for (i = 0; i < 16; i++) {
#pragma HLS UNROLL
        loser_tree[i] = input[i][0];
    }

    for (i = 0; i < 16*batch_size; i++) {
#pragma HLS PIPELINE II=1

        int winner_index = 0;
        int winner_value = MAX_VALUE;

        find_winner:
			find_winner_stage0:
			for(j=0; j<8; j++){
#pragma HLS UNROLL
				winner_index_stage0[j] = loser_tree[2*j] < loser_tree[2*j+1] ? 2*j : 2*j+1;
			}
        	find_winner_stage1:
			for(j=0; j<4; j++){
#pragma HLS UNROLL
				winner_index_stage1[j] = loser_tree[winner_index_stage0[2*j]]< loser_tree[winner_index_stage0[2*j+1]] ? winner_index_stage0[2*j] : winner_index_stage0[2*j+1];
			}
			find_winner_stage2:
			for(j=0; j<2; j++){
#pragma HLS UNROLL
				winner_index_stage2[j] = loser_tree[winner_index_stage1[2*j]] < loser_tree[winner_index_stage1[2*j+1]] ? winner_index_stage1[2*j] : winner_index_stage1[2*j+1];
			}

			winner_index = loser_tree[winner_index_stage2[0]] < loser_tree[winner_index_stage2[1]] ? winner_index_stage2[0] : winner_index_stage2[1];
			winner_value = loser_tree[winner_index];


        output[i] = winner_value;

        int input_index = winner_index;
        current_indices[input_index]++;

        if (current_indices[input_index] < batch_size) {
            loser_tree[winner_index] = input[input_index][current_indices[input_index]];
        } else {
            loser_tree[winner_index] = MAX_VALUE;
        }
    }
}




