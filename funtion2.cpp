#include<stdio.h>

int sum(int x){
	int result=x*x;
	
	return result;

}

int main(){
	
	int a;
	 
	 printf("Give A value :-");
	 scanf("%d",&a);
	 
	 int add =sum(a);
	 
	 printf (" Area of square= :-%d",add);
	 
	 return 0;
	 
}