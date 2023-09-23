//Pyramid star program
#include<stdio.h>
#include<dos.h>
void main()
{
    int a,b,rows,c;
    printf("Enter no. of rows you want");
    scanf("%d",&rows);
    
    for(a=1;a<=rows;a++)
    {
        for(b=1;b<=rows;b++)
        {
            for(c=0;c<=rows-a+b;c++)
            {
                printf("*");

            }
            printf(" ");
                            delay(100);

            printf("\n");
            
        }

    }
getchar();
}