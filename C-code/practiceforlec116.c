#include<stdio.h>
void add(int,int,int);
void asit(int,int,int);
void mul(int,int,int);
void main()

{
    int a,b,c;
    printf("ENter theree no,");
    scanf("%d %d %d",&a,&b,&c);
    asit(a,b,c);
    printf("\n");
    add(a,b,c);
    printf("\n");
    mul(a,b,c);
}void add(int t,int y,int u)
{
    printf("The additon is %d",y+t+u);

}
void mul(int t,int y,int u)
{
    printf("The mul is %d",t*y*u);

}
void asit(int t,int y,int u)
{
    printf("The asit is %d %d %d",t,y,u);

}

