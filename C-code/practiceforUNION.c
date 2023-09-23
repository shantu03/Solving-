/*write a program such that take 5 randon letter  by user and  arrange them in alphabetecal order
, BUT you have to use function, pointer, union, array
#include<stdio.h>
#include<string.h>
struct letter
{
    char a[6];
};
void arr();
void main()
{
   struct letter aa[6];
   for(int i=0;i<5;i++)
   {
    printf("ENter a letter \t ");
   scanf("%c",aa->a[i]);
   }
   for(int i=0;i<5;i++)
   {
    printf("Its is %c",aa->a[i]);
   }
    getchar();
}

#include<stdio.h>
struct letter 
{
    int num;
    char let;

}; 
void main()
{
    struct letter a[5], *ptr;
    ptr=a;
    for(int t=0;t<5;t++)
    {
     printf("\n Enter roll and name :");
        scanf("%d %s",&ptr->num,&ptr->let);
    ptr++;
}
ptr=a;
char max1=ptr[0];
char max2;
    for(int t=1;t<5;t++)
    {
        
        if(max1<ptr[t])
        {
            max2=max1;
            max1=ptr[t];

        }
    
    }
    getchar();
}
*/ 
// I still cant do this program, i need more practice then i come back solve this program
// Now i do this program like a can now 
#include<stdio.h>
void main()
{
    char a[6];
    for(int i=0;i<5;i++){
    printf("ENter 5 letters \t");
    scanf("%c",a[i]);}
    char max1,max2,max3,max4,max5;
    max1=a[0];
    for(int i=1;i<5;i++)
    {
        if(max1<a[i])
        {
            max2=max1;
            max1=a[i];
            a[i]=0;

            if(max2<a[i])
        {
            max3=max2;
            max2=a[i];
            a[i]=0;

            if(max3<a[i])
        {
            max4=max3;
            max3=a[i];
            a[i]=0;

            if(max3<a[i])
        {
            max4=max3;
            max3=a[i];
            a[i]=0;

            if(max4<a[i])
        {
            max5=max4;
            max4=a[i];
            a[i]=0;
        }
        }
        }
        }
        }
        
        
        
        
    }
    printf("\n Order is %c %c %c %c %c",max1,max2,max3,max4,max5);
    getchar();
}