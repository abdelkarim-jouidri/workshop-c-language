#include<stdio.h>
int main(){
    char *format1[8];
    char *format2[8];
    puts("enter le premier instant sous le format HH:MM:SS :  ");
    scanf("%s", format1);
    puts("enter le deuxieme instant sous le format HH:MM:SS :  ");
    scanf("%s", format2);
    int i = 0;
    int a;
    while( format1[i] != '\0' && format2[i] != '\0' && format1[i] == format2[i])
            i++;
            a = format1[i] - format2[i];
     a>0 ? printf("lformat 1 ghatji avant") : a == 0? printf("bhal bhal") : printf("lformat 2 ghatji avant");


}
