//Star Pyramid Program
#include<stdio.h>
int main()
{
   
   int a,b,c=0,d=0;
   printf("Enter No. of Rows You want ");
   scanf("%d",&a);
   for(b=1;b<=a;b++)
   {
    for(c=1;c<=a-b;c++)
    {
        printf(" ");
    }
    for(d=1;d<=(2*b-1);d++)
    {
        printf("*");


    }
    printf("\n");


   }
   





 return 0;
}