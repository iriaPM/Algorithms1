// iria parada murciego 
// q1 lab2 algorithms 
// 13/2/23
// tree



#include <stdio.h>



void drawtree( int stars)
{

    int spaces  =  stars - 1;
    int numstars =  1;

   

    for ( int i = 0; i < stars; i++)
    {
        for ( int j = 0; j < spaces; j++)
        {
            //print spaces 
            printf(" ") ;  

        }//end inner for
        for ( int z = 0; z < numstars; z++)
        {
            printf("*");

        }//end 2 inner for 

        
        spaces --;
        numstars +=2;

        printf("\n");
        
        
    }//end outer for
    

}//drawtree end 


int main()
{
    int size;

    printf("enter size of the tree:\n ");
    scanf("%d", &size);

    drawtree(size); 

    return 0;

}//end main


