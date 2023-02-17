/* Write a program to chech entered alphabate is vovel or not using swich- case statement */
#include<stdio.h>
void main()
{
    char a;
    printf("Enter an alphabate ");
    scanf("%c",&a);
    if((a>='a'&& a<='z') || (a>='A'&& a<='Z') )
    {
        switch (a)
        {
        case 'a':
            printf("%c is vovel",a);
            break;
        case 'e':
            printf("%c is vovel",a);
            break;
        case 'i':
            printf("%c is vovel",a);
            break;
        case 'o':
            printf("%c is vovel",a);
            break;
        case 'u':
            printf("%c is vovel",a);
            break;
        case 'A':
            printf("%c is vovel",a);
            break;
        case 'E':
            printf("%c is vovel",a);
            break;
        case 'I':
            printf("%c is vovel",a);
            break;
        case 'O':
            printf("%c is vovel",a);
            break;
        case 'U':
            printf("%c is vovel",a);
            break;
        
        default:
            printf("%c is not a vovel",a);
            break;
        }

    }
    else 
    {
        printf("Invalid Input");
    }

getchar();
}