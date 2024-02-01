#include<stdio.h>
void solve(int a,int b)
{
a=a+2;
b++;
int x =printf("\nHello");

printf( " %d\n", x);
}
int main()
{
int a=8;
int b=9;
int *x,*y;
x=&a;
y=&b;
solve(*x,*y) ;
printf("%d\t %d\n",a,b);

int (*p) [5];
printf(5 + "Test_Quiz");

char str[23]="hel";
printf("\n%d",sizeof(str));
int i=2;
for(;;)
{
printf("%d\n",++i);
if(i>4)
{
break;
}

}
return 0;
}