#include <stdio.h>
int main(){
    float num;
    puts("enter un nombre : ");
    scanf("%f", &num);

    num > 0 ? printf("%.1f est positif",num) : num < 0 ? printf("%.1f est negatif", num) : printf("%.0f egal a zero", num);
    return 0;
}
