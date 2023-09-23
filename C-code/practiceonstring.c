// 1] We are going to concatenate( merge two string with each other ) == merge();
//2] Reverse a sentence ==revsentence();
//3] TO calculate the frequency of certain character in string == frequency();
// 4] Find number of novel,constant,digit,and white space == try();
//5] Remove all character in string execpt alphabet
#include<stdio.h>
#include<string.h>
void merge();
void revsentence();
void frequency();
void try();
void alpha();

void main()
{

 alpha();
 try();
 merge();
 revsentence();
 frequency();
  
    getchar();
}
void merge()
{
    char a[20]="SHANTANU ",b[20]="HULWAN";
    int t=0,r=0;
    while(a[t]!='\0')                                   /*for(t=0;a[t]!='\0') -- THis command will not work so we are taking while*/
    {
        t++;
    }
    

    
    while(b[r]!='\0')                                    /*for(r=0;b[r]!='\0';r++,t++){         a[t]=b[r];           }*/
   
    {
        a[t]=b[r];
        t++;
        r++;
    }
    a[t]='\0';
    puts(a);
}
void revsentence()
{
    char uu[100];
    printf("\n Enter a sentence  ");
    gets(uu);
    printf("\n%s\n",strrev(uu));
    
    
    // follow program also work as same
    /*#include <stdio.h>
void reverseSentence();
int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}*/
}
void frequency()
{
    char pp[100], cha;
    printf("\n ENter a sting to find frequency\n");
    gets(pp);
    int i,count=0;
    printf("Enter a letter to find its frequency\n");
    scanf("%c",&cha);
    for(i=0;pp[i]!='\0';++i)
    {
        if(cha==pp[i])
        count++;
    }
    printf("\nFrequency of %c is %d",cha,count);
}
void try()
{
    char hh[50],n,c,d,ws;
    int no,nn=0,cc=0,dd=0,wws=0;
    printf("Enter a sentence to find its novel,constant,digits,and white spaece \n");
    gets(hh);
    for(no=0;hh[no]!='\0';no++)
    {
        if(hh[no]=='a'||hh[no]=='A'||hh[no]=='e'||hh[no]=='E'||hh[no]=='i'||hh[no]=='I'||hh[no]=='o'||hh[no]=='O'||hh[no]=='u'||hh[no]=='U')
        {
            nn++;
        }
        else if((hh[no]>='a'&& hh[no]<='z') || (hh[no]>='A'&& hh[no]<='Z'))
        {
            cc++;
        }
        else if(hh[no]>='0'&&hh[no]<='9')
        {
            dd++;
        }
        else if(hh[no]==' ')
        {
            wws++;
        }
    }
    printf("\n Constant = %d \n Digit = %d \n Novel = %d \n White space = %d \n",cc,dd,nn,wws);
}
void alpha()
{
    char qq[50];
    printf("\nEnter sentence where we remove all characters expect alphabet  ");
    gets(qq);
    printf("\n");
    for(int i=0;qq[i]!='\0';i++)
    {
        if((qq[i]>='a'&&qq[i]<='z')||(qq[i]>='A'&&qq[i]<='Z')||(qq[i]==' '))
        {
            printf("%c",qq[i]);
        }
    }
    printf("\n");

}