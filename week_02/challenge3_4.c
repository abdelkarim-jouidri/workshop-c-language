#include<stdio.h>
int main(){
	int num, sum = 0, max = 0;
	while(1){
		printf("please enter an integer : ");
		scanf("%d", &num);
		if(num >= 100) continue;
		if(num == 0) break;
		sum += num;
		max = (max>num)? max : num;		
	}
	printf("sum = %d | max = %d", sum, max);
}
