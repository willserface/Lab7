/// Will Serface - COP3502C.0025 Lab Assignment 7

// PREPROCESSOR DIRECTIVES
#include <stdio.h> // Standard I/O Library

#define ARRAY_SIZE 9 // Constant for Array Size

// GLOBAL VARIABLES

int array1b[ARRAY_SIZE] = {97, 16, 45, 63, 13, 22, 7, 58, 72}; // Provided in Lab Instructions
int array1s[ARRAY_SIZE] = {97, 16, 45, 63, 13, 22, 7, 58, 72}; // Provided in Lab Instructions
int array2b[ARRAY_SIZE] = {90, 80, 70, 60, 50, 40, 30, 20, 10}; // Provided in Lab Instructions
int array2s[ARRAY_SIZE] = {90, 80, 70, 60, 50, 40, 30, 20, 10}; // Provided in Lab Instructions

// FUNCTION DECLARATIONS

void printArray(const int *array, int len); // Print array to standard output

void bubbleSort(int *array, int len); // Bubble Sort Algorithm, tracks number of times 7 and 13 are swapped

void selectionSort(int *array, int len); // Selection Sort Algorithm, tracks number of times 10 and 20 are swapped

// MAIN FUNCTION
int main() {
    // Print Arrays before Sorting
    printf("Unsorted:\nArray 1: ");
    printArray(array1b, ARRAY_SIZE);
    printf("Array 2: ");
    printArray(array2b, ARRAY_SIZE);

    // Sort Arrays and Compute Number of Swaps
    bubbleSort(array1b, ARRAY_SIZE);
    bubbleSort(array2b, ARRAY_SIZE);
    selectionSort(array1s, ARRAY_SIZE);
    selectionSort(array2s, ARRAY_SIZE);

    // Print Arrays after Sorting
    printf("\nSorted:\nArray 1: ");
    printArray(array1s, ARRAY_SIZE);
    printf("Array 2: ");
    printArray(array2s, ARRAY_SIZE);

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
    int bubble07 = 0, // Tracks number of times 7 is swapped in bubble sort
    bubble13 = 0, // Tracks number of times 13 is swapped in bubble sort
    bubble16 = 0, // Tracks number of times 16 is swapped in bubble sort
    bubble22 = 0, // Tracks number of times 22 is swapped in bubble sort
    bubble45 = 0, // Tracks number of times 45 is swapped in bubble sort
    bubble58 = 0, // Tracks number of times 58 is swapped in bubble sort
    bubble63 = 0, // Tracks number of times 63 is swapped in bubble sort
    bubble72 = 0, // Tracks number of times 72 is swapped in bubble sort
    bubble97 = 0, // Tracks number of times 97 is swapped in bubble sort
    bubble10 = 0, // Tracks number of times 7 is swapped in bubble sort
    bubble20 = 0, // Tracks number of times 13 is swapped in bubble sort
    bubble30 = 0, // Tracks number of times 16 is swapped in bubble sort
    bubble40 = 0, // Tracks number of times 22 is swapped in bubble sort
    bubble50 = 0, // Tracks number of times 45 is swapped in bubble sort
    bubble60 = 0, // Tracks number of times 58 is swapped in bubble sort
    bubble70 = 0, // Tracks number of times 63 is swapped in bubble sort
    bubble80 = 0, // Tracks number of times 72 is swapped in bubble sort
    bubble90 = 0, // Tracks number of times 97 is swapped in bubble sort
    bubbleSum = 0; // Tracks number of times any item is swapped in bubble sort


    for (int end = len - 1; end > 0; --end) { // Repeat for each item in Array, removing last index in each iteration
        for (int index = 0; index < end; ++index) { // Repeat for remaining items of Array
            if (array[index] > array[index + 1]) { // Check if Array's current index is greater than the next index
                switch (array[index]) {
                    case 7:
                        bubble07++;
                        break;
                    case 13:
                        bubble13++;
                        break;
                    case 16:
                        bubble16++;
                        break;
                    case 22:
                        bubble22++;
                        break;
                    case 45:
                        bubble45++;
                        break;
                    case 58:
                        bubble58++;
                        break;
                    case 63:
                        bubble63++;
                        break;
                    case 72:
                        bubble72++;
                        break;
                    case 97:
                        bubble97++;
                        break;
                    case 10:
                        bubble10++;
                        break;
                    case 20:
                        bubble20++;
                        break;
                    case 30:
                        bubble30++;
                        break;
                    case 40:
                        bubble40++;
                        break;
                    case 50:
                        bubble50++;
                        break;
                    case 60:
                        bubble60++;
                        break;
                    case 70:
                        bubble70++;
                        break;
                    case 80:
                        bubble80++;
                        break;
                    case 90:
                        bubble90++;
                        break;
                }
                switch (array[index + 1]) {
                    case 7:
                        bubble07++;
                        break;
                    case 13:
                        bubble13++;
                        break;
                    case 16:
                        bubble16++;
                        break;
                    case 22:
                        bubble22++;
                        break;
                    case 45:
                        bubble45++;
                        break;
                    case 58:
                        bubble58++;
                        break;
                    case 63:
                        bubble63++;
                        break;
                    case 72:
                        bubble72++;
                        break;
                    case 97:
                        bubble97++;
                        break;
                    case 10:
                        bubble10++;
                        break;
                    case 20:
                        bubble20++;
                        break;
                    case 30:
                        bubble30++;
                        break;
                    case 40:
                        bubble40++;
                        break;
                    case 50:
                        bubble50++;
                        break;
                    case 60:
                        bubble60++;
                        break;
                    case 70:
                        bubble70++;
                        break;
                    case 80:
                        bubble80++;
                        break;
                    case 90:
                        bubble90++;
                        break;
                }
                int temp = array[index + 1];
                array[index + 1] = array[index];
                array[index] = temp;
                bubbleSum++;
            }
        }
    }
    // Print Output
    printf("\nArray %d - Bubble Sort:\n", (bubble07 ? 1 : 2)); // Bubble Sort Header
    if (bubble07) {
        printf("\t7:\t%d Swaps\n", bubble07); // Swaps of 7
        printf("\t13:\t%d Swaps\n", bubble13); // Swaps of 13
        printf("\t16:\t%d Swaps\n", bubble16); // Swaps of 16
        printf("\t22:\t%d Swaps\n", bubble22); // Swaps of 22
        printf("\t45:\t%d Swaps\n", bubble45); // Swaps of 45
        printf("\t58:\t%d Swaps\n", bubble58); // Swaps of 58
        printf("\t63:\t%d Swaps\n", bubble63); // Swaps of 63
        printf("\t72:\t%d Swaps\n", bubble72); // Swaps of 72
        printf("\t97:\t%d Swaps\n", bubble97); // Swaps of 97
    } else {
        printf("\t10:\t%d Swaps\n", bubble10); // Swaps of 10
        printf("\t20:\t%d Swaps\n", bubble20); // Swaps of 20
        printf("\t30:\t%d Swaps\n", bubble30); // Swaps of 30
        printf("\t40:\t%d Swaps\n", bubble40); // Swaps of 40
        printf("\t50:\t%d Swaps\n", bubble50); // Swaps of 50
        printf("\t60:\t%d Swaps\n", bubble60); // Swaps of 60
        printf("\t70:\t%d Swaps\n", bubble70); // Swaps of 70
        printf("\t80:\t%d Swaps\n", bubble80); // Swaps of 80
        printf("\t90:\t%d Swaps\n", bubble90); // Swaps of 90
    }
    printf("Total:\t%d Swaps\n", bubbleSum); // Total Bubble Sort Swaps
}

