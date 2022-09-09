#include <stdio.h>
int main(){
	char input;
	puts("input a character to test : ");
	scanf("%c", &input);
	switch(input)
	{
		case 'a' : 
			printf("%c is a vowel ", input);
			break;
		case 'e' :
			printf("%c is a vowel ", input);
			break;
		case 'u' : 
			printf("%c is a vowel ", input);
			break;
		case 'i' :
			printf("%c is a vowel ", input);
			break;	
		case 'o' :
			printf("%c is a vowel ", input);
			break;
			
		default : printf("%c is not a vowel", input);	
	}
}
