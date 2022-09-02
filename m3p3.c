/* 	Author: Zack Milne
	Date: 	Feb 20, 2021
	Description: Print String Backwards with Title Casing.
*/
#include<stdio.h>

int main()              		// X              x '\0'  
{	         			// 1 2 3 4 5 ... 50  51  	
	char arrin[50];     		// 0 1 2 3 4 ... 49  50
	int i = 0;			// Index Reference with capital, lower and null	for i and i-1 for zero base
	int length = 0;
	
	printf("Please enter a string: ");
	scanf("%[^\n]s", arrin);
	
	for(i=0;arrin[i] != '\0';i++)                                   // get length
	{
		length++;	
	}
	printf("backwards is: ");
	if(arrin[i-1] >= 'a' && arrin[i-1] <= 'z')
		printf("%c", arrin[i-1] - 32);                  	//creates capital case for first letter
	else
		printf("%c", arrin[i-1]);
	
		
	for(i = i -2; i >= 0; i--)          					
	{
		if(arrin[i]==' '&& arrin[i-1]>='a' && arrin[i-1]<='z')	//if i is space and i-1 is the letter before it. 	
		{							// if value of i is >a and <z then -32 creates capital case for letter
			printf("%c", arrin[i]);										
			arrin[i-1] = arrin[i-1] -32; 
		}
		else if(arrin[i]>='A' && arrin[i]<='Z' && arrin[i+1]!=' ' && i-1!='\0') 
			printf("%c", arrin[i] + 32);                    //+32 creates lowercase
		else
			printf("%c", arrin[i]);
	}
	printf("\n");
	printf("Length is: %d\n", length);
	
	
}

