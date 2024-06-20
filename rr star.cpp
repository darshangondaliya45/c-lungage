#include<stdio.h>
 int main(){
 	int rows=5;
 	
 	 for(int i=0;i<rows;i++){
 	 	for(int j=0;j<rows;j++){
 	 		if(j<i){
 	 			printf(" ");
 	 		
			  }else{
			  	printf("%d",j+1);
			  }
 	 	
		  }printf("\n");
	  }
 }