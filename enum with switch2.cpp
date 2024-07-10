#include <stdio.h>
#include <string.h>


enum year {jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};


int main(){


    for(int month = jan; month <=dec; month++){

       

        switch(month){
            case jan : printf("January :\n");
            break;
            case feb : printf("Febuary :\n");
            break;
            case mar : printf("March :\n");
            break;
            case apr : printf("April :\n");
            break;
            case may : printf("May :\n");
            break;
            case jun : printf("June :\n");
            break;
            case jul : printf("July :\n");
            break;
            case aug : printf("August :\n");
            break;
            case sep : printf("Septmeber :\n");
            break;
            case oct : printf("October :\n");
            break;
            case nov : printf("November :\n");
            break;
            case dec : printf("December :\n");
            break;


        }

    }


return 0;
}