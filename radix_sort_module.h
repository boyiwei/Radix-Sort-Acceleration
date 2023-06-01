#include <stdio.h>
#include "dataset_size.h"

void input_bucket_step(int i, int sorted_data[batch_size], int bucket[16][batch_size/16], int bucket_pointer[16], int start);


void input_bucket(int i, int sorted_data[batch_size], int bucket[16][16][batch_size/16], int bucket_pointer[16][16]);


void output_bucket_step1(int i,
		int bucket0_0[batch_size/16], int bucket0_1[batch_size/16], int bucket0_2[batch_size/16], int bucket0_3[batch_size/16],
		int bucket0_4[batch_size/16], int bucket0_5[batch_size/16], int bucket0_6[batch_size/16], int bucket0_7[batch_size/16],
		int bucket0_8[batch_size/16], int bucket0_9[batch_size/16], int bucket0_10[batch_size/16], int bucket0_11[batch_size/16],
		int bucket0_12[batch_size/16], int bucket0_13[batch_size/16], int bucket0_14[batch_size/16], int bucket0_15[batch_size/16],
		int bucket1[16][batch_size/16],
		int bucket_pointer0_0, int bucket_pointer0_1, int bucket_pointer0_2, int bucket_pointer0_3,
		int bucket_pointer0_4, int bucket_pointer0_5, int bucket_pointer0_6, int bucket_pointer0_7,
		int bucket_pointer0_8, int bucket_pointer0_9, int bucket_pointer0_10, int bucket_pointer0_11,
		int bucket_pointer0_12, int bucket_pointer0_13, int bucket_pointer0_14, int bucket_pointer0_15,
		int bucket_pointer1[16]);


void output_bucket(int i, int bucket0[16][16][batch_size/16], int bucket1[16][16][batch_size/16], int bucket_pointer0[16][16], int bucket_pointer1[16][16]);


void radix_sort(int data[batch_size], int sorted_data[batch_size]);


void radix_sort_test();
