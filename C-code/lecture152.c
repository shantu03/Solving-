// POINTER TO STRCUTURE
// WE are going to learn new tecnique which make it easier to understand
#include<stdio.h>
struct class
{
    int roll;
    float mark;
    char status[10];
};
void fun(struct class *);
void main()
{
    struct class yy={11,85.40,"Pass"};
    struct class *x;
    x=&yy;
    fun(&yy);
    printf("\n normal is %d ; %f ; %s",(*x).roll,(*x).mark,(*x).status);
    printf("\n \n This is new method  %d ; %f ; %s",x->roll,x->mark,x->status); // WE can use this statement in place of above 
    getchar();
}
void fun(struct class *p)
{
    printf("\n This is inside a function \n %d %f %s",p->roll,p->mark,p->status);
}