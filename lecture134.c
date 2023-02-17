// This is for accesing array value through pointer 
#include<stdio.h>
void main()
{
    int a[5]={66,44,33,99,87};
    int *p;
    p=a;                // This is important point, focus on the &a[0]
    for(int i=0;i<5;i++)
    {
        printf("\n++%d",(p+i));
        printf("--%d",*(p+i));

    }

    printf("\n \n ");
    for(int i=0;i<5;i++)
    {
        
        printf("\n##%d",p[i]);
    }
    getchar();
}