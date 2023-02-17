#include<stdio.h>
int a;
void u();
int bb(int, int);
void main()
{ int b;
    printf("ENter valude of B");
    scanf("\n%d",&b);
    printf("\n%d",a);
    printf("\n%d",b);
    u();
 
    
    printf("\n%d",bb(a,b));
 getchar();
}
void u()
{int p;
    printf("\n%d %d ",a,p);
}
int bb( int t, int y)
{
    return(t+y);
}