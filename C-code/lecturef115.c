#include<stdio.h>
void fun(int);
void main()
{
    int x=5;
    fun(x);
    getchar();
}
void fun(int a)
{
    printf("%d",a);
}