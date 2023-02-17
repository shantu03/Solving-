#include<stdio.h>
void main()
{
    int a=5;
    int b[5]={11,22,33,44,55};
    int *t;
    (t)[5]=&a[5];
    for(int i=0;i<5;i++)
    printf("%d \n",(t)[i]);
    int *p;
    p=&a;
    /*printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",p);
    printf("%d\n",&p);
    printf("%d--\n",*p);
    printf("%d\n`",*(&p));
    printf("%d\n",*(*(&p)));
    printf("%d\n",*(&a));
    printf("%d\n");
    getchar();*/
}