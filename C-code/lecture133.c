#include<stdio.h>
void main()
{
    int a=6,*p;
    int b=5,*t;
    char c='T',*q;
    p=&a;
    t=&b;
    q=&c;
    printf("Value are %u %u %u",p,t,q);
    printf("\nSunstraction are %f",p-t);
    getchar();
    
}