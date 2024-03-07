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

void printArray(const int *array, int len); // Print array to standard output

void bubbleSort(int *array, int len); // Bubble Sort Algorithm, tracks number of times 7 and 13 are swapped

void selectionSort(int *array, int len); // Selection Sort Algorithm, tracks number of times 10 and 20 are swapped

void swap(int *array, int one, int two); // Swaps the items at indexes one and two of array

// MAIN FUNCTION
int main() {
    // Print Arrays before Sorting
    printf("\nUnsorted:\n");
    printArray(array1, ARRAY_SIZE);
    printArray(array2, ARRAY_SIZE);

    // Sort Arrays and Compute Number of Swaps
    bubbleSort(array1, ARRAY_SIZE);
    selectionSort(array2, ARRAY_SIZE);

    // Print Arrays after Sorting
    printf("\nSorted:\n");
    printArray(array1, ARRAY_SIZE);
    printArray(array2, ARRAY_SIZE);

    // Print Program Output
    printf("\nBubble Sort:\n\t7:\t%d Swaps\n\t13:\t%d Swaps\n", bubble7, bubble13); // Bubble Sort Stats
    printf("\nSelection Sort:\n\t10:\t%d Swaps\n\t20:\t%d Swaps\n", select10, select20); // Selection Sort Stats

    // Successful Exit
    return 0;
}

// FUNCTION DEFINITIONS

void printArray(const int *array, int len) {
    printf("[");
    for (int index = 0; index < len; ++index) {
        printf("%d%s", array[index], ((index == len - 1) ? "]\n" : ", "));
    }
}

void bubbleSort(int *array, int len) {
    for (int end = len - 1; end > 0; --end) { // Repeat for each item in Array, removing last index in each iteration
        for (int index = 0; index < end; ++index) { // Repeat for remaining items of Array
            if (array[index] > array[index + 1]) { // Check if Array's current index is greater than the next index
                if (array[index] == 7 || array[index + 1] == 7) bubble7++; // Check if 7 is being swapped
                if (array[index] == 13 || array[index + 1] == 13) bubble13++; // Check if 13 is being swapped
                swap(array, index, index + 1); // Swap current and next index of array
            }
        }
    }
}

void selectionSort(int *array, int len) {

}

void swap(int *array, int one, int two) {
    int temp = array[two];
    array[two] = array[one];
    array[one] = temp;
}