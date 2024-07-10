#include <stdio.h>
#include <string.h>


struct Student{

    int roll;
    char name[50];
    float marks;

};


int main(){

   struct Student student[3];

   for(int i=0;i < 3;i++){

        printf("Enter your details: \n ");

        printf("Roll : ");
        scanf("%d",&student[i].roll);

        printf("Name : ");
        scanf("%s",&student[i].name);

        printf("marks : ");
        scanf("%f",&student[i].marks);

        printf("\n");
   }



   for(int i = 0; i < 3; i++){

    printf("Student %d\n", i+1);
    printf("Name : %s\n",student[i].name);
     printf("Roll : %d\n",student[i].roll);
      printf("Marks : %f\n",student[i].marks);
      printf("\n");

   }




return 0;
}