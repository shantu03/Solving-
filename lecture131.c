/*Write a program to swap values of two variavles a and b
which are local variavle of man function. To perform
swapping of a and b define a function named swap
#include<stdio.h>
//This is call by value 
void swap(int,int);
void main()
{
    int a,b;
    printf("Enter two numbers ");
    scanf("%d %d ",&a,&b);
    printf("before swapping values are %d %d",a,b);
    swap(a,b);
    printf("\nafter swapping values are %d %d",a,b);
    getchar();
}
void swap(int t ,int w)
{
    int k;
    k=t;
    t=w;
    w=k;
    
}

// This is call by reference
#include<stdio.h>
void swap(int *,int*);
void main()
{
    int a=5,b=4;
    printf("Before %d %d",a,b);
    swap(&a,&b);
    printf("\n After %d %d",a,b);
    getchar();
}
void swap(int *t,int * q)
{
    int s ;
    s=*t;
    *t=*q;
    *q=s;
}*/

#include<stdio.h>

void swap(int*,int*);
void main()
{
    int a,b;
    printf("Enter two numbers ");
    scanf("%d %d ",&a,&b);
       printf("before swapping values are %d %d",a,b);
    swap(&a,&b);
    printf("\nafter swapping values are %d %d",a,b);
    getchar();
}
void swap(int *t ,int *w)
{
    int k;
    k=*t;
    *t=*w;
    *w=k;
    
}