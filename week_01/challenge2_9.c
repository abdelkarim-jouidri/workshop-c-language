#include <stdio.h>
int main(){

    char var ;
    puts("enter un caractere : ");
    scanf("%c", &var);
    var = (int)var;
    printf("var  = %d", var);
    (65<=var && var<=90) || (97<=var && var<=122)?
        printf("le caractere %c est un alphabet", var) :
        printf("le caractere %c n'est pas un alphabet", var);
     return 0;
}
