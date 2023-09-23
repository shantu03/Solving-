#include<stdio.h>
struct aa
{
    float b;
    float a;
    char u;

};
void main()
{
 //calculate size of array 
 float yy[]={55,33,77,44,33,22,11,55};
 printf("Size of array is %d \n",sizeof(yy)/sizeof(yy[0]));
    struct aa b;
    int y=66,z=7;
    float v=5;
    printf("%d",sizeof(struct aa));
    printf("\n%d",sizeof(b));
    printf("\n%d",sizeof(b.u));
    printf("\n%d",sizeof(char));
    printf("\n%d",sizeof(y*z*v));
    printf("\n%d",sizeof(int));
    printf("\n%d",sizeof(float));
}