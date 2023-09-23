// structure start
#include<stdio.h>
struct class{
    int roll;
    float mark;
    char grade;
};

void main()
{
    struct class cs;
    cs.roll=01;
    cs.mark=77;
    cs.grade='A';
   /* cs.roll=02;
    cs.mark=47;
    cs.grade='C';
    cs.roll=03;
    cs.mark=73;
    cs.grade='A';*/
    
    struct class it;
    it.roll=01;
    it.mark=97.88;
    it.grade='A';
    /*it.roll=02;
    it.mark=44.88;
    it.grade='B';
    it.roll=03;
    it.mark=47.88;
    it.grade='c';*/
    
    printf("%d & %f & %c \n",cs.roll,cs.mark,cs.grade);
    printf("%d & %f & %c \n",it.roll,it.mark,it.grade);

    getchar();

}