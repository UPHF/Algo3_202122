#include <stdio.h>
#define N 10

typedef struct{
	char nom[N];
	float moy;
} Eleve;

void changeMoyPointer(Eleve * e){
	(*e).moy = 10;
	printf("\n Address of eleve %d Inside method", e);
	
	printf("\n Inside method, new Moy %f",(*e).moy);

}

void changeMoy(Eleve e){
	/// Changing the copy of the value
	e.moy = 10;
	printf("\n Address of eleve %d Inside method", &e);
	
	printf("\nInside method, new Moy %f",e.moy);
}

int main(int argc, char **argv)
{
	printf("Struct Saisie:\n");
	
	Eleve newEleve;
	newEleve.moy = 15;
	
	printf("\n Address of eleve %d", &newEleve);
	printf("\nMoy %f",newEleve.moy);
	
	changeMoy(newEleve);
	
	printf("\nAfter call, Moy %f",newEleve.moy);
	printf("\n Address of eleve %d", &newEleve);
	
	printf("\nNow with pointer\n");
	changeMoyPointer(&newEleve);
	
	printf("\nAfter call, Moy %f",newEleve.moy);
	
	return 0;
}
