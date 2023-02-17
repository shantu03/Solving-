// Here we are going to learn new "STANDARD LIBRARY STRING FUNCTIONS"
#include<stdio.h>
#include<string.h>
char u[];
void f();
void  main()
{
    char a[]="SHANTANU HULWAN"; // Jri a[2093] kiti pn value getli tri actual lenght sangnar strlen();
    char *r="YASH HULWAN"; // this is also valid for pointer to store the data, se below for the result
   
    printf("%d",strlen(a));
    printf("\n %s -- %d",r,strlen(r));  //  here ye enter using pointer value r
    printf("\n%d",strlen(a+3));
    printf("\n%d",strlen(a+9));
    printf("\n%d",strlen("YE RE LAVDYA"));
    f();
    printf("\nMobline no. is %s and its length is %d",u,strlen(u));
    getchar();
}
void f()
{
    printf("\nEnter YOur mobile no.");
    gets(u);
}