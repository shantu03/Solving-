#include<stdio.h>
int main()
{
    struct file *pf;
    pf=fopen("E:\\Code\\C\\file.txt","r");
    if(pf==NULL)
    printf("failed");
    else 
    printf("succed");
    return 1;
}