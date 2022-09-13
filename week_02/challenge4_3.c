#include <stdio.h>
#include <stdbool.h>
bool isPrime(int);
int main(){
	int i ;
	isPrime(11) ? printf("prime") : printf("non prime");
}

bool isPrime(int a){
	int i, mod;
	bool status = 1;
	for(i=2; i<a; i++){
		mod = a%i;
		if(mod == 0){
			status = 0;
			break;
		}
	}
	return status;
}
