#include <stdio.h>
#include <stdlib.h>
int main(){
	int number, i , mod;
	int prime = 1; // prime == 1 ----> prime number , prime == 0 -----> non-prime number
	printf("enter a prime number : ");
	scanf("%d", &number);
	for(i = 2; i<number ; i++){
		mod = number % i;
		if(mod == 0){
			prime = 0; // switching the status
			break;
		}
	}
	prime == 1 ? printf("%d is a prime number", number) : printf("%d is not a prime number", number);
	}

