#include<stdio.h>
int hel(int j)
{
    enum {TRUE,FALSE};
    if(j==1)
     return(TRUE);
      return(FALSE);
  
}
void main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        if(hel(i))
        {
        printf("--%d",hel(i));
        }
    }
}
