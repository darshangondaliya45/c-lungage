#include<stdio.h>
#include<string.h>
int main(){
	
	char str1[100];
	char str2[100];
	
	printf("Enter 1st string :");
	gets(str1);
	printf("Enter 2nd string :");
	gets(str2);
	
	strcat(str1,str2);
	
	printf("concatinate string :");
	puts(str1);
	
}