#include<stdio.h>
int main(){
    float year, month, day, hour, min, sec;
    puts("enter number of years : ");
    scanf("%f", &year);
    month = year * 12;
    day = year * 365;
    hour = year *8760;
    min = year * 525600;
    sec = year * 31540000;
    printf("%.2f year(s) has %.2f months , %.2f days , %.2f hours , %.2f minutes and %.2f seconds  "
           , year, month, day, hour, min, sec);

    return 0;
}
