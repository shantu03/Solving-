#include<stdio.h>
float avg(float,float,float);
void main()
{
    float a,b,c,d;
    printf("enter any three decimal no.");
    scanf("%f%f%f",&a,&b,&c);
    d=avg(a,b,c);
    printf("Average is %f",d);
    getchar();
}
float avg(float x,float t, float u)
{
    float i;
    i=(x+t+u)/3;
    return(i); // Direct pn hotay,we dont need to do if we dont want, can be directly put (x+y+z)/3 in return()
}