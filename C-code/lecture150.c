// HEre we are going to learn array of strcture 
#include<stdio.h>
struct class
{
    int rollno;
    float mark;

};
void main()
{
    struct class a[5]={{01,66.5},{11,77.99},{13,55.44},{14,88.44},{22,99.99}};  //remember we alway take datatype and variable name // THis is if you forgot
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n %d and %f",a[i].rollno,a[i].mark);

    }
    // now we are trying to take input from the user
    struct class b[5];
    int j;
    printf("\n\nENter the roll no. with mark");
    for(j=0;j<5;j++)
    {
        scanf("%d %f",&b[j].rollno,&b[j].mark);
    }
    for(j=0;j<5;j++)
    {
    printf("\n ROll no is %d and their mark is %f",b[j].rollno,b[j].mark);
    }
    getchar();
}   