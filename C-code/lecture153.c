/*UNION 
diffrent betn union and structure is size of union 
UNION take largest available variable size as size
whereas in STRUCTURE take addition of  avaliable variable as size

Actually union store current value whereas strcuture store all value declared 
*/
#include<stdio.h>
union test  
{
    char x;
    int y;
    float z;
};
void fun();
void main()
{
    fun();
union test t;
t.x='y';
printf("\n\n%c ",t.x);
t.y=33;
printf("\n%d",t.y);
t.z=453.44;
printf("\n%f",t.z);
printf("\n%c",t.x); 
t.x='a';
t.z=4.44;
t.y=83;
// HEre we assign and decraration at different times
printf("\n\n%c ",t.x);
printf("\n%d",t.y);
printf("\n%f",t.z);
// as you can see in the O/P garbage value came up
getchar();
}
void fun()
{
    union test u;
    printf("\n ENter any letter then number then decimal number  ");
    scanf("%c %d %f",&u.x,&u.y,&u.z);
    printf("\nThis is result %c\t %d\t %f",u.x,u.y,u.z);
}