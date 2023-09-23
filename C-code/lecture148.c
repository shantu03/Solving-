// Decrelation with initilization in struture
/*
#include<stdio.h>
struct book
{
    char name[20];
    float price;
    int pages;
};
void main()
{
    struct book b={"Atomic Habit",456.33,312};
    printf("%s\n$%f\n$%d",b.name,b.price,b.pages);
    getchar();
}*/

//Practice for structure decration with initilization
#include<stdio.h>
struct yy
{
    char name[20];
    char mobile[11];
    int rollno;

};
void main()
{
    struct yy a={"Pratham Atigre","9392039200",01};
    struct yy s={"Shantanu Hulwan","9022601231",11};
    struct yy p;
   
    printf("ENter name of student \n");
    gets(p.name);
    printf("\nENter Mobile no. of the student");
    gets(p.mobile);
    printf("\nENter roll no. of the student");
    scanf("%d",&p.rollno);
    int uu;
    printf("\n Enter the roll no you want to display");
    scanf("%d",&uu);
    if(uu==a.rollno)
    printf("\n Name %s, Mobile no. %s , Roll no. %d",a.name,a.mobile,a.rollno);
    
    if(uu==s.rollno)
    printf("\n Name %s, Mobile no. %s , Roll no. %d",s.name,s.mobile,s.rollno);

    if(uu==p.rollno)
    printf("\n Name %s, Mobile no. %s , Roll no. %d",p.name,p.mobile,p.rollno);

    getchar();
    }