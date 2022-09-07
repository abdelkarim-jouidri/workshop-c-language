#include <stdio.h>
int main(){
	char nom[20]; char prenom[20]; int age; char sexe[15]; char numero[100];
	
	printf("tappez votre nom \n");
	scanf("%s", &nom);
	printf("tappez votre prenom \n");
	scanf("%s", &prenom);
	printf("tappez votre sex \n");
	scanf("%s", &sexe);
	printf("tappez votre age \n");
	scanf("%d", &age);
	printf("tappez votre numero de telephone \n");
	scanf("%s", &numero);
	
	printf("----------------------------------------------------------------------------------------------------------------------");
	printf("votre nom  : %s\nvotre prenom  :%s\nvotre sex : %s\nvotre age  : %d\nvotre numero de telephone : %s", nom, prenom, sexe, age, numero);
	
	printf("----------------------------------------------------------------------------------------------------------------------");
}
