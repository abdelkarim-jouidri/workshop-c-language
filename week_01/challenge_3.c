#include <stdio.h>
int main(){
	float mile , km;
	printf("enter la distance en kilometre\n ");
	scanf("%f",&km);
	mile = km*1/1.609;
	
	printf("votre distance en mile est : %f", mile);
	
}
