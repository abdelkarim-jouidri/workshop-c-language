#include <stdio.h>
int main(void){
	float temperature_F;
	float temperature_C;
	printf("enter a value of temperature in Celsius : ");
	scanf("%f", &temperature_C);
	temperature_F = (temperature_C*1.8)+32;
	printf("your temperature in Fahrenheit is : %0.3f °F ", temperature_F);
}
