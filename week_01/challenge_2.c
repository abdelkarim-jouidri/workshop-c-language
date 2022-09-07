#include <stdio.h>
int main(void){
	float temperature_F;
	float temperature_C;
	printf("enter a value of temperature in Fahrenheit : ");
	scanf("%f", &temperature_F);
	temperature_C = (temperature_F - 32)* 1/1.8 ;
	printf("your temperature degree in Celsius i : %f °C ", temperature_C);
}
