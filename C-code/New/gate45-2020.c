//Gate 2020 que no 48
#include<stdio.h>
int tob(int b,int * arr)
{
    int i=0;
    for(i=0;b>0;++i)
    {
        if(b%2)
            arr[i]=1;
        else
            arr[i]=0;

        b=b/2;
    }
    printf("i=%d\n",i);
    return(i);
}
int pp(int a,int b)
{
    int arr[20];
    int i,tot=1,ex,len;
    ex=a;
    len=tob(b,arr);
    for(i=0;i<len;i++)
    {
        if(arr[i]==1)
            tot=tot*ex;
        
        ex=ex*ex;
    }
    printf("ex=%d\n",ex);
        return(tot);
}
int main()
{
    printf("%d\n",pp(2,5));
    return 0;
}