/*Write a program which take name and marks of two students
and display the name of student having higher marks. Create a 
structure in the program to store data of students*/
#include<stdio.h>
struct stu
{
    char name[20];
    float marks;
};
void main()
{
  struct stu x1,x2;
  printf("Enter 1st  student name  ");
  gets(x1.name);
  printf("Enter 2nd  student name  ");
  gets(x2.name);
  printf("\n Enter 1st and 2nd student marks  ");
  scanf("%f %f",&x1.marks,&x2.marks);
  if(x1.marks>x2.marks)
  {
    printf("\n %s has higher mark",x1.name);
  }
  else if(x1.marks<x2.marks)
  {
      printf("\n %s has higher mark",x2.name);
  }
  else{
    printf("\n BOth have equal marks");
  }
getchar();
}
