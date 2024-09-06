#include <stdio.h>

#define SIZE 6

int binary_search(int A[], int n, int searchkey);

int main()
{

    int A[SIZE] ={1, 2, 3, 5, 6, 8};
    int searchkey, i;

    printf("searchkey:");
    scanf("%d",&searchkey);

    i = binary_search(A,SIZE,searchkey);
    if( i != -1)
    {
        printf("%d",i);
    }
    else 
    {
        printf("not found");
    }

    return 0;
}

int binary_search(int A[],int n, int searchkey)
{
    int low =0;
    int high= n-1;
    int middle;

    while (low <= high)
    {
        middle =(low +high)/2;

        if (searchkey == A[middle])
        {
            return middle;
        }
        else if (searchkey < A[middle])
        {
            high = middle -1;
        }
        else if (searchkey > A[middle])
        {
            low = middle +1 ;
        }
    }
    return -1;
}