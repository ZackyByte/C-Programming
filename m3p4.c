/* 	Author: Zack Milne
	Date: 	Feb 20, 2021
	Description: Printing address and hexadecimal from arrays
*/



#include<stdio.h>

int main()
{
	int intarr[6];
	char chararr[7];
	
	for(int i=0;i<=5;i++)
	{
		printf("Please enter an integer number %d: \n", i+1);
		scanf("%d", &intarr[i]);
	}
	{
		printf("Please enter a 6 character string: \n");
		scanf(" %s", chararr);
	}
	
	printf("***INTEGER ARRAY***\n");
	
	for(int i=0;i<=5;i++)
	{
		printf("Element %d is at address %p and the hex value is: %#X\n", i+1, &intarr[i], intarr[i]);
	}
	
	printf("***CHARACTER ARRAY***\n");
	
	for(int i=0;i<=5;i++)
	{
		printf("Element %d is at address %p and the hex value is %#X\n", i+1, &chararr[i], chararr[i]);
	}
}
	
