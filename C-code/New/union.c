#include<stdio.h>
union class
{
    int roll;
    float mark;
};
int main()
{
    union class a;
    a.roll=21;
//    a.mark=800.0;


    printf("%d\t%f",a.roll,a.mark);
    a.mark=800.0;
    printf("\n%d\t%f",a.roll,a.mark);
    return 0 ;
}
