#include<stdio.h>
#define AND &&
#define name(str) printf("%s\n",str)
#define condition (c>0)
#define square(x) (x*x)
int main()
{
    printf("%d\n",1 AND 1);
    name("shantanu\n");

    int c;
    scanf("%d",&c);
    if(condition)
    {
        printf("positive");
    }
    else{
        printf("negative");
    }
    printf("\n%d\n",square(5));

    return 0;
}