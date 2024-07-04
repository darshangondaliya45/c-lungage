#include <stdio.h>
#include <ctype.h>

int main(){

    char str[100] = "hello world";

    puts(str);

    for(int i=0; str[i]!='\0';i++){

        str[i] = toupper(str[i]);
    }

     puts(str);
}