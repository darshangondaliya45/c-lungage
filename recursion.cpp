#include <stdio.h>
                 // 3
void counter(int count){

    printf("%d\n",count); // 5 , 4 , 3

    if(count > 1){

        count = count -1; // 3

                // 3
        counter(count);
    }

}


int main(){


    counter(5);

    return 0;

}