#include"E\code\stdio.h"
void main()
{
    printf("ENter the number ");
    int a;
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    {
        printf("\n%d",a*i);
    }
}