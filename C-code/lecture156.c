/*Well defined recursion if it has these two properties
1)There must be certain condition called base condition for which the function stop to call itself
2) Each time th function call itself, it must be closer to base condition
#include<stdio.h>
void try();
void main()
{
    try();
    getchar();
}
void try()
{
    static int i;
    printf("\n%d time started ",i);
    if(i==3)
    {
        return;
    }
    i++;
    try();
    printf("\n%d time stoped",i-1);
}*/
#include<stdio.h>
void try();
int a;
void main()
{
    
    printf("ENter any number");
    scanf("%d",&a);
    try(&a);
    getchar();
}
void try()
{

    static int i;
    
    
    printf("\n%d",(i));
    i++;
    if(i==a)
    {
        return;
    }
    try();
    i--;
    printf("\n[[[%d]]]",i);
}