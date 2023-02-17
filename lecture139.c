// taking string as input by user at rum time
#include<stdio.h>
//int uu();

void main()
{
    char a[20];
    printf("ENter a string  ");
    scanf("%s",a); // here we dont need to enter & for inputing the value
    printf("\n\n %s 9",a);
//    uu();
    getchar();
}
/*int uu()
{
    char t[10];
    int q;
    printf("Using array ");
    for(q=0;q<10;q++)
    {
        scanf("%c",&t[q]);// always use & to take input value 
    }
    printf("\n\n");
    for(q=0;q<10;q++)
    {
        printf("-- %c",t[q]);
    }

}
/*void main()
{
    char q[10];
    int p;
    printf("ENter the string  ");
    for(p=0;p<10;p++)
    {
        scanf("%c",&q[p]);
    }
    for(p=0;p<10;p++)
    {
        printf("%c",q[p]);
    }
    printf("%s",q);
    getchar();
}*/