#include<stdio.h>
void echanger(int , int);
int main(){
	int a = 1;
	int b = 2;
	printf("avant echanger : a = %d | b = %d\n", a,b);
	echanger(a,b);
}
void echanger(int a, int b){
	int c;
	c = a;
	a = b;
	b = c;
	printf("apres echangement a = %d | b = %d", a,b);
}
