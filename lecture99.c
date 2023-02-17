//Write a program to print all table from 2 to 10 using loop

// Using for loop

#include<stdio.h>
void main()
{
    int a,b,c=0;
   for(c=2;c<=10;c++)
   {
    for(a=1;a<=10;a++)
    {
        b=c*a;
        printf("%d\n",b);
    }
    printf("\n\n");
    }
getchar();    

}

/*
// Using while loop
#include<stdio.h>
void main()
{
    int a,b=1;
    a=2;
    while(a<=10)
    {
        while(b<=10)
        {
            printf("%d\n",a*b);
            b++;
        }
          a++;
        printf("\n\n");
      
    }
    getchar();
}


// Using do while loop
#include<stdio.h>
void main()
{
    int a=2,b=1;
    do
    {
        do
        {
            printf("%d\n",b*a);
            b++;
        } while (b<=10);
        a++;
    } while (a<=10);
    getchar();
}
*/