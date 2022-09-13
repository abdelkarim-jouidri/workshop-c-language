#include <stdio.h>
int main(){
	int N, i = 0, reverse = 0, New;
	
	scanf("%d",&N);
	New = N; // we store the number in a variable that will change over time 
	while(New>0){
		// we iterate over the new number
		reverse = (reverse*10) + New%10;
		New = New/10;
	}
	printf("%d --------> %d",N, reverse);
}
