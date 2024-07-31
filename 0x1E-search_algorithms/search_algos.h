
#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/*Header*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/*Helper function*/
void print_array(int *array, int left, int right);
#endif