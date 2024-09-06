
#include <stdio.h>

#define SIZE 7
int main()
{
    int A[SIZE] = {1, 2, 3, 5,5, 6, 8};
    int length = SIZE;
    int num;
    int number;
    int i = 1;

    printf("please enter a number:");
    scanf("%d",&num);

    while (i < length)
    {
       
       if(num !=A[i])
       {
         i++;
       }
       if (num == A[i])
       {
           number =i;
          
       }

    i++;
    }
    printf("card number %d",number);

    return 0;
}
