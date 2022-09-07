#include <stdio.h>
int main(){
	char nom[100], prenom[100], numero[100], sexe[20];
	int age;
	//stockage des variables par l'input de l'utilisateur
	printf("entrer votre nom : \n");
	scanf("%s", nom);
	printf("entrer votre prenom : \n");
	scanf("%s", prenom);
	printf("entrer votre sexe : \n");
	scanf("%s", sexe);
	printf("entrer votre age : \n");
	scanf("%d", &age);
	printf("entrer votre numero : \n");
	scanf("%s", numero);
	
	// Affichage des données
	printf("---------------------------------------------------------------------------------------------------------------------");
	printf("votre nom : %s\n votre prenom : %s\n votre sexe : %s\n votre age : %d\n votre numero : %s\n", nom,prenom,sexe,age,numero);
	
	printf("---------------------------------------------------------------------------------------------------------------------");
	
}
