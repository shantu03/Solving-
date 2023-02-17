/*Write a program to calculate sum of n intergers entered
by user. WHere value of n is decided by user at run time*/
#include<stdio.h>
#include<stdlib.h>
void lar();
void even();
void main()
{
    even();
    float *p,sum=0;
    int n,i;
    printf("ENter the number of interger you want to sum ");
    scanf("%d",&n);
    p=(float *)malloc(n*(sizeof(float)));
    if(p==NULL)
    {
        printf("\ncant allocate the requester memory ");

    }
    else{
        printf("\n ENter %d intergers",n);
        
        for(i=0;i<n;i++)
        {
            scanf("%f",p+i);
        }
        
        for(i=0;i<n;i++){
        sum=sum+*(p+i);}
        
        printf("\n Sum is %f",sum);
        free(p); 
    }
}  
void even()
{
    int n,i,*p,a[10];
    printf("Enter no. of interger you want to use ");
    scanf("%d",&n);
    p=(int *) malloc(n*(sizeof(int)));
    if(p==NULL)
    printf("\nINvalid");
    else
    {
        printf("Enter %d numbers ",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",p+i);
        }
        for(i=0;i<n;i++)
        {
        if(*(p+i)/2!=0)
        {
            a[i]=*(p+i);
        }
        
        }
        for(i=0;i<n;i++)
        {
    printf("\n %d",a[i]);
    }}
}