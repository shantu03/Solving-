// TO convert capital letter into small letter and small letter into capital letter
#include<stdio.h>
void main()
{
    char a,b;
    printf("Enter Any Character ");
    scanf("%c",&a);
    if(a>=65 && a<=90)
    {
        b = a+32;
        printf("%c is correspoinding char of %c",b,a);

    }
    else if(a>=97 && a<=112)
    {
       b = a-32;
       printf("%c is correspoinding char of %c",b,a);
    }
    else 
    {
        printf("Invalid input");
    }
getchar();
}