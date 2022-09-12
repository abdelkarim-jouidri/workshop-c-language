#include<stdio.h>
int main(){
    float note;
    puts("enter la note de l'eleve");
    scanf("%f", &note);
    if(note<10) printf("l'eleve est recale");
    else if (note>=10 && note < 12) printf("la mention est passable");
    else if (note>=12 && note < 14) printf("la mention est assez bien");
    else if (note>=14 && note < 16) printf("la mention est bien");
    else  printf("la mention est tres bien");

    return 0;
    }

