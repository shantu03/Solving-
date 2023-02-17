/*#include<stdio.h>
#define sum(n)  x=0;\
for(i=1;i<=n;i++)\
{\
x=x+i;\
}\
printf("\nTHe sum is %d\n",x);
#define tiger(t) printf("\n No. of tigers are %d",t*2);
void fun(int );
void main()
{
    int x,a,n,i;
   
    printf("\n ENter a nmber  ");
    scanf("%d",&a);
    tiger(a)
    sum(a)
    fun(a);
    
    getchar();
}
void fun(int b)
{
    int m=1;
for(int i=b;i<=b;i--)
{
m=m*i;
if(i==1) break;
}
printf("\n The factorial  is %d ",m);
}*/
#include<stdio.h>
#include<stdlib.h>
#define p(s) t=1;\
for(n=1;n<s;n++)\
{\
if(n==s)break;\
t=n*t;\
}\
printf("\n THe result is %d",t);
void main()
{
    int t,n,s;
    printf("Enter the number ");
    scanf("%d",&s);
    p(s)
}