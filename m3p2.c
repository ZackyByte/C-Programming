/* 	Author: Zack Milne
	Date: 	Feb 20, 2021
	Description: Print Reverse binary with nibbles removed.
*/

#include<stdio.h>
#define SIZE 16 
int main()

{	
	int num2;   //switch to print 8 bits for smaller number
	int num;
	int numArr[SIZE];
	
	printf("Enter a number less than 65,536 to convert to binary and hex: \n");
	scanf(" %d", &num);	
	for(int i=0; num >= 65536; i++)           		//loop til valid input.
	{
		printf("You have entered an invalid number. Please enter a number less than 65,536: \n");
		scanf(" %d", &num);
	}
	printf("hexadecimal value = %#X\n", num);
	num2 = num;
	for(int i=0; i < SIZE; i++)
	{
		numArr[i] = num % 2;				//algorithm for binary values, the order will be backwards
		num /= 2;
	}
		
	int binval[SIZE];
	for(int i=0; i<SIZE; i++)				// reverse from first for loop
		binval[i] = numArr[SIZE-1-i];			// minus 1 for index vs element, minus i to reverse the num array to binval (storing the value backwards fixes the 
								// reverse order from lines 14 - 17) SIZE - 1 - 0 is the 15th index = 16th element (index is 0 based) i++ will increment 	
								// on each loop, making our binval array the reverse of our num array and allow us to print binval values in the correct order.
	
	
		

	if(num2>255)						//if input is greater than 255 remove extra nibbles 
	{
		int index = 0;						//removing nibbles (0's making up the unused bits for our binval values) 
		int count = 0;
		for(int i = 0; i<SIZE; i++)				// reset count every 4 0's (8 bits minimum while(i >= 7 || count == 4) count = 0;
		{
			if(binval[i] == 1)
			{
				index = i - count;			
				break;
			}
		count++;						
		if(count == 4)					
			count = 0;
		
		}
	
	printf("binary = ");
	for(int i=index; i<SIZE; i++)
		{
			if(i % 4 == 0)					
			printf(" ");
			printf("%d", binval[i]);
		}	
	printf("\n");
	}
	
	
	if(num2<=255)							//if inputs is less than 255 print 8 bits at minimum as per requirement 1 for problem 2
	{
		int index = 0;						
		int count = 0;
		for(int i = 0; i<SIZE; i++)
		{
			if(binval[i] == 1)
			{
				index = i - count;			
				break;
			}
		count++;						
		if(count == 8)					
			count = 0;
		
		}
	
	printf("binary = ");				
	for(int i=index; i<SIZE; i++)
		{
			if(i % 4 == 0)					
			printf(" ");					// print space every 4 characters
			printf("%d", binval[i]);
		}	
	printf("\n");
	}
}
	
