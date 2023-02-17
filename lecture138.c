#include<stdio.h>
void main()
{
    // WE can store string without using array
    char *p="Shantanu";
    char *a=&*p;
    printf("%s",p);
    printf("\n%d",&p);
    printf("\n%s",*&a);

    printf("\n%c",*p);
    printf("\n%s",*&p);
    getchar();
}