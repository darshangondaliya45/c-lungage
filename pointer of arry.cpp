#include <stdio.h>


int main(){

   int a[5] = {5,4,3,2,1};

   int *p[5],i;

   for(i=0; i<=4;i++){

        p[i] = &a[i];

   }

   // p[5] = {5,4,3,2,1};

   for(i=0;i<=4;i++){

    printf("%u => %d\n",p[i],*p[i]);

   }


return 0;
}