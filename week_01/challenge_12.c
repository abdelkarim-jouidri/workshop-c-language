#include <stdio.h>
int main(){
	int number, first, second, last;
	puts("enter un nombre entier à trois chiffre pour inverser : ");
	scanf("%d", &number);
	first = number % 10;
	second = (number/10)%10;
	last = number / 100;
	
	printf("votre nombre inverse est : %d ", first*100 + second*10 + last);
	
}
