#include <stdio.h>
int main(){
	int nombre;
	puts("enter un nombre entier : ");
	scanf("%d", &nombre);
	printf("la valeur en decimal est : %d \n la valeur en octal est : %o \n la valeur en Hexadecimal est : %X", nombre, nombre, nombre);
}
