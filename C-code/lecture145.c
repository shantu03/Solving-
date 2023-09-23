// Write a program to check wheather the string entered by the user is palindrome or not.
// Palinedrome manje je left-to-right or right-to-left read kel tri same asnare
#include<stdio.h>
#include<string.h>
void main()
{
    char aa[22];
    char bb[22];
    printf("ENter a string to check wheather the it is palinedrome     ");      // Remeber we are playing with string(🔥)
    gets(aa);
    strcpy(bb,aa);
    int x;
    strrev(bb);
   
    
    if(strcmp(aa,bb)==0)
    {
        printf("\n ITs palindrome");

    }
    else
    {
        printf("\n It is not pallindrome");

    }
    getchar();
}