#include<stdio.h>
int main(){
	int n, i, res, prev = 1, next = 1;
	printf("entrer une indexe : ");
	scanf("%d", &n);
	if(n==1 || n==2) res = 1;
	for(i=3 ; i<=n ; i++){
		res = prev + next;
		prev = next; // switch the order
		next = res;
	}
	printf("%d",res);
}
