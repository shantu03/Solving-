#include<stdio.h>
#include<time.h>
#include<Stdlib.h>
void main()
{
srand(time(0)); //time(0) means current time
int i; 
for(int z=1;z<50;z++)
{
    i=(rand()%15) +1;    //every time loop execute random value show between 0 to 15; 0 is default set and we get (rand()%15) will be betw 0-14, so we add +1 to get random 1-15
    printf("%d\t",i);
}
}