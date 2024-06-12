#include<stdio.h>
extern int k=99;
static int p=90;
int j=80;
int main(){
    char a='0';
    for(int i=0;i<=25;i++)
    {
  //  printf("%d - %c\n",a+i,a+i);

    }
    
    int b[15]={1,2,3};

    for(int i=0;i<15;i++)
    {
        printf("%d\t",b[i]);
    }
    register int c=99;
    int d =01;
    printf("\n%d\n",&d);

    register int *e=&d;
    
    printf("%lu\n",e);


    printf("%d\t%d\t%d\n",k,p,j);
    
    printf("\nend");
    return 0;
}