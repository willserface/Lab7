/// Will Serface - COP3502C.0025 Lab Assignment 7

// PREPROCESSOR DIRECTIVES
#include <stdio.h> // Standard I/O Library

#define ARRAY_SIZE 9 // Constant for Array Size

// GLOBAL VARIABLES

int array1[ARRAY_SIZE] = {97, 16, 45, 63, 13, 22, 7, 58, 72}; // Provided in Lab Instructions
int array2[ARRAY_SIZE] = {90, 80, 70, 60, 50, 40, 30, 20, 10}; // Provided in Lab Instructions

int bubble7 = 0, // Tracks number of times 7 is swapped in bubble sort
bubble13 = 0, // Tracks number of times 13 is swapped in bubble sort
select10 = 0, // Tracks number of times 10 is swapped in selection sort
select20 = 0; // Tracks number of times 20 is swapped in selection sort

// FUNCTION DECLARATIONS

// MAIN FUNCTION
int main() {
    // Sort Arrays and Compute Number of Swaps
    bubbleSort(array1, ARRAY_SIZE);
    selectionSort(array2, ARRAY_SIZE);

    // Print Program Output
    printf("Bubble Sort:\n\t7:\t%d Swaps\n\t13:\t%d Swaps\n", bubble7, bubble13); // Bubble Sort Stats
    printf("Selection Sort:\n\t10:\t%d Swaps\n\t20:\t%d Swaps\n", select10, select20); // Selection Sort Stats

    // Successful Exit
    return 0;
}

// FUNCTION DEFINITIONS

