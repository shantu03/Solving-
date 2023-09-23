// WE are going to practice the lecture non 140 to 144 using out mind 

// we are going to do strlen,strrev,strcpy,strcmp all using functions
#include<stdio.h>
#include<string.h>
char aa[20];
char bb[20];
 char cc[20];
void len();
void rev();
void cpy();
void cmp();
void main()
{
    printf("first we are going to compare the string\n");
    cmp();
    printf("\n\n\nnow time for checking the lenght\n");
    len();
    printf("\n\n\nNow for reverse checking\n");
    rev();
    printf("\n\n\nNow for copy type\n");
    cpy();
    printf("\n As we done all the work\n");
    getchar();
}
void cmp()
{
 
    printf("Enter user name ");
    gets(aa);
    printf("\n Enter your password ");
    
    gets(bb);
   
    printf("\n Enter your password again ");
    gets(cc);
    int x=strcmp(bb,cc);
    if(x==0)
    {
        printf("\n Entered Detail are correct ");
    }
    else
    {
        printf("\n enterd password are not same ");
    }
}
void len()
{
    printf("\n%d is length of user name ",strlen(aa));
    printf("\n%d is length of password ",strlen(bb));
    printf("\n%d is length of double password ",strlen(cc));
}
void rev()
{
    printf("\n %s is reverse of username",strrev(aa));
    printf("\n %s is reverse of password",strrev(bb));
    printf("\n %s is reverse of double password",strrev(cc));
    
}
void cpy()
{
    strcpy(aa,"Hello world");
    strcpy(bb,aa);
    strcpy(cc,bb);
    printf("\n %s is copy ",aa);
    printf("\n %s is copy ",bb);
    printf("\n %s is copy ",cc);
}