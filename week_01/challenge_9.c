#include <stdio.h>
#include <math.h>
int main(){
	float x1, x2, y1, y2, dist;
	puts("enter les coordonnées x1 et x2 : \n");
	scanf("%f%f", &x1, &x2);
	
	puts("enter les coordonnées y1 et y2 : \n");
	scanf("%f%f", &y1, &y2);
	dist = sqrt((pow(x1-x2,2)) + (pow(y1-y2,2)));
	printf("la distance entre les deux point est : %f", dist);
}
