#include<stdio.h>

int sum(int a,int b,int c,int d,int e){
	int result=a+b+c+d+e;
	
	return result;

}

int main(){
	
	int a;
	int b;
	int c;
	int d;
	int e;
	
	printf("Enter your marks:\n");
	 
	 
	 printf("English:- ");
	 scanf("%d",&a);
	 
	  printf("Gujarati:- ");
	 scanf("%d",&b);
	 
	  printf("History:- ");
	 scanf("%d",&c);
	 
	  printf("Computer:- ");
	 scanf("%d",&d);
	 
	  printf("Sanskrit:- ");
	 scanf("%d",&e);
	 
	 int add =sum(a,b,c,d,e);
	 
	 printf ("your total marks is :-  %d\n",add);
	 
	 int par = add/5;
	 printf("your parcentile= %d",par);
	 
	 return 0;
	 
}