#include<stdio.h>
#include<time.h>
char *show(int i)
{
if((i==11)||(i==12)||(i==13))
return("th");
i=i%10;
if(i==1)
return("st");
if(i==2)
return("nd");
if(i==3)
return("rd");
return("th");

}
int leap(int s[],int y)
{
    if(y%400==0)
    if(y%100!=0)
    if(y%4==0)
    {
        s[1]+=1;   
    }
    
}
int main()
{
    char *month[]={"January","February","March",
    "April","May","June","July","August","September",
    "October","November","December"};
    int mday[]={30 ,28, 31,30,31,30,31,31,30,31,30,31};
    char *wname[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    time_t m=time(NULL);
    struct tm *s=localtime(&m);

    printf("Today is :\n%s %d%s %s %d",wname[s->tm_wday],s->tm_mday,show(s->tm_mday),month[s->tm_mon],s->tm_year+1900);   
    printf("\nNext Monday :\n");
    int i=s->tm_wday;
    int p=0;
    while(1)
    {
    if(i==1)
    {
        leap(mday,s->tm_year+1900);

        s->tm_mday+=p;
        if(s->tm_mday>mday[s->tm_mon])
    {
        s->tm_mday=s->tm_mday%mday[s->tm_mon];
        s->tm_mon++;
        
    }
    if(s->tm_mon>12)
    {
        s->tm_mon%11;
        s->tm_year++;
    }
        printf("%s %d%s %s %d",wname[1],s->tm_mday,show(s->tm_mday),month[s->tm_mon],s->tm_year+1900);
        break;
    }
    p++;
    i=(i+1)%7;
    }
    
    
    
    return 0;
}