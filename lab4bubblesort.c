//Bubble sort


#include <stdio.h>

//size of array 
#define SIZE 4


void BubbleSort(int A[], int N);


int main()
{

    int A[] = {4, 6, 1, 2};
    int N = SIZE;
    int i;

   
    BubbleSort(A, N);

  
  
    //loop to print ordered array 
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);

    } // end for

    printf("\n");

    return 0;
} // end main


void BubbleSort(int A[], int N)
{

    int i, j, min,temp;
    int count = 0 ;


    //initialisation
    for (i = 0; i < N-1; i++)
    {
        min = i;
        
        //find min number
        for(j= 0; j<N; j++)
        {
            if (A[j]< A[j+1])
            {
                temp = A[j];
                A[j]=A[j+1];
                A[j+1]=temp;

            }//end if 

            count= count+1;
        }//end for inner

       
    }//end for outer 

    printf("\ncount: %d \n",count);

}//end function