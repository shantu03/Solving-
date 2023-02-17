/*Write a program which takes name  and runs of five
crickerters as input and displays the name of 
highest scorer*/
#include<stdio.h>
struct cricket
{
    char name[10];
    int run;
};
void main()
{
    struct cricket a[5];
   
    int i;
    for(i=0;i<5;i++)
    {
        printf("ENter name of cricketer  ");
        gets(a[i].name);
        printf("\n Enter runs of cricketer  ");
        scanf("%d",&a[i].run);
        fflush(stdin);      //WHen you want to take input(gets()) type without error then use this funtion
    }
    int max=a[0].run,j;
    for(j=0;j<5;j++)
    {
        if(max<a[j].run)
        {
            max=a[j].run;

        }
    }
    
    for(j=0;j<5;j++)
    {
        if(max==a[j].run)
        {
            printf("\n  %s has highest run which is  %d ",a[j].name,a[j].run);
        }
    }
    getchar();
}