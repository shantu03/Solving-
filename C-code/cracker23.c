/*
--------------------------------------------------------------------------------------------------------------------------
 Chef and Profit 

#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    int x[3],y[3],z[3],p[3];
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
        y[i]=y[i]*x[i];
        z[i]=z[i]*x[i];
        p[i]=z[i]-y[i];
    }
    for(int i=0;i<t;i++)
    {
        printf("%d\n",p[i]);
    }
}

*/

//---------------------------------------------------------------------------------------------------------------------------------------

// WAY TO LONG 

/*
#include<stdio.h>
#include<string.h>
struct time {
    char y[100];
    int r;
};

void print(struct time g)
{
    if(g.r<10)
    {
        printf("%s\n",g.y);
    }
    else
    {
    for(int i=0;g.y[i]!='\0';i++)
    {
        if(i==0)
        {
            printf("%c",g.y[i]);
        }
        if(i==1)
        {
            printf("%d",g.r-2);
        }
        if(g.y[i+1]=='\0')
        {
            printf("%c\n",g.y[i]);
        }
        
    }
    }

}
void diff(struct time *g)
{
    scanf("%s",&g->y);
    
    g->r=strlen(g->y);
    
    
}
void main()
{
   
    int tt;
    

    scanf("%d",&tt);
    struct time t[tt]; 
    int i=0;
    while(i<tt)
    {
        
        
        diff(&t[i]);
        
        i++;
    }  
    i=0; 
    putchar('\n');
    while(i<tt)
    {
        
        
        print(t[i]);
        
        i++;
    }    


}
*/

//------------------------------------------------------------------------------------------------------------------------------------------


/*
// SUM OF ROUND NUMBERS
#include<stdio.h>
struct yes {
    int num;
    int round;
    int rem[5];
};
void input(struct yes *k)
{
    scanf("%d",&k->num);
}
void place(struct yes *k)
{
   
    int i=0;
    int j=10;
    for(i;i<5;i++)
    {
     
        k->rem[i]=k->num%j;
        k->num-=k->rem[i];
        
      
        j*=10;
    }
}
void taste(struct yes *k)
{
int i=0;
k->round=0;
for(i;i<5;i++)
{
    if(k->rem[i]!=0)
    k->round++;
}
i=0;
printf("%d\n",k->round);
for(i;i<5;i++)
{
    if(k->rem[i]!=0)
    printf("%d  ",k->rem[i]);
}

}
void main()
{

int i=0;
int tt;
scanf("%d",&tt);

struct yes g[tt];

while(i<tt)
{
    input(&g[i]);
    
    i++;
}

i=0;
while(i<tt)
{
    place(&g[i]);
    i++;
}
i=0;

while(i<tt)
{
    putchar('\n');
    taste(&g[i]);
    i++;

}


getchar();
}
*/

//--------------------------------------------------------------------------------------------------------------------------------------


/*
//   NEARLY LUCKY NUMBER
#include<stdio.h>
#include<string.h>
void main()
{
    int dig=0;
    char pp[50];
    gets(pp);
    int i=0,r;
    r=strlen(pp);
    for(i;i<r;i++)
    {
        if(pp[i]=='4')
        dig++;
        else if(pp[i]=='7')
        dig++;
    }
    if(dig==r)
    {
    printf("Yes");
    }
    else
    {
    printf("No");
    }
}

*/
//----------------------------------------------------------------------------------------------------------------------------------------