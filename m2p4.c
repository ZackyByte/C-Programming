/* Author: Zack Milne
	Date: Feb 02, 2021
	Description: Print memory addresses and memory sizes
*/	
#include<stdio.h>

int main()
{						// content is declared for all variables to be 100 in initialization.
	short int aval = 100;			// integer number is a decimal = 2 or 4 bytes. Short = restrict to 2 bytes -32 768 to 32 767.
	int bval = 100;				// int 2 or 4 bytes -32 768 to 32 767 or -2 147 483 648 to 2 147 483 647
	float cval = 100;			// floating point used for precision calculation. 6 decimal places, 4 bytes.	
	double dval = 100;  			// double is also a floating point data type. 15 decimal places, 8 bytes
	char eval = 100;			// char = single character, 1 byte. value range -128 to 127 
	unsigned char fval = 100;		// unsigned char removes possible negative values. 0 to 255.
	
								// %p gives the memory address of the stored variable
								// sizeof() operator will give the size of the variable in bytes
								// %u is a specifier for unsigned int, length modifier should go before
								// the specifier. %lu is looking for a long unsigned integer variable
	
	
	printf("Address of aval: %p, Content: %d, Size: %lu bytes\n", &aval, aval, sizeof(aval)); 			
	printf("Address of bval: %p, Content: %d, Size: %lu bytes\n", &bval, bval, sizeof(bval));	      	
	printf("Address of cval: %p, Content: %f, Size: %lu bytes\n", &cval, cval, sizeof(cval));		
	printf("Address of dval: %p, Content: %f, Size: %lu bytes\n", &dval, dval, sizeof(dval)); // C converted double to a float when printf calls its value.
	printf("Address of eval: %p, Content: %d, Size: %lu bytes\n", &eval, eval, sizeof(eval)); 
	printf("Address of fval: %p, Content: %d, Size: %lu bytes\n", &fval, fval, sizeof(fval));

	return 0;
}
