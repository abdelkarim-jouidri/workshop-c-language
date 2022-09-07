#include <stdio.h>
int main(){
	float F, C;
	printf("entrer une temperature en Fahrenheit \n");
	scanf("%f",&F);
	C = (F-32)/1.8;
	printf("%0.2f °F est %0.2f en Celsius", F, C);
}
