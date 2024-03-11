#include<stdio.h>
#include<string.h>

int main()
{
char str[100];
scanf("%s",str);

char str1[100];
strcpy(str1,str);
strrev(str1);

if(strcmp(str,str1)==0)
{
printf("String is palindrome ");
}
else {
printf("String is not palindrome ");
}



return 0;
}