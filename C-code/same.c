#include<stdio.h>
struct student
{
    int roll;
    char name[10];
};
int main()
{
    struct student s1[5];
    struct student *p;int i;
    p=s1;
    for(i=0;i<5;i++)
    {
        printf("\n Enter roll and name :");
        scanf("%d %s",&p->roll,p->name);
        p++;
    }
    p=s1;
    for(i=0;i<5;i++)
    {
        printf("\n Roll = %d \t Name = %s",p->roll,p->name);
    p++;
    }
getchar();
}