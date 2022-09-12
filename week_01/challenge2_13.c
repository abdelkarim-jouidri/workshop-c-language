#include<stdio.h>
#include<math.h>
int main(){
    float Xa, Xm, Ya, Ym, Xc, Yc, AM, AC, CM;

    puts("entrer les coordonnées des deux extremites : Xa , Xm , Ya , Ym respectivemnt :  ");
    scanf("%f%f%f%f", &Xa, &Xm, &Ya, &Ym);
    puts("entrer les coordonnées du point C : Xc , Yc respectivemnt :  ");
    scanf("%f%f", &Xc, &Yc);
//    printf("%f%f%f%f%f", Xa, Xm, Ya, Ym, Xc);

    AM = sqrt(pow((Xa-Xm),2)+pow((Xa-Xm),2));
    AC = sqrt(pow((Xa-Xc),2)+pow((Xa-Xc),2));
    CM = sqrt(pow((Xc-Xm),2)+pow((Xc-Xm),2));
    AM !=(AC+CM) ? printf("le point C appartient au segment AM") : printf("le point C appartient au segment AM");

}
