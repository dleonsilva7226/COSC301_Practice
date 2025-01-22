#include <stdio.h>
#include <stdlib.h>

// Problem 4
void printArr(int size, int* arr) {
    for (int i = 0; i < size; i++) {
        arr[i] = i * i;
        printf("arr[%d]: %d\n", i, arr[i]);
    }
}

int main(void) {

    // Problem 1: Dynamic Memory Allocation for an Integer
    // Write a program that:
    // Dynamically allocates memory for an integer variable using malloc().
    // Initializes the integer with a value of 10.
    // Prints the value of the integer.
    // Frees the memory and sets the pointer to NULL after use.
    int *num = malloc(sizeof(int));
    *num = 10;
    printf("Num: %d\n", *num);
    free(num);
    num = NULL;
    printf("================================================================\n");
    // Problem 2: Dynamic Memory Allocation for an Array of Integers
    // Write a program that:
    // Dynamically allocates memory for an array of 5 integers using malloc().
    // Initializes each element in the array with the value of its index (i.e., arr[i] = i).
    // Prints all the elements in the array.
    // Frees the memory and sets the pointer to NULL after use.
    int *numsArr = malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++) {
        numsArr[i] = i;
        printf("Index %d = %d\n", i, numsArr[i]);
    }
    free(numsArr);
    numsArr = NULL;


    printf("================================================================\n");
    // Problem 3: Memory Allocation for a String
    // Write a program that:
    // Dynamically allocates memory for a string of size 100 using malloc().
    // Prompts the user to input a string and stores the input in the dynamically allocated memory.
    // Prints the entered string.
    // Frees the memory and sets the pointer to NULL after use

    char *word = malloc(sizeof(char) * 100);
    // scanf("%s", word);
    printf("String = %s\n", word);
    free(word);
    word = NULL;


    printf("================================================================\n");
    // Problem 4: Function that Takes a Dynamically Allocated Array
    // Write a program that:
    // Dynamically allocates memory for an array of n integers where n is provided by the user.
    // The program should pass the array to a function that:
    // Initializes each element in the array to be the square of its index.
    // Prints the contents of the array.
    // In the main function, free the dynamically allocated memory and set the pointer to NULL.
    int n = 9;
    int *secondNumsArr = malloc(sizeof(int) * n);

    printArr(n, secondNumsArr);
    free(secondNumsArr);
    secondNumsArr = NULL;

    printf("================================================================\n");


    return 0;
}