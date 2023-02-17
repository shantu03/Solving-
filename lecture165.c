// Pre processor-- Macro expansion
// this make easy understanding of the programs
#include<stdio.h>
#define AND && //1st
#define OR ||   //2nd
#define condition (a>10 AND a<40)   //3rd
#define Hello printf("\nTHis is awesome"); //4th
#define area(x) (3.147 * x * x) // 5th 
#define LOOP for(int i=0;i<10;i++)\              //6th -- check this description  below
{\
printf(" %d\t",i);\
}
void main()
{

//--------------------------------------------------------------------
//this is for 6th 

LOOP
/*In 6th if you want to add more lines to #define macro expansion type then use "\" this where you want to add line 
the you can add line. for ex chech above */

//------------------------------------------------------------------------

// this is for 5th 
printf("\n Enter radius of the two circle");
float r1,r2;
scanf("%f %f",&r1,&r2);
printf("\n THe result is %f and %f",area(r1),area(r2));


//-----------------------------------------------------------------------------

// This is for 4th

Hello
Hello

//--------------------------------------------------------------------------------
    //This is for 3no.

    int a;
    printf("\n\n ENter number between 10 and 40");
    scanf("%d",&a);
 if(condition)
    {
        printf("\n very good  is a number ");}
   else
   {
    printf("\nENtere is worng");
   }

//----------------------------------------------------------------------------------
//THis is for 1st and 2nd number

    printf("\nENter a letter ");
    char c;
    scanf("%c",&c);
    if((c>='a' AND c<='z') OR (c>='A' AND c<='Z'))
    printf("\n itt is a letter");
     
    else 
    printf("\n IT is not a letter");

 //---------------------------------------------------------------------------------------- 
}