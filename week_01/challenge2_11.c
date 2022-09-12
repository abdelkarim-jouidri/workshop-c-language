#include<stdio.h>
#include<math.h>
int main(){
    char *WEEK[] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    int integer;
    int random = rand()%6;
    printf("%s", WEEK[random] );

}
