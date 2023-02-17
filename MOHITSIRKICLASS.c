// Any character is entered through the keyboard. Write a profram to determine wherther the character entered is capital letter, a small letter, a digit ot a special symbol.
#include<stdio.h>
void main()
{
    char a;
    printf("Enter the character you want  ");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
    {
        printf("%c is capital letter ",a);
    }
    else if(a>='a' && a<='z')
    {
        printf("%c is small letter ",a);
    }
    else if(a>='0' && a<='9')
    {
        printf("%c is digital  ",a);
    }
    else {
        printf("ist is special symbol");
    }
getchar();
}