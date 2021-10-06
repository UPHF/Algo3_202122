#include <stdio.h>
# define N 15 

typedef char Chaine[N];

typedef struct{
	Chaine nom;
	Chaine prenom;
	int codeFonction;
	float salaire;
}Employe;

Employe saisieEmploye(){
		Employe e;
		printf("Write nom\n: ");
	  scanf("%s",e.nom);
	
	printf("Write prenom\n: ");
	scanf("%s",e.prenom);
	
	printf("Write codeFonction\n: ");
	scanf("%d",&(e.codeFonction));
	
	printf("Write salaire \n: ");
	scanf("%f",&(e.salaire));
	
	return e;
}
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
	printf("TD2- Exo2\n");
	
	Employe e;
	
	Chaine s;
	
	saisie(&e);
	showEmploye(&e);
	
	Employe newEmp2 = saisieEmploye();
	
	showEmploye(&newEmp2);
	return 0;
}
