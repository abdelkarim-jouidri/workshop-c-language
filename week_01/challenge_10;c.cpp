#include <stdio.h>
#include <math.h>
int main(){
	float R, circ;
	puts("enter une valeur pour le rayon en metre: \n");
	scanf("%f", &R);
	circ = M_PI*R;
	printf("la circonference d'une cercle d'un rayon = %.2fm est : %.2fm ", R, circ);
}
