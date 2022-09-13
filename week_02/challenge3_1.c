#include<stdio.h>
int main(){
	int num, i;
	puts("enter un nombre entier :");
	
	scanf("%d", &num);
	for(i = 1; i<=10 ; i++){
		printf("%d x %d = %d\n", num, i, num*i);
	}
}
