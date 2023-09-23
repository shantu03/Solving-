/*Here in this lecture sir explained how arithmatic 
operation is performed using two types - 1) using value 
2) using pointer 
so following we are performing using pointer 
THIS IS 32 BIT COMPILER SO HERE 
int & float  SIZE IS 4 BYTE, BUT IN HERE char SIZE IS 1*/
#include<stdio.h>
void main()
{
    int a=5;
    float b=5.5;   
    char c='A';
    int *p;
    float *t;
    char *l;
    p=&a;   // Here we stored address of a in p
    t=&b;   // Here we stored address of b in t
    l=&c;
    printf("%u",p);
    printf("\n%u",p+1); //p+1(4)
    printf("\n%u",p+2);
    printf("\n%u",p+3);
    printf("\n%u",p+4); // formulae is p+4(size of interger)
    printf("\n%u",p-5);
    printf("\n%u",p-4);
    printf("\n\n\n%u",t);
    printf("\n%u",t+1);
    printf("\n%u",t+2);
    printf("\n%u",t+3);
    printf("\n%u",t-3);
    printf("\n%u",t-2);
     printf("\n\n\n%u",l);
     printf("\n%u",l+1);
     printf("\n%u",l+2);
     printf("\n%u",l+3);
     printf("\n%u",l-3);
     printf("\n%u",l-2);
getchar();
}
/* HERE MULTIPLICATION AND DIVISION OF POINTER WITH 
INTERFER IS INVALID */