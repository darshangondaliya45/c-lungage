#include <stdio.h>
#include <string.h>


int main(){


    char str2[100] = "Darshan";
    char str1[100] = "Darshan";

    int result = strcmp(str2,str1);


    if(result==1){
        printf("Two strings are not same");
    }else{
	

        printf("Two strings are same"); 

    }


   return 0;
}