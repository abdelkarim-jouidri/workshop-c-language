#include <stdio.h>

int main(){
	float a,b;
	printf("tapper le 1er nombre entier :  ");
	scanf("%f",&a);	

	printf("tapper le 2ieme nombre entier :  ");
	scanf("%f",&b);
	
	printf("a-b = %f\na+b = %f\na*b = %f\na/b = %f\na%b = %d\n", a-b, a+b, a*b, a/b,(int)a%(int)b);
}
