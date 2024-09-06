

//insertion sort


#include <stdio.h>

//size of array 
#define SIZE 8


void insertionSort(int A[], int N);


int main()
{

    int A[] = {3,1,8,7,2,4,6,5};
    int N = SIZE;
    int i;

   
    insertionSort(A, N);

  
  
    //loop to print ordered array 
    for (i = 0; i < N; i++)
    {
        printf(" %d ", A[i]);

    } // end for

  

    return 0;
} // end main


void insertionSort(int A[], int N)
{

    int i, j, current;
    int count;

    //highest index on left side 
    for (i = 1; i < N; i++)
    {
        current = A[i];
        j = i;

        //find position of current num and swap 
        //put current number in correct position 
        //ascending ( > current)
        //descending (< current)
        while (j > 0 && A[j - 1] > current)
        {
            A[j] = A[j - 1];
            j = j - 1;
            count= count+1;
        }

        A[j] = current;

        //display  array
       // printf("\n%d\n", A[j]);
       
    }//end for
     printf(" \ncount :%d\n",count);

}//end function