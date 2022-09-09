#include <stdio.h>
int main(){
	int var1, var2;
	puts("enter deux nombres entiers : ");
	scanf("%d%d", &var1, &var2);
	(var1!=var2) ? printf("%d", var1+var2) : printf("%d", 3*(var1+var2)) ;
}
