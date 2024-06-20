#include <stdio.h>

int main(){
	int A1, B2,temp;
	 
	 scanf("%d",&A1);
	 scanf("%d",&B2);
	 

	 temp = A1;
	 A1 = B2;
	 B2 = temp;
	 printf("Reverse Value A1 :-%d\n",A1);
	 printf("Reverse Value B2 :-%d\n",B2);
	 
}