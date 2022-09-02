/* 	Author: Zack Milne
	Date: 	Mar 4, 2021
	Description: The requirements for this assignment were a little weird as 	part of the program was given. it was meant to hide a secret challenge based 	
	on a secret value (it was bruteforced to find that 'mmmmmmmmmmmM' could 	work.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define SIZE 30
int getInput(char input[SIZE]);
void randchars(char charRand[SIZE], int value);
void challenge();
int main()
{
    char input[SIZE];
    int value = 0;
    srand(time(NULL));
    value = getInput(input);
    challenge(value);
}
int getInput(char input[SIZE])
{
    int n;
    int value;

    value = 0;

    printf("please enter a string[]: ");
    scanf(" %[^\n]s", &input[0]);

    for(n = 0; input[n] != '\0'; n++);

    for(int i = 0; i < n; i++)
    {
        value += input[i] * (n-i);               
    }
    if(value == 8470)
    {
        challenge();
    }
    printf("You may proceed\n");
    
    return value;
}
void randchars(char charRand[SIZE], int value)
{

    srand(time(NULL));

    for(int i =0; i<SIZE; i++)
        charRand[i] = rand() % 127;

    printf(" %s\n", charRand);

}
void challenge()
{
    int flag = 0;
    int check;
    char ans1[] = {'t','e','e','t','h'};  //Thirty white horses on a red hill, First they champ,Then they stamp, Then they stand still. teeth
    char ans2[] = {'w','i','n','d'};   // Voiceless it cries,Wingless flutters,Toothless bites,Mouthless mutters. wind
    char ans3[] = {'e','g','g'};    //A box without hinges, key, or lid,Yet golden treasure inside is hid. egg
    char arrin[10];
    check = rand() %3;
   
   
    if(check == 0)
    {
        printf("Thirty white horses on a red hill, First they champ,Then they stamp, Then they stand still.\n");
        scanf(" %s", arrin);
        for(int i=0; arrin[i] != '\0'; i++)
        {
            if(arrin[i] != ans1[i])
            flag = 1;
        }
    }
   else if(check == 1)
    {
        printf("Voiceless it cries,Wingless flutters,Toothless bites,Mouthless mutters.\n");
        scanf(" %s", arrin);
        for(int i=0; arrin[i] != '\0'; i++)
        {
            if(arrin[i] != ans2[i])
            flag = 1;
        }
    }
    else if(check == 2)
    {
        printf("A box without hinges, key, or lid,Yet golden treasure inside is hid.\n");
        scanf(" %s", arrin);
        for(int i=0; arrin[i] != '\0'; i++)
        {
            if(arrin[i] != ans3[i])
            flag = 1;
        }
    }
   if(flag == 0) 
    { 
        printf("you win\n");
        exit(-1);
    }
    if(flag != 0)
    { 
        printf("you have failed the challenge\n");
        exit(-1);
    }
}