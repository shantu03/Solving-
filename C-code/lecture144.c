// HEre we are learning new function strcmp = which is used for comparing the string, if both are same then output will be 0 else 1;

// we can use this for double checking the password
#include<stdio.h>
#include<string.h>
void main()
{
    char a[33]="India@11";
    char b[13]="India@11";
    int x=strcmp(a,b);  //actually this do substrction in between each character and then give result. THerefore if the result is equal to zero then cmp fun is succesfull 
    if(x==0)
    {
        printf("IT is same ");

    }
    else
    {
        printf("\nIs is not same");
    }
getchar();
}