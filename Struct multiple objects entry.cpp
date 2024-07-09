#include <stdio.h>
#include <string.h>


struct Student{

    int roll;
    char name[50];
    float marks;

};


int main(){

   struct Student student[3] = {

    {06,"Darshan",400.50},
    {07,"Aman",300.50},
    {01,"Farid",550.50}

   };

   for(int i = 0; i < 3; i++){

    printf("Student %d\n", i+1);
    printf("Name : %s\n",student[i].name);
     printf("Roll : %d\n",student[i].roll);
      printf("Marks : %f\n",student[i].marks);
      printf("\n");

   }




return 0;
}