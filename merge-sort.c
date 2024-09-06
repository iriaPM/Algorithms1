/**
 * @file merge-sort.c
 * @author Artem Mikheev (D22124651@mytudublin.ie)
 * 
 * @brief This program askes a user to enter several numbers and sorts them,
 *        using "merge sort" algorithm.
 * 
 * @version 1.0
 * @date 2023-02-17
 * 
 */


#include <stdio.h>
#include <stdlib.h>


// Function signatures
void merge_sort(int, int, int *);


int main() {

    // Declare variables

    int *arr;
    int arr_size;


    // Interact with a user

    // Interrogate a user untill they provide adequate data

    do {

        // Prompt the number of numbers a user wants to enter

        printf("How many numbers would you like to enter?\n");
        scanf("%d", &arr_size);

        // Try to allocate enough memory to store the user's input

        arr = calloc(arr_size, sizeof(int));

        // Check if the memory allocation went successfully

        if (arr == NULL) {

            // Memory allocation failed

            // Inform a user about failer

            printf("The program cannot store so many numbers, please try again\n");

        } // end if

    } while (arr == NULL);

    // Prompt the numbers themselves

    printf("Enter %d numbers\n", arr_size);

    // Read in the numbers entered

    for (int i = 0; i < arr_size; i++) {

        scanf("%d", arr + i);

    } // end for


    // Sort the array

    merge_sort(0, arr_size, arr);


    // Display the result

    printf("Here is the sorted array\n");

    // Display all the elements of the array

    for (int i = 0; i < arr_size; i++) {

        // Check if it is the last element to display
        // and format the output accordingly

        if (i == arr_size - 1) {

            // This is the last element to display

            printf("%d\n", *(arr + i));

        } else {

            // This is not the last element to display

            printf("%d, ", *(arr + i));

        } // end if

    } // end for


    // Release the allocated memory

    free(arr);

    return 0;

} // end main()


// This function sorts an array of numbers in non-descending order
//
void merge_sort(int lower_bound, int upper_bound, int *arr) {

    // Deal with the base case.
    // The base case is when there is only one element and
    // the array can be considered sorted.

    if (upper_bound - lower_bound == 1) {

        return;

    } // end if


    // Declare variables

    // This is the middle of current array

    int middle = (lower_bound + upper_bound) / 2;

    // Auxilary arrays

    int arr1_size = middle - lower_bound;
    int arr2_size = upper_bound - middle;

    int *arr1;
    int *arr2;

    // Iterators

    int i;
    int j;
    int k;


    // Sort two halves of the current array

    merge_sort(lower_bound, middle, arr);
    merge_sort(middle, upper_bound, arr);

    
    // Allocate memory for arrays

    arr1 = calloc(arr1_size, sizeof(int));
    arr2 = calloc(arr2_size, sizeof(int));


    // Fill out auxilary arrays

    for (i = lower_bound; i < middle; i++) {

        *(arr1 + (i - lower_bound)) = *(arr + i);

    } // end for

    for (i = middle; i < upper_bound; i++) {

        *(arr2 + (i - middle)) = *(arr + i);

    } // end for


    // Merge auxilary arrays

    // i - first array counter
    // j - second array counter
    // k - main (result) array counter

    i = 0;
    j = 0;
    k = lower_bound;

    while (i < arr1_size || j < arr2_size) {

        // If the first auxilary array is already run off elements,
        // then put elements from the second array and go to
        // the beginning of the loop

        if (i == arr1_size) {

            *(arr + k) = *(arr2 + j);
            j = j + 1;
            k = k + 1;

            continue;

        } // end if


        // If the second auxilary array is already run off elements,
        // then put elements from the first array and go to
        // the beginning of the loop

        if (j == arr2_size) {

            *(arr + k) = *(arr1 + i);
            i = i + 1;
            k = k + 1;

            continue;

        } // end if


        // Compare 2 current elements, choose the smallest one and put
        // it in the main array

        if (*(arr1 + i) < *(arr2 + j)) {

            *(arr + k) = *(arr1 + i);
            i = i + 1;

        } else {

            *(arr + k) = *(arr2 + j);
            j = j + 1;

        } // end if

        k = k + 1;

    } // end while


    // At this stage the part of the main array from lower bound to upper bound
    // is sorted


    // Release the allocated memory

    free(arr1);
    free(arr2);


    return;

} // end merge_sort()