/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementation file stats.c
 *
 * This file is implemented as functions for the analysis and sorting statistics
 *
 * @author Thanh Le
 * @date 8 May 2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/* Declare of functions */
void swap(unsigned char *x, unsigned char *y);


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

    /* Statistics and Printing Functions Go Here */
    printf("Before sorting the statistics:\n");
    print_array(test, SIZE);
    sort_array(test, SIZE);
    printf("After sorting the statistics:\n");
    print_array(test, SIZE);
    print_statistics(test, SIZE);
}

/* Add other Implementation File Code Here */
// Only using for sorted array
void print_statistics(unsigned char array[], unsigned int length) {
    // Calculate median of array
    printf("Median: %d\n", find_median(array, length));
    // Calculate mean of array
    printf("Mean: %d\n", find_mean(array, length));
    // Find the maximum element
    unsigned char maximum = find_maximum(array, length);
    printf("Maximum: %d\n", maximum);
    // Find the minimum element
    unsigned char minimum = find_minimum(array, length);
    printf("Minimum: %d\n", minimum);
}


void print_array(unsigned char * array, unsigned int length) {
    printf("Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", *array);
        array++;
    }
    printf("\n");
}

// Only using for sorted array
unsigned char find_median(unsigned char array[], unsigned int length) {
    unsigned char median = 0;
    if (length % 2 == 0) {
        median = (unsigned char) (array[length / 2] + array[(length / 2) + 1]) / 2;
    } else {
        median = (unsigned char) array[length / 2];
    }
    return median;
}

// Only using for sorted array
unsigned char find_mean(unsigned char array[], unsigned int length) {
    unsigned int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    return (unsigned char) (sum / length);
}


unsigned char find_maximum(unsigned char array[], unsigned int length) {
    int maximum = array[0];
    for (size_t i = 1; i < length; i++) {
        if (maximum < array[i]) {
            maximum = array[i];
        }
    }
    return maximum;
}

unsigned char find_minimum(unsigned char array[], unsigned int length) {
    int minimum = array[0];
    for (size_t i = 1; i < length; i++) {
        if (minimum > array[i]) {
            minimum = array[i];
        }
    }
    return minimum;
}


void sort_array(unsigned char array[], unsigned int length) {
    int i, j, max_idx;

    for (i = 0; i < length - 1; i++) {
        // Find the maximum element in unsorted array
        max_idx = i;
        for (j = i + 1; j < length; j++) {
            if (array[max_idx] < array[j]) {
                max_idx = j;
            }
        }
        // Swap the maximum element with the first element
        swap(&array[i], &array[max_idx]);
    }
}


void swap(unsigned char *x, unsigned char *y) {
    unsigned char temp = *x;
    *x = *y;
    *y = temp;
}