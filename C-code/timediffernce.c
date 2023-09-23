// Calculate time difference at run time
#include<stdio.h>
struct time
{
    int hh;
    int mm;
    int ss;

};
  struct time xx,yy,diff;
void function();
void main()
{
  
    printf("ENter Start time in format of hh:mm:ss  ");
    scanf("%d %d %d ",&xx.hh,&xx.mm,&xx.ss);
    printf("\n\n Enter End time in above format  ");
    scanf("%d %d %d ",&yy.hh,&yy.mm,&yy.ss);
    function();
    printf("\n\n %d:%d:%d - %d:%d:%d == %d:%d:%d",xx.hh,xx.mm,xx.ss,yy.hh,yy.mm,yy.ss,diff.hh,diff.mm,diff.ss);
    getchar();
}
void function()
{
    if((xx.mm<60 && xx.ss<60)&&(yy.mm<60 && yy.ss<60))
{
    diff.ss=xx.ss-yy.ss;
    if(diff.ss<0)
    {
        diff.ss=60;
        xx.mm--;

    }
   diff.mm= xx.mm-yy.mm;
    if(diff.mm<0)
    {
        diff.mm=60;
        xx.hh--;

    }
    diff.hh=xx.hh-yy.hh;
}
}