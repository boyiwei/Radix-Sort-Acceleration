#include <stdio.h>
#include "dataset_size.h"


void merge_sort(int input1[batch_size], int input2[batch_size], int sorted_data[2*batch_size]);

void merge_sort_batch0(int input1[batch_size], int input2[batch_size], int sorted_data[2*batch_size]);

void merge_sort_batch1(int input1[2*batch_size], int input2[2*batch_size], int sorted_data[4*batch_size]);

void merge_sort_batch2(int input1[4*batch_size], int input2[4*batch_size], int sorted_data[8*batch_size]);

void merge_sort_batch3(int input1[8*batch_size], int input2[8*batch_size], int sorted_data[16*batch_size]);

void merge_sort_batch4(int input1[16*batch_size], int input2[16*batch_size], int sorted_data[32*batch_size]);

void merge_sort_batch5(int input1[32*batch_size], int input2[32*batch_size], int sorted_data[64*batch_size]);

void loser_tree_64(int input[64][batch_size], int output[64 * batch_size]);

void loser_tree_32(int input[32][batch_size], int output[32*batch_size]);

void loser_tree_16(int input[16][batch_size], int output[16*batch_size]);
