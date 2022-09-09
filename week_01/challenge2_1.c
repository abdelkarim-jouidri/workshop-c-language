#include <stdio.h>
int main(){
	int number;
	puts("Enter a integer number : ");
	scanf("%d", &number);
	(number%2==0)? printf("%d is an even number", number) : printf("%d is an odd number", number);
}
