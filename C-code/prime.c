#include<stdio.h>
int main()
{
int a,b,count;
printf("Enter NO. \n");
scanf("%d ",&a);
for(b=1;b<=a;b++)
{
    if(a%b==0)
    {
        count++;
    }
}
if(count==2)
{
    printf("Number is prime");

}
else { printf("Non is not prime");}
return 0;
}
