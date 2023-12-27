#include<stdio.h>
int main(){
int a[4][5]={{1, 2, 3, 4, 5},
{6, 7, 8, 9, 10},
{11, 12, 13, 14, 15},
{16, 17, 18, 19, 20}};
printf("%d\n",*(*(a+**a+2))+3);
printf("%d\n",*(*a+3)+2);
printf("%d\n",**a+3);
printf("%d\n",*(*(a+3)+3));
printf("%d\t%d\n",*(*a+9),*(*(a+1)+4));
printf("%d\t%d\t%d\t\n%d\t%d\n",*(*a+18),*(*a+10)+8,*(*(a+**a+2)+3),*(a+3)+3),&a[3][3];
printf("%d\n",*(*a+2));
return 0;
}