#include <stdio.h>
int main(){
	float a, b, c, d, avr, sum;
	printf("entrer le premier nombre : ");
	scanf("%f",&a);
	printf("entrer le 2ieme nombre : ");
	scanf("%f",&b);
	printf("entrer le 3ieme nombre : ");
	scanf("%f",&c);
	printf("entrer le 4ieme nombre : ");
	scanf("%f",&d);
	sum = a+b+c+d;
	avr = (a+b+c+d)/4;
	printf("la moyenne est : %0.1f\nla somme est : %0.1f",avr, sum);
	
}
