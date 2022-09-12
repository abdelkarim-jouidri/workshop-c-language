#include<stdio.h>
int main(){
	int i = 0, diff;
	char date1 [8];
	char date2 [8];
	puts("please enter the first date in the following format : HH:MM:SS");
	scanf("%s", date1);
	
	puts("please enter the first date in the following format : HH:MM:SS");
	scanf("%s", date2);
	while(date1[i]!='\0' && date2[i]!='\0' && date1[i]==date2[i]) i++; //whenever where inside the array and the instances at the i are equal ----> increment i
	diff = date1[i]-date2[i];  										  // compute the difference between the two date at i that doesn't satisfy the condition
	diff > 0 ? puts("the first instance comes before the second") : diff < 0 ? puts("the second instance comes before the first") : puts("the two instances are equal");
	return 0;
}
