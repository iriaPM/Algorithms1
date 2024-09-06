
#include <stdio.h>

#define SIZE 6
int main()
{
    int A[SIZE] = {2, 4, 3, 5, 6, 1};
    int length = SIZE;
    int max = A[0];
    int min = A[0];
    int i = 1;
    while (i < length)
    {
        if (max < A[i])
        {
            max = A[i];
           // printf("%d", A[i]);
        }
        if (min > A[i])
        {
            min = A[i];
        }
        i++;
    }
    printf("max: %d\nmin: %d", max,min);

    return 0;
}
