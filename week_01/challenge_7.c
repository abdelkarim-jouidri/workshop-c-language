#include <stdio.h>
int main(){
	long int a,b;
	printf("tapper le 1er nombre entier :  ");
	scanf("%ld",&a);	

	printf("tapper le 2ieme nombre entier :  ");
	scanf("%ld",&b);
	
	printf("a-b = %ld\na+b = %ld\na*b = %ld\na/b = %ld\na%b = %ld\n", a-b, a+b, a*b, a/b, a % b);
}
