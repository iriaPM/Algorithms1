// #include <stdio.h>

// int main() {
//     int result = 552 / 4;
//     printf("%d", result);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int dividend = 552;
//     int divisor = 4;
//     int quotient = 0;


//     while (dividend>=divisor)
//     {
//         dividend = dividend - divisor;
//         quotient++;

//     }
//     printf("quotient is %d with remainder of %d\n",quotient,dividend);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int dividend = 15;
    int divisor = 2;
    int quotient = 0;
    int remainder = 0;


    while (dividend>=divisor)
    {
        //dividend = dividend - divisor;
        quotient++;
        remainder = dividend - divisor;
        dividend = remainder;

    }
    printf("\nquotient is %d with remainder of %d\n",quotient,remainder);

    return 0;
}