void selectionSort(int *array, int len) {
    int select07 = 0, // Tracks number of times 7 is swapped in bubble sort
    select13 = 0, // Tracks number of times 13 is swapped in bubble sort
    select16 = 0, // Tracks number of times 16 is swapped in bubble sort
    select22 = 0, // Tracks number of times 22 is swapped in bubble sort
    select45 = 0, // Tracks number of times 45 is swapped in bubble sort
    select58 = 0, // Tracks number of times 58 is swapped in bubble sort
    select63 = 0, // Tracks number of times 63 is swapped in bubble sort
    select72 = 0, // Tracks number of times 72 is swapped in bubble sort
    select97 = 0, // Tracks number of times 97 is swapped in bubble sort
    select10 = 0, // Tracks number of times 10 is swapped in selection sort
    select20 = 0, // Tracks number of times 20 is swapped in selection sort
    select30 = 0, // Tracks number of times 30 is swapped in selection sort
    select40 = 0, // Tracks number of times 40 is swapped in selection sort
    select50 = 0, // Tracks number of times 50 is swapped in selection sort
    select60 = 0, // Tracks number of times 60 is swapped in selection sort
    select70 = 0, // Tracks number of times 70 is swapped in selection sort
    select80 = 0, // Tracks number of times 80 is swapped in selection sort
    select90 = 0, // Tracks number of times 90 is swapped in selection sort
    selectSum = 0; // Tracks number of times any item is swapped in selection sort

    for (int start = 0; start < len - 1; ++start) { // Loop through Array, removing first index each iteration
        int minIndex = start; // Assume first valid index is minimum
        for (int index = start + 1; index < len; ++index) { // Repeat for remaining items of Array
            if (array[index] < array[minIndex]) minIndex = index; // Update minIndex if lower value found
        }
        if (start != minIndex) { // Check if swapSelect is needed
            switch (array[start]) {
                case 7:
                    select07++;
                    break;
                case 13:
                    select13++;
                    break;
                case 16:
                    select16++;
                    break;
                case 22:
                    select22++;
                    break;
                case 45:
                    select45++;
                    break;
                case 58:
                    select58++;
                    break;
                case 63:
                    select63++;
                    break;
                case 72:
                    select72++;
                    break;
                case 97:
                    select97++;
                    break;
                case 10:
                    select10++;
                    break;
                case 20:
                    select20++;
                    break;
                case 30:
                    select30++;
                    break;
                case 40:
                    select40++;
                    break;
                case 50:
                    select50++;
                    break;
                case 60:
                    select60++;
                    break;
                case 70:
                    select70++;
                    break;
                case 80:
                    select80++;
                    break;
                case 90:
                    select90++;
                    break;
            }
            switch (array[minIndex]) {
                case 7:
                    select07++;
                    break;
                case 13:
                    select13++;
                    break;
                case 16:
                    select16++;
                    break;
                case 22:
                    select22++;
                    break;
                case 45:
                    select45++;
                    break;
                case 58:
                    select58++;
                    break;
                case 63:
                    select63++;
                    break;
                case 72:
                    select72++;
                    break;
                case 97:
                    select97++;
                    break;
                case 10:
                    select10++;
                    break;
                case 20:
                    select20++;
                    break;
                case 30:
                    select30++;
                    break;
                case 40:
                    select40++;
                    break;
                case 50:
                    select50++;
                    break;
                case 60:
                    select60++;
                    break;
                case 70:
                    select70++;
                    break;
                case 80:
                    select80++;
                    break;
                case 90:
                    select90++;
                    break;
            }
            int temp = array[minIndex];
            array[minIndex] = array[start];
            array[start] = temp;
            selectSum++;
        }
    }

    // Print Output
    printf("\nArray %d - Selection Sort:\n", (select07 ? 1 : 2)); // Selection Sort Header
    if (select07) {
        printf("\t7:\t%d Swaps\n", select07); // Swaps of 7
        printf("\t13:\t%d Swaps\n", select13); // Swaps of 13
        printf("\t16:\t%d Swaps\n", select16); // Swaps of 16
        printf("\t22:\t%d Swaps\n", select22); // Swaps of 22
        printf("\t45:\t%d Swaps\n", select45); // Swaps of 45
        printf("\t58:\t%d Swaps\n", select58); // Swaps of 58
        printf("\t63:\t%d Swaps\n", select63); // Swaps of 63
        printf("\t72:\t%d Swaps\n", select72); // Swaps of 72
        printf("\t97:\t%d Swaps\n", select97); // Swaps of 97
    } else {
        printf("\t10:\t%d Swaps\n", select10); // Swaps of 10
        printf("\t20:\t%d Swaps\n", select20); // Swaps of 20
        printf("\t30:\t%d Swaps\n", select30); // Swaps of 30
        printf("\t40:\t%d Swaps\n", select40); // Swaps of 40
        printf("\t50:\t%d Swaps\n", select50); // Swaps of 50
        printf("\t60:\t%d Swaps\n", select60); // Swaps of 60
        printf("\t70:\t%d Swaps\n", select70); // Swaps of 70
        printf("\t80:\t%d Swaps\n", select80); // Swaps of 80
        printf("\t90:\t%d Swaps\n", select90); // Swaps of 90
    }
    printf("Total:\t%d Swaps\n", selectSum); // Total Selection Sort Swaps
}