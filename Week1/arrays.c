#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 100

int array_sum(int array[]) {
    int sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        sum += array[i];
    }
    return sum;
}

int main(void) {

    // Practice Problem 1: Statically Allocated Array
    // Problem:
    // Write a C program that declares a statically allocated array of 100 integers. Initialize the array with values from 1 to 100 (i.e., array[0] = 1, array[1] = 2, ..., array[99] = 100). Then, create a function that calculates and returns the sum of all the elements in the array.
    // Requirements:
    // Define the array size using a constant (#define).
    // Use a function to calculate the sum.
    // Display the result of the sum in the main function.

    int numsArr[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) {
        numsArr[i] = i+1;
    }
    printf("Array Sum: %d\n", array_sum(numsArr));


    printf("============================================");

    // Practice Problem 2: Dynamically Allocated Array
    // Problem:
    // Write a C program that dynamically allocates an array of N integers (where N is a user input). The program should ask the user to input N integer values, store them in the dynamically allocated array, and then print the array.
    // Requirements:
    // Dynamically allocate memory for the array using malloc.
    // Prompt the user to enter values and store them in the array.
    // Print the elements of the array.
    // Free the allocated memory at the end.
    int *dynamicNumsArray = malloc(sizeof(int) * ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++) {
        dynamicNumsArray[i] = i * 8;
        printf("Current dynamicNumsArray[%d]: %d\n", i, dynamicNumsArray[i]);
    }

    free(dynamicNumsArray);
    dynamicNumsArray = NULL;
    printf("============================================");
    return 0;
}