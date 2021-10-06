#include <stdio.h>
# define N 15 
typedef struct{
	char nom[N];
	char prenom[N];
	int codeFonction;
	float salaire;
}Employe;

void saisie(Employe *e){

	printf("Write nom\n: ");
	scanf("%s",e->nom);
	
	printf("Write prenom\n: ");
	scanf("%s",(*e).prenom);
	
	printf("Write codeFonction\n: ");
	scanf("%d",&(e->codeFonction));
	
	printf("Write salaire \n: ");
	scanf("%f",&(e->salaire));
	
}
void showEmploye(Employe *e){
	printf("\nEmploye: %s %s %d %f", e->nom, e->prenom, e->codeFonction, e->salaire);
}

int main(int argc, char **argv)
{
	printf("TD2\n");
	
	Employe e;
	
	saisie(&e);
	showEmploye(&e);
	return 0;
}
