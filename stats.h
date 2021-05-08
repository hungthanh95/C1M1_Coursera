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
 * @file stats.h
 * @brief Header file stats.h
 *
 * The stats.h header file needs to include declarations and documentation
 * for the functions from the stats.c file.
 *
 * @author Thanh Le
 * @date May 8 2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Function that prints the statistics
 *
 * This function that prints the statistics
 * of an array including minimum, maximum, mean, and median
 *
 * @param unsigned char array[]: Data array
 * @param unsigned char length: Length of data array
 * @return void
 */
void print_statistics(unsigned char array[], unsigned int length);


/**
 * @brief Function that prints the array
 *
 * Given an array of data and length, this function that
 * prints the array to the screen
 *
 * @param unsigned char * array: Pointer to data array
 * @param unsigned char length: Length of data array
 * @return void
 */
void print_array(unsigned char * array, unsigned int length);


/**
 * @brief Function that find the median value
 *
 * Given an array of data and length, this function that
 * find the median value of an array
 *
 * @param unsigned char array[]: Data array
 * @param unsigned int length: Length of data array
 * @return unsigned int: Return the median value
 */
unsigned char find_median(unsigned char array[], unsigned int length);


/**
 * @brief Function that find the mean value
 *
 * Given an array of data and length, this function that
 * find the mean value of an array
 *
 * @param unsigned char array[]: Data array
 * @param unsigned int length: Length of data array
 * @return unsigned int: Return the mean value
 */
unsigned char find_mean(unsigned char array[], unsigned int length);


/**
 * @brief Function that find the maximum value
 *
 * Given an array of data and length, this function that
 * find the maximum value of an array
 *
 * @param unsigned char array[]: Data array
 * @param unsigned int length: Length of data array
 * @return unsigned char: Return the maximum value
 */
unsigned char find_maximum(unsigned char array[], unsigned int length);


/**
 * @brief Function that find the minimum value
 *
 * Given an array of data and length, this function that
 * find the minimum value of an array
 *
 * @param unsigned char array[]: Data array
 * @param unsigned int length: Length of data array
 * @return unsigned char: Return the minimum value
 */
unsigned char find_minimum(unsigned char array[], unsigned int length);


/**
 * @brief Function that sorts array descending
 *
 * Given an array of data and length, this function that
 * sorts the array from largest to smallest
 *
 * @param unsigned char array[]: Data array
 * @param unsigned char length: Length of data array
 * @return void
 */
void sort_array(unsigned char array[], unsigned int length);
#endif /* __STATS_H__ */
