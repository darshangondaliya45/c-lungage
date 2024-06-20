#include <stdio.h>


int main(){

     int rows = 7;


     for(int i=1;i<=rows;i++){ 

        for(int j=1;j<=rows;j++){ 


            
           if(i == j || i+j == rows + 1 || i==1 || i==rows || j == 1 || j==rows){

            printf("* "); 

           }else{
               printf("  "); 
           }

        }

        printf("\n");
     }


    return 0;
}