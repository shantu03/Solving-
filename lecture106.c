// write a program to find largest number among all the mumbers stored in an array. Considr size of array is 5 and tupe of array is float/ Initializw array at run time
/*#include<stdio.h>
void main()
{
    float a[5];
    int i;
    printf("Enter any five decimal numbers  ");
    for(i=0;i<5;i++)
    {
        scanf("%f",&a[i]);
    }
for(i=0;i<10;i++)
{
    if(a[0]>>a[i])
    {
        printf("%f is greastest ",a[0]);
    }
    else if(a[1]>a[i])
    {
        printf("%f is greastest ",a[1]);
    }
    else if(a[2]>a[i])
    {
        printf("%f is greastest ",a[2]);
    }
    else if(a[3]>a[i])
    {
        printf("%f is greastest ",a[3]);
    }
    else if(a[4]>a[i])
    {
        printf("%f is greastest ",a[4]);
    }
    
}
getchar();
}
*/
#include<stdio.h>
int main()
{
    float a[5],max;
    int i;
    printf("Enter any five decimal numbers  ");
    for(i=0;i<=4;i++)
    {
        scanf("%f",&a[i]);
    }
    max=a[0];
    for(i=1;1<=4;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("Greatest number is %f",max);
    return 0;
}