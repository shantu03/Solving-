//Accesing Rows first then column
#include<stdio.h>
void main()
{
    int a[2][3]={3,4,5,6,7,8},i,j;
    
   for(i=0;i<=1;i++)//this is for row
   {
    for(j=0;j<=2;j++)//this loop is for column
    {
        printf("%d\n",a[i][j]);
    }
   }
   getchar();
}
//accesing column first then row
#include<stdio.h>
void main()
{
    int a[2][3]={3,4,5,6,7,8},i,j;
    
   for(j=0;j<=2;j++)//this is for column
   {
    for(i=0;i<=1;i++)//this loop is for row
    {
        printf("%d\n",a[i][j]);
    }
   }
   getchar();
}