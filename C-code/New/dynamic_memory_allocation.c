#include<stdio.h>
#include<stdlib.h>
void hello();
int main()
{
    hello();
    float *p;
    int n;
    float sum=0;
    scanf("%d",&n);
    p=(float * )calloc(n,14);

    if(p==NULL)
    {printf("ERROR \n");}
    
    
    for(int i=0;i<n;i++)
    {
        scanf("%f",p+i);
        
    }
    printf("%u\n",p+2);
    printf("%u\n",p+1);
    printf("%u\n",p+13);
    printf("%f\n",*(p+13));

    for(int i=0;i<n;i++)
    {

        sum=sum+*(p+i);
    }
    printf("sum : %f ",sum);

}
void hello(){
    float a=9.9;
    int b=a;
    printf("%f\n\n\n",a);
}