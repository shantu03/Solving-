#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
printf("%ld",atol("10101"));		//atol used to convert given string into long value							//-> %ld=long  && %lu=unsigned long


printf("\n%lld",atoll("101011"));  	//atoll("string") used to convert string to long long value

printf("\n%ld",strtol("10101",NULL,2));
/*		 strtol("string",endptr,base)   we are using this to get string to number*/ 


char arr[]="010101";
char *temp;
temp=&arr;
printf("\n");
for(int i=0;i<sizeof(arr);i++)
{
printf("\t %c",arr[i]);
}
memcpy(arr,&arr[1],6);

printf("\n%s  -- %d \n",arr,sizeof(arr));
&arr[sizeof(arr)]=temp;
for(int i=0;i<sizeof(arr);i++)
{
printf("\t %c",arr[i]);
}

printf("\n\nEND OF THE PROGRAM");
return 0;
}