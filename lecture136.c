#include<stdio.h>
void main()
{
        char a[]="SHANTANU";
    int i=0;
        while(a[i]!='\0')
        {
            printf("%c",a[i]);
            i++;
        }
        printf("\n\n");
// Using for /loop
for(int k=0;a[k]!='\0';k++)
{
    printf("%c",a[k]);
}
// USing string specifier
printf("\n\n\n\n%s",&a);
//Experiment
printf("\n----%c",a);
printf("\n----%f",a);
printf("\n----%d",*a);
printf("\n----%s",&a[0]);
getchar();
}