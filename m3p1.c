/* 	Author: Zack Milne
	Date: 	Feb 20, 2021
	Description: Title Case vs Uppercase for a string
*/


#include<stdio.h>
 
int main()
{
	int i;
    	char choice;
	char arrchar[40];
		
	
	printf("Please choose 'a' for titlecase or 'b' for uppercase\n");
	scanf("%c", &choice);
	
	
	printf("Please enter your string\n");
	scanf(" %[^\n]s", arrchar);
	
	 	if(choice == 'a')
		{
			for(i=0; arrchar[i]!='\0'; i++)
			{
				if(arrchar[i]>='A' && arrchar[i]<='Z') 				//make all characters lowercase in case uppercases are in the middle of a word in input
				{
         				arrchar[i] = arrchar[i] +32;
				} 
			}
			
	 		if((arrchar[0]>='a') && (arrchar[0]<='z'))
 			{
 				arrchar[0] = (arrchar[0] - 32); 				//-32 in ascii table to capitalize
 				for(i = 0; arrchar[i] != '\0'; i++)   				//loop until null character
  				{
  					if(arrchar[i] == ' ')            			//if space: next letter is capitalized
   					{
    						if((arrchar[i+1]>='a') && (arrchar[i+1]<='z'))
   							arrchar[i+1]= (arrchar[i+1] - 32);
   					}
  				}	
			}			
		}
		if(choice == 'b')
		{			
			for (i=0; arrchar[i]!='\0'; i++) 
			{
      				if(arrchar[i]>='a' && arrchar[i]<='z') 				// all uppercase
				{
         				arrchar[i] = arrchar[i] -32;
				} 
							
			}
		}	
  	printf("%s\n",arrchar);     
	
	return 0;
}
	

