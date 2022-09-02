/* 	Author: Zack Milne
	Date: 	Mar 4, 2021
	Description: Create a custom header to check for palindrome.
*/
#include"myheader.h"

int main()
{
    char string[SIZE];
    getStrings(string);
    isPalindrome(string);
}
void getStrings(char string[]);
void isPalindrome(char string[]);