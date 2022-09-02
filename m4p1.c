/* 	Author: Zack Milne
	Date: 	Mar 4, 2021
	Description: Sorting a num array.
*/

#include<stdio.h>
#define SIZE 12    // Placed at the beginning of your code
int getNums(float numarr[SIZE], float unsortarr[SIZE], int i, int size);
void sortNums(float unsortarr[SIZE], int i, int k, int size);
void printNums(float unsortarr[SIZE], float numarr[SIZE], int i, int size);

/* 	Author: Zack Milne
	Date: 	Mar 4, 2021
	Description: Sorting a num array.
*/
int main(void)
{   
   int size;
   int k;
   int i;
   float unsortarr[SIZE];
   float numarr[SIZE];
   size = getNums(numarr, unsortarr, i, size);
   sortNums(numarr, i, k, size);
   printNums(numarr, unsortarr, i, size);
} 
int getNums(float numarr[], float unsortarr[], int i, int size)
{ 
   for(i=0;i<SIZE;i++)
   {
      printf("Please enter a number: ");
      scanf(" %f", &numarr[i]);
      unsortarr[i] = numarr[i];
      if(numarr[i] == 0)
      {
         size = i;
         break;
      } 
   }   
   return size;
}
void sortNums(float numarr[], int i, int k, int size)
{
   float swap;
   for(i = 0; i < size - 1; i++)
   {
      for (k = 0; k < size - i - 1; k++)
      {
         if (numarr[k] > numarr[k+1]) 
         {
            swap        = numarr[k];
            numarr[k]   = numarr[k+1];
            numarr[k+1] = swap;
         }
         if(numarr[k]==0)
         break;
      }
   }
}  
void printNums(float numarr[], float unsortarr[], int i, int size)
{
   printf("Sorted: \tUnsorted: \n");
   for(i=0;i<size;i++)
   {
      printf("%.2f       \t%.2f\n", numarr[i], unsortarr[i]);
      if(unsortarr[i] == '\0')
      break;
   }
}
