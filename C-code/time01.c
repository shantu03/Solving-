#include<stdio.h>
// sleep() use to wait few sec
#include<unistd.h>

#include<time.h>
void main()
{
/*
    for(int i=1;i<4;i++)
   {
    printf(">",i);
    sleep(1);
   }
   putchar(' ');
   
       for(int i=1;i<4;i++)
   {
    printf("<",i);
    sleep(1);
   }
 */

time_t m= time(NULL);
// to give * pointer st is important
char *st=ctime(&m);

printf("%s\n ",st);
struct tm *t =localtime(&m);      // use assign all time parts seperatly in structure
//printf("%d\t",t->tm_sec);           // we are using t-> because we use pointer to store address of current time which is in 'm
//printf("%d\t",t->tm_min);
//printf("%d\t",t->tm_hour);      // t.tm_hour here tm is struct we define earlier
printf("%d\t",t->tm_mday);  //This is the way to show time through structure t->tm_??

printf("%d\t",t->tm_mon+1);     //here we add 1 because month counting start from 0=jan,1=feb,2=march,......
printf("%d\t",t->tm_year+1900);     //Here we added 1900 because this is where tm_year start counting
printf("%d\t",t->tm_wday);

putchar('\n');
char pp[100];
strftime(pp,100,"day - %A \tdate -%d\t month -%m (%B)" ,t);  // first declared array,size,msg in "", and t (struct variable name)
printf("%s\n",pp);  // in line 40 we put what we want to print in strftime(....) and here we are using it
}