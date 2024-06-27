#include <stdio.h>

int main(){


   int row,col;

   printf("Enter row size : ");
   scanf("%d",&row);

   printf("Enter Col size : ");
   scanf("%d",&col);

   int arr[row][col];

   for(int i=0;i<row;i++){

        for(int j=0;j<col;j++){
            printf("Enter the value of arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }

   }

      for(int i=0;i<row;i++){

        for(int j=0;j<col;j++){

            printf("%d",arr[i][j]);
        }

   }



   return 0;
}