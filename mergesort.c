#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void merge_sort(int, int, int[]  );

int main()
{

    int numlist[SIZE]= {0};

    printf("please enter %d integers:", SIZE);
    
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d",&numlist[i]);
    }//end for 

    merge_sort( 0,SIZE-1,numlist);

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ",numlist[i]);
    }//end for 
    
    
    return 0;
}//END MAIN

void merge_sort(int low, int high, int A[])
{
    if (low<high)
    {
        int mid = (low + high)/ 2;
        merge_sort(low, mid, A);
        merge_sort(mid +1, high,A);
    

        int left = low;
        int right = mid +1;
        int tempA[SIZE];
        int ptrtemp = 0;

        while (left <= mid && right <= high)
        {
            if (A[left] <= A[right])
            {
                tempA[ptrtemp++] = A[left++];

            }//end if 
            else
            {
                tempA[ptrtemp++] = A[right++];

            }//end else 
        }//end while
        
        while (left <= mid)
        {
            tempA[ptrtemp++] = A[left++];

        }//end while

        while (right <= high)
        {
            tempA[ptrtemp++] = A[right++];
        }//end while

        for (int i = low; i <= high; i++)
        {
            A[i] = tempA[i- low];
        }//end for 
    }//END IF 
}//END MERGE