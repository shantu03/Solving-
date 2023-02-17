// Here we are going to learn new funtion gets();
#include<stdio.h>
char u[11];     // apan yethe external storage class use kartoy 
char r[20];
void t();
void main()
{
    
    printf("Enter your name here --");
    gets(r); // only use for storing the string
   
    t();
     printf("\nYour name is %s",r);       // puts(r);
     printf("\n Mobile number is %s",u);  // puts(u);
    getchar();
}
void t()
{
    
    printf("\nEnter your mobile  no. --");
    gets(u);
    
}