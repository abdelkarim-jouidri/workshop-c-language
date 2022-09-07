#include <stdio.h>
int main(){
	float mile , km;
	printf("enter la distance en mile\n ");
	scanf("%f",&mile);
	km = mile*1.609;
	
	printf("votre distance en kilometre est : %f", km);
	
}
