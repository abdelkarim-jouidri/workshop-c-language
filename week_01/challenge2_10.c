#include <stdio.h>

int main(){

    char date [10];
    char *mois[] = {"janvier", "fevrier", "mars", "avril", "mai", "juin", "juillet", "aout", "septembre", "octobre", "novembre", "decembre"};
    puts("enter une date : ");
    scanf("%s", date);
    char i = date[3];
    if(i  == '0')
    printf("%c%c-%s-%c%c%c%c",date[0],date[1],mois[(int)i-48],date[6],date[7],date[8],date[9]);

    else if (i == '1'){
        char index = date[4];
        printf("%c%c-%s-%c%c%c%c",date[0],date[1],mois[(int)index-39],date[6],date[7],date[8],date[9]);

    }
}

