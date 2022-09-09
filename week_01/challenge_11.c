#include <stdio.h>
#include <math.h>
int main(){
	float W,L, rect;
	puts("enter la longueur et la largeur respectivement en metre: \n");
	scanf("%f%f", &L,&W);
	rect = 2*(L+W);
	printf("la circonference d'un rectancle d'une largeur = %.2fm et une longueur = %.2fm est : %.2fm ", L,W, rect);
}
