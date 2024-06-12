#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int arr[3][4];

  for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
  {
    for(int j=0;j<sizeof(arr[0])/4;j++)
    {
      *(*(arr+i)+j)=rand()%45+1;
    }
  }

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
  {
    for(int j=0;j<sizeof(arr[0])/4;j++)
    {
      printf("%-03d ",arr[i][j]);
    }
    printf("\n");
  }

  printf("\n\n\n");

  printf("address of1 arr = %u %u %u\n",arr,*arr,arr+2);
  printf("address of arr = %u %u %u\n",*(*arr),(*(arr+2)+3),*(arr+2));

  printf("\n\n\n");

  char c[]="isrocsit21";
  char * p=c+2;
  p++;
  printf("%s",p);

  
  return 0;
}