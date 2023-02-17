/*Write a program which takes two integers as input 
from the use where both the integer should be greater 
than zero and different then claculate the factorial
 of the greater number
#include<stdio.h>
int g(int,int);
void main ()
{
   int a ,b,j,p=1;
   printf("ENter any two integer which is grater than zero and different form each others  ");
   scanf("%d%d",&a,&b);
   check(int,int);
   if((a&&b>0)&&(a!=b))
   {
    g(a,b);
    printf("Greater is %d",g(a,b));
  for(j=1;j<=g(a,b);j++)
  {
    p=p*j;
  }
    printf("\nFactrial of %d is %d",g(a,c),p);
   } 
   else
   {
    printf("Invalid Input");
   }
   getchar();
}
int g(int t,int y)
{
    if(t>y)
    return(t);
    else
    return(y);
}*/
#include<stdio.h>
int c(int,int);
int g(int,int);
int f(int);
void main()
{
  int a,b;
  printf("Enter two no. which is greater than zero and differen from each others");
  scanf("%d%d ",&a,&b);
  if(c(a,b))
  {
    printf("The factorial is %d",f(g(a,b)));
  }
  else
{
  printf("Invalid input Or same inputs");
}
getchar();

}
int c(int q,int w)
{
if((q&&w>0)&&(q!=w))
return(1);
else
return(0);
}
int g(int s,int t)
{
  if(s>t)
  return(s);
  else 
  return(t);
}
int f(int o)
{
  int n,f=1;
  for(n=1;n<=o;n++)
  {
    f=f*n;
  }
  return(f);
}