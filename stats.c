/**
 * @file stats.c
 * @brief Implementation file for statistical analysis
 *
 * Author: Nandakumar
 * Date: 17-April-2025
 */

#include <stdio.h>
#include "stats.h"

void print_statistics(unsigned char *array, unsigned int length) {
    // TODO: Print min, max, mean, median
}

void print_array(unsigned char *array, unsigned int length) {
    // TODO: Print array elements
}

unsigned char find_median(unsigned char *array, unsigned int length) {
    // TODO: Find median
    return 0;
}

unsigned char find_mean(unsigned char *array, unsigned int length) {
    // TODO: Find mean
    return 0;
}

unsigned char find_maximum(unsigned char *array, unsigned int length) {
    // TODO: Find max
    return 0;
}

unsigned char find_minimum(unsigned char *array, unsigned int length) {
    // TODO: Find min
    return 0;
}

void sort_array(unsigned char *array, unsigned int length) {
    // TODO: Sort array
}

int main() {
    unsigned char test[40] = {
        34,201,190,154,8,194,2,6,114,88,45,76,123,87,25,23,200,122,150,90,
        92,87,177,244,201,6,12,60,8,2,5,67,7,87,250,230,99,3,100,90
    };

    print_array(test, 40);
    print_statistics(test, 40);

    return 0;
}
