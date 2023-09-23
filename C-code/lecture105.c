// Write a program to count total number of even and odd number in an array of size of integer type where all the number entered aare at tun time
/* 
MY PROGRAM
#include<stdio.h>
void main()
{
    int a[10],i;
    printf("Enter any ten integer numbers  ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d is even\n",a[i]);
        }
        else if(a[i]==0)
        {
            printf("%d is zero \n",a[i]);
        }
        else 
        {
            printf("%d is odd\n",a[i]);
        }
    }
getchar();
}

*/


#include<stdio.h>
void main()
{
    int a[10],i,even=0,odd=0;
    printf("Enter any ten integer numbers  ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        even++;
        else 
        odd++;
    }
    printf("even=%d and odd-=%d",even,odd);
getchar();
}