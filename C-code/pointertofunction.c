// practice for pointer to function 
/*#include<stdio.h>
void fun(int *,int*);
void main()
{
    int a,b;
    printf("ENter two numbers \t");
    scanf("%d %d ",&a,&b);
    fun(&a,&b);
    printf("Afer swaping %d %d",a,b);
    getchar();
}
void fun(int * t,int *p)
{
    int temp=0;
    temp=*t;
    *t=*p;
    *p=temp;
}*/
// pointer to array
#include<stdio.h>
void fun(int *);
void main()
{
    int a[6]={1,3,5,34,6,99};
    int *p=a;
    fun(&a[3]);
    //for(int i=0;i<5;i++)
    //printf("%d\t",*(p+i));
}
void fun(int *t)
{
    for(int i=0;i<6;i++)
    printf("%d \t ",*(t+i));
}