//Calloc
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,i,*p,sum=0;
    printf("Enter the number of integer you want to sum");
    scanf("%d",&a);
    p=(int *) calloc(a,sizeof(int));
    if(p==NULL)
    {
        printf("ERror has occured");

    }
    else
    {
        printf("\nEnter %d intergers",a);
        for(i=0;i<a;i++)
        {
            scanf("%d",p+i);
        }
        for(i=0;i<a;i++)
        {
            sum=sum+*(p+i);
        }
        printf("\n Sum is %d",sum);
    }
}