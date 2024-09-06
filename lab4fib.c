/*
#include <stdio.h>

int main()
{
	int option = 0;
	int num1 = 1;
	int num2 = 0;
	int temp = 0;
    int i = 0;
	int term_number = 0;


	
	do
	{
		
		printf("\n\nThe Fibonacci Series program\n\n");
		printf("Enter your selection\n\n");
		printf("1. Enter the number of terms to display in the sequence.\n");
		printf("2. End Program\n");
		
		scanf("%d", &option);
		
		
		while(getchar() != '\n');
		
		
		if (option == 1)
		{
			
			
			num1 = 1;
			num2 = 0;
			temp = 0;

			
			printf("\nEnter your upper range number in the sequence\n");
    		scanf("%d", &term_number);
    		
    		
    		printf("0, ");
    
    		for(i = 0; i < term_number; i++)
			{
				temp = num1 + num2;
				num1 = num2;
				num2 = temp;

				// the value of variable temp displays the next number in the sequence
				//
				if (i != term_number -1)
				{
					// Display a comma after the sequence term being displayed as there is another number
					// to follow
					printf("%d, ", temp);
				}
				else
				{
					// Display the last number in the sequence up to n terms WITHOUT a comma following it
					printf("%d", temp);
				}
				
				//printf("%d, ", temp);

			} // end for
			
		} // end if option = 1
		
		
		if (option == 2)
		{
			printf("\n\n Program Ended");
			
		} // end if option = 2
		
	} // end do
	while (option != 2);
	
	return 0;

} // end main
*/