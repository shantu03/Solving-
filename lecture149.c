/*HEre we are going to learn why we put struction in above the main function
Because we put strct in Enternal type intilization */

// Fir bhi ham dekhenge ki kya hota he agar ham strcution main funciton ke andar likhate he !!
#include<stdio.h>
// void try();
void main()
{
    struct yy
{
    char name[20];
    char mobile[11];
    int rollno;

};
    struct yy a={"Pratham Atigre","9392039200",01};
   
      printf("\n Name %s, Mobile no. %s , Roll no. %d",a.name,a.mobile,a.rollno);
     
     struct yy b;                           // when we dont initilize the structure then it store itself with garbage value
     printf("\n%s and %s and %d",b.name,b.mobile,b.rollno);

    // try();
getchar();
}
// THis show us error with size of s is not declared because we use automatic storage class
/*void try()
{
 struct yy s={"Shantanu Hulwan","9022601231",11};
printf("\n Name %s, Mobile no. %s , Roll no. %d",s.name,s.mobile,s.rollno);
}*/