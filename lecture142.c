//HEre we are going to learn new function strcpy( !,< )
#include<stdio.h>
#include<string.h>
void main()
{
    char a[20]="SHANTANU HULWAN";
    char b[20];
    char c[20];
    strcpy(c,"Hello world!");
    strcpy(b,a);         
    printf("a is %s",a);
    printf("\n b is%s",b);
    printf("\n c is %s",c);
    printf("\n%d and %d and %d",strlen (a),strlen (b),strlen(c));

    // Lecture no. 143 
    // we are learning new fun strrev = which is use to reverse the string
    strrev(a);
    printf("\n %s ",a);
    getchar();
}