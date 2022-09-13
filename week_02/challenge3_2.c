#include<stdio.h>
int main(){
	int num, i, j ,k;
	puts("entrer un nombre entier : ");
	scanf("%d", &num);
	for(i=1; i<=num ; i++){
		
		for(j=0 ; j<num-i; j++){
			printf(" ");
			}
			
		for(k=0 ; k<2*i-1 ; k++){
		
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
