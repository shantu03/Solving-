#include<stdio.h>
int main()
{
    printf("Enter a number \n");
    int num;
    scanf("%d",&num);
    int rev=0;

    while(!num<=0){
        //printf("%d\t%d",num,rev);
        rev*=10;

        rev+=num%10;
        
        num/=10;

    }
    printf("%d\n ",rev);
    return 0;
}