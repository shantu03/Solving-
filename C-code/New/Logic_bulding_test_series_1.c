
//print prime number in given range

#include <stdio.h>

int main() {
    // Write C code here

    
    int start;
    int end;
    scanf("%d %d\n",&start,&end);

for(start;start<=end;start++)
{
    int count=0;
        int m=start/2;
        for(int j=1;j<=m;j++)
        {
            if(start%j==0)
            {
                count++;
            }
        }
        
    
    if(count==1)
    {
        printf("%d\n",start);
    }
    
}
    return 0;
}