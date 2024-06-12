#include<stdio.h>

int main(){
    int a=1231;

    int *b=&a;

    int k[]={9,0,2,2,6,0,1,2,3,1};
   // b=&k[0];

    printf("add of a : %13d\n",&a);
    printf("b : %13d\n",b);
    printf("add of b : %13d\n",&b);
    printf("ptr of b : %13d\n",*b);
    printf("(b+1) : %13d\n",(b+1));
    printf("*(b+1) : %13d\n",*(b+1));
    printf("*(b+2) : %13d\n",*(b+2));

    b=k;

    printf("%u\t%u\n",*(k),*(k+2));
    printf("%u\t%u\n",b[0],b[3]);

    return 0;
}