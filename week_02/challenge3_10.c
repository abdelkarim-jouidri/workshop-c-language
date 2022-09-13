#include <stdio.h>
int main(){
	int N , i = 0, sum =0;
	while(i < 10){
		i++;
		scanf("%d", &N);
		if(N<0) continue;
		sum += N;
	}
	printf("le somme est : %d",sum);
}
