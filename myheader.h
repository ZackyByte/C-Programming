/* 	Author: Zack Milne
	Date: 	Mar 4, 2021
	Description: Functions for problem 2.
*/
#include<stdio.h>
#define SIZE 30    // Placed at the beginning of your code
void getStrings(char string[SIZE])
{
    printf("Please enter a string: ");
    scanf("%[^\n]s", string);

}
void reverseStr(char string[SIZE])
{
    int length;
    char temp;
    for(length = 0; string[length] != '\0'; length++);
    for(int i  =  0; i < length/2; i++)
    {
    temp                 = string[length -1 -i];
    string[length -1 -i] = string[i];
    string[i]            = temp;
    }
    printf("Reverse string is %s\n", string);
}
void isPalindrome(char string[SIZE])
{
    int flag     = 0;
    int length;
    for(length   = 0;string[length]!= '\0'; length++);
    for(int i    = 0;i<length;i++)
    {
        if(string[i] != string[length-i-1])
        {
        flag = 1;
        }
        break;
    }
    if(flag == 0)
        printf(" The string is a palindrome\n");
        else
        printf(" the string is not a palindrome\n");

    reverseStr(string);
}


    // Possible variables here
   // getStrings(/*…*/);

 // function calls here
    //   success = isPalindrome(/* … */);
    // if success was x then print Palindrome successfully found x palindromes
    // if success was 0 then print Palindrome did not find any palindrome

