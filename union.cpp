#include <stdio.h>
#include <string.h>

union Person{

    int age;
    int salary;

};



int main(){

    union Person person;

      person.salary = 30;
    person.age = 35;


    printf("%d\n",person.age);
    printf("%d\n",person.salary);


return 0;
}