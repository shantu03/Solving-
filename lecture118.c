//Write a program in which define a function which 
//return greater number among the two interger entered by user
#include<stdio.h>
 int g(int, int);
 void main()
 {
        int a, b,gg;
    printf("Enter any two numbers");
    scanf("%d %d ",&a,&b);
    gg=g(a,b);
    printf("The largest is %d",gg);
    getchar();
 }
 int g(int x,int y)
 {
    if(x>y)
    return(x);
    else
    return(y);
    
 }