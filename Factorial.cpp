#include <stdio.h>

int fact(int num){


   if(num > 1){

    return num *fact(num -1);


   }

}


int main(){


    int x = 3;


    int y = fact(x); // 3

    printf("%d %d",x , y);


    return 0;

}