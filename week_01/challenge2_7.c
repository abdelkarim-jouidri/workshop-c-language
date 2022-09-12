#include <stdio.h>
int main(){
    char c;
    puts("enter un alphabet pour tester : ");
    scanf("%c",&c);
    if(c>=65 && c <= 90) printf("l'alphabet %c est majiscule", c);
    else printf("l'alphabet %c est minuscule",c);
    return 0;
}
