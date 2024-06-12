#include<stdio.h>
#include<string.h>
int main()
{
    char  s[]={'s','h','a','n','t','u'};

    for(int i=0;s[i+1]!='\0';i++)
    {
        printf("%c\t",s[i]);

    }
    char str[22];
    printf("len : %d\n",strlen(str));
   // scanf("%[^\n]s",str);
   gets(str);
   puts(str);
    //printf("%s\n",str);
    printf("len : %d\n",strlen(str));

    for(int i=0;i<strlen(str);i++)
    {
        printf("%c",*(str+i));
    }
    return 0;
}