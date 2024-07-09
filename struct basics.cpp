#include <stdio.h>
#include <string.h>


struct {

    int roll;
    char name[50];
    float marks;

} student1;


int main(){

    student1.roll = 06;
    strcpy(student1.name,"Darshan");
   student1.marks = 250.5;

   printf("%d\n%s\n%f",student1.roll,student1.name,student1.marks);


return 0;
}