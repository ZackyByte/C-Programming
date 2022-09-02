/* Author: Zack Milne
	Date: Feb 02, 2021
	Description: Print pattern
*/
#include<stdio.h>

int main()

{
	int rows; 
	int col;
	
			for(rows = 0; rows <= 4; rows++)
			{
				for(col = 0; col <= 4; col++)
				{
					if((rows % 2 == 1 && (col == 0 || col == 2 || col == 4)))
						printf(" ");
				
						else if(rows == 2 && (col == 1 || col ==3))
					
							printf(" ");
					
							else
								printf("*");
						
				}
				printf("\n");
			
			}
		return 0;
}				
