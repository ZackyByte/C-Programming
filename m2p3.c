/* Author: Zack Milne
	Date: Feb 02, 2021
	Description: Sum and average
*/

#include<stdio.h>

int main()	
{ 
	int count = 0;
	int sum   = 0;
	int input = 0;
		float avg = 0; 
	
	
	for(count = 1; count <= 10; count++)
		{
		printf("Please enter number %d: ", count);
		scanf("%d", &input);
		sum = sum + input;
		}	
	
	printf("The sum is: %d\n", sum);
	
			if(sum % 2 == 0)
				{
				printf("The number is even steven\n");
				}
					else
						{	
						printf("The number is an oddball\n");
						}
	
	avg = (float) sum / 10;
	printf("The average is: %.2f\n", avg);
	 
	return 0;
}		

