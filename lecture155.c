/* The process in which a funciton call itself directly or 
indirectly is called recursion and such a funcion is called
recursive function */

#include<stdio.h>
void fun();
void main()
{
    fun();
    getchar();
}
void fun()
{
    printf("This is result");
    
    fun();          // this stop when when memory stack 
}
