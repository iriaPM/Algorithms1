
//selection sort


#include <stdio.h>

//size of array 
#define SIZE 8


void selectionSort(int A[], int N);


int main()
{

    int A[] = {5,6,4,1,8,7,2,3};
    int N = SIZE;
    int i;

   
    selectionSort(A, N);

  
  
    //loop to print ordered array 
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);

    } // end for

    printf("\n");

    return 0;
} // end main


void selectionSort(int A[], int N)
{

    int i, j, min,temp;
    int count = 0 ;


    //initialisation
    for (i = 0; i < N-1; i++)
    {
        min = i;
        
        //find min number
        for(j= i+1; j<N; j++)
        {
            if (A[j]< A[min])
            {
                min = j;
            }//end if 

            count= count+1;
        }//end for inner

        temp = A[min];
        A[min]= A[i];
        A[i]= temp;
       
    }//end for outer 

    printf("\ncount: %d \n",count);

}//end function