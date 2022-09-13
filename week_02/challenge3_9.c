#include<stdio.h>
int main(){
	int n, N, i=0, res = 1;
	scanf("%d%d", &N,&n);
	
	while(i++<n){
		res *= N;
	}
	printf("%d^%d = %d", N,n,res);
}
