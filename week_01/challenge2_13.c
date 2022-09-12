#include<stdio.h>
#include<math.h>
int main(){
    float Xa, Xm, Ya, Ym, Xc, Yc, AM, AC, CM;

    puts("entrer les coordonnées des deux extremites : Xa , Xm , Ya , Ym respectivemnt :  ");
    scanf("%f%f%f%f", &Xa, &Xm, &Ya, &Ym);
    puts("entrer les coordonnées du point C : Xc , Yc respectivemnt :  ");
    scanf("%f%f", &Xc, &Yc);
//    printf("%f%f%f%f%f", Xa, Xm, Ya, Ym, Xc);

    AM = sqrt(pow(Xa,2)-pow(Xm,2)+pow(Ya,2)-pow(Ym,2));
    printf("%f", AM);
    AC = sqrt(pow(Xa,2)-pow(Xc,2)+pow(Ya,2)-pow(Yc,2));
    CM = sqrt(pow(Xc,2)-pow(Xm,2)+pow(Ym,2)-pow(Yc,2));
//    AM !=(AC+CM) ? printf("no9ta makayncach f segment") : printf("no9ta kayna f segment");
    printf("%f", AM);
}
