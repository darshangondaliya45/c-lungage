#include <stdio.h>

void add(int **a,int**b){

    **a = **a + 20;
    **b = **b + 15;
}


int main(){

    int x = 10;
    int y = 25;

    int *px = &x;
    int *py = &y;


    int **ppx = &px;
    int **ppy = &py;

    printf("Before addition : ");

    printf("x = %d\n",x);
    printf("y = %d\n",y);


    add(ppx,ppy);

    printf(" after addition x = %d\n ",x);

    printf(" after addition y = %d\n ",y);



return 0;
}