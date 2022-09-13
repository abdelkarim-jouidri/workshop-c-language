#include<stdio.h>
int main(){
	int N, i, j, mod;
	int prime = 1; // we suppose the number is a prime number
	printf("enter an integer : ");
	scanf("%d",&N);
	for(i=2; i<N ; i++){
		int prime = 1; // we suppose the number is a prime number
		for(j=2; j<i ; j++)
		{
			mod = i%j;
			if(mod == 0){
				prime = 0;
				break;
  				}
				            			
		  }
	prime == 1 ? printf("%d\n",i) : printf("");
		}
}                   

