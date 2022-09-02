/* Author: Zack Milne
	Date: Feb 02, 2021
	Description: Print num in reversed binary.
*/

#include<stdio.h>

int main()
{
	int num = 0;
	int rem;
	
	while(num <= 65535)
	
	{
		printf("Please enter a number between 0 and 65535: ");
		scanf("%d", &num);
		
		if(num > 65535)
			break;
			
		for(int i=0; i<16; i++)
		{
			rem = num%2;
			num = num/2;
			
			printf(" %d ", rem);
				if(i == 3 || i == 7 || i == 11)
				{
				printf("\t");
				}
		}	
		printf(" \n ");
	}	
	return 0;	
}
