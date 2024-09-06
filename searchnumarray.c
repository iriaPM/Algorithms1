
#include <stdio.h>

#define SIZE 6
int main()
{
    int A[SIZE] = {1, 2, 3, 5, 6, 8};
    int length = SIZE;
    int num;
    int number;
    int i = 1;

    printf("please enter a number:");
    scanf("%d",&num);

    while (i < length)
    {
       if (num == A[i])
       {
            number = num;
       }
       if(num !=A[i])
       {
         i++;
       }
       
    }
    printf("%d",number);
    return 0;
}
