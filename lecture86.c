// program to find factorial no entered by the user

#include<stdio.h>
void main()
{
    
    int a,b,c=1;
    printf("Enter the number of factorial you want ");
    scanf("%d ",&a);
    if(a>0)
    {
    for(b=a;b>=1;b--)
{
    c=c*b;
}

printf("The factorial of %d is %d ",a,c);}
if(a==0)
{printf("The factorial is 1");}
if(a<0)
{("entered number is negative");}
getchar();
}