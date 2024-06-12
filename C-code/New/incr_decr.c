#include<stdio.h>
#include<stdlib.h>
int  main()
{
    int a=7;
    int b=a++ + ++a + a++ + a-- - --a + ++a - --a;
    printf("%d\n",b);

    printf("%d\n",-25%-5);
    
    int c= 77&&0;
    printf("%d\n",c);


    printf("=======\n");

    a=1;
    b=0;
    c=-1;
    int d,e,f;
    d=(a<b)&&(++c);
    e=(b>c)||b--;
    f=(a++)&&(++c);

    printf("%d-%d-%d-%d-%d-%d",a,b,c,d,e,f);
    (a>b)?printf("a big"):printf("B big");
    printf("\n%d\n",15<<4*2!=7/2>>1);

    a=11;
    printf("%x hello\n",a);
    int k=043;
    printf("%o\n",k);

    
    return 0;

}