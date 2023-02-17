// there are 50p students in a class with Roll No. 1 to 50 .BUt student ROll mo>11,27,32,49 are failed in exam. write a program to display only pass student roll no.

#include<stdio.h>
void main()
{
    int a=50,b=0;
    printf("IS running");
    for(b=1;b<=a;b++)
    {
        if(b==11 || b==27 || b==32 || b==39 || b==49)
        
            continue;
            printf("\nRoll no. %d ",b);
        
    }
getchar();
}