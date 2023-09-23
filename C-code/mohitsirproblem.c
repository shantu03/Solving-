/* Write a menu driven program which takes two in tegers as input from the user and perform different arithmatic operations according to the
use choice. Choices are :press 1 to perform addition, Press 2 to perform subtraction, Press 3 to perform multiplication, Press 4 to perform Division */
#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter two interger  ");
scanf("%d %d", &a,&b);
printf("ENter you choice \n Press 1 for addtion \n Press 2 for substaction \n Press 3 for multiplication \n Press 4 for division \n Press 9 for all opertion  ");
scanf("%d",&c);
switch (c)
{
case 1:
    printf(" Result is %d",a+b);
    break;
case 2:
    printf(" Result is %d",a-b);
    break;
case 3:
    printf(" Result is %d",a*b);
    break;
case 4:
    printf(" Result is %f\n",(float)a/b);
    break;
case 9:
     printf(" 1 is %d\n",a+b);
    printf(" 2 is %d\n",a-b);
    printf(" 3 is %d\n",a*b);
    printf(" 4 is %f\n",(float)a/b);
    break;

default:
    printf(" Invalid Input");
    break;
}


}