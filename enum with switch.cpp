#include <stdio.h>
#include <string.h>


enum year {jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};


int main(){


       enum year month = jul;

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
            case jul : printf("This is the month for monsoon, July :\n");
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


return 0;
}