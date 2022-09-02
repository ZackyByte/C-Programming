/* Author: Zack Milne
	Date: Feb 02, 2021
	Description: Print pattern
*/

#include<stdio.h>

int main()
{	
		{ 
		printf("\n");
		}
	for(int row = 1; row <= 6; row++)
	{
	printf("\t");	
					
		for(int	col = 1; col <= 8; col++)
			{
			if(col <= 8, row == 1|| row == 5)
				{
				printf("*");
				}	
				else if((row ==2 || row == 4) && col == 1)
					{
					printf(" ");
					}	
					else if((row == 2 || row == 4) 	&& col <= 7)
						{
						printf("*");
		   				}
		    			else if (row == 3 && col <= 3)
		   				 	{
		    				printf(" ");
		   					}
		    					else if(row == 3 && (col >= 4, col <= 5))
		  					  		{
		    						printf("*");
		  					  		}
		  					
			}
	printf("\n");
	}

return 0;
}
