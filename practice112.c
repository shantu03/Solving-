#include<stdio.h>
int mul(int,int);
int add(int,int);
int sub(int,int);
float div(float,float);
void main()
{
    for(int i=1;i>0;i--)
    {
    int a,b,aa;
    printf("ENter any two number you want  ");
    scanf("%d%d",&a,&b);
    printf("\n Select operation-- 1 for addtion,\n 2 for substraction, \n 3 for multiplicaiton, \n 4 for division --- ");
    scanf("%d",&aa);
    if(aa==1)
    {
        printf("\nThe addtion is   %d",add(a,b));
    }
    else if(aa==2)
    {
        printf("\nThe substraction is   %d",sub(a,b));
    }
    else if(aa==3)
    {
        printf("\nThe multiplicaion is   %d",mul(a,b));
    }
    else if(aa==4)
    {
        printf("\nThe divison  is   %f",div(a,b));
    }
    else
    {
    printf("\n Invalid Input");
    }
    printf("\n\nIf you want to continue the program Enter any number\nIf you want to exit the program Enter 0  ");
    scanf("%d",&i);
    if(i==0)
    {break;}
    else if(i==1)
    {
        i++;
    }
    else {printf("\ninvalid input\n");}
    }

    getchar();
}
int add(int q,int w)
{
    return(q+w);
}
int mul(int q,int w)
{
    return(q*w);
}
int sub(int q,int w)
{
    return(q-w);

}
float div(float q, float w)
{
    return(q/w);
}