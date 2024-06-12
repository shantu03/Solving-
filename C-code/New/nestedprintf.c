#include <stdio.h>

int main() {
    // Write C code here

    
    int i=21,j=111,k=1234;
    int l,m;
    l=printf("%d,%d",printf("%d",i),printf("%d",j));
    m=printf("\n%d,%d",printf("%d\n",k),printf("\t%d",l));
    printf("\ne=%d",m);

    return 0;
}