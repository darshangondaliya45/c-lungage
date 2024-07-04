#include<stdio.h>

int main(){
	char str[]="Hello,World!";
	int i=0;
	
	printf("Original string:%s\n",str);
	
	while(str[i] !='\0'){
		if(str[i]>='a'&& str[i] <='z'){
			str[i] = str[i]-'a'+'A';
		}
		i++;
	}
	printf("Uppercase String:%s\n",str);
}