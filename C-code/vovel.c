// write a program to chech whether an alphabate entered by user is vovel or consonat
#include<stdio.h>
void main()
{
    char a;
    printf("Enter any character  ");
    scanf("%c",&a);
    if((a>='a' && a<='z') || (a>='A' && a<='Z' ))
    {
    if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u')
    {printf("%c is Vovel",a);}
    else 
    {
        printf("%c is not vovel",a);
    }
    }
getchar();
}