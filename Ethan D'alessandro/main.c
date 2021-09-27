#include <stdio.h>
# define N 10
void exactPosition(int tab1[], int tab2[]){
	for(int i=0; i < N; i++){
        printf("Entrer une valeur pour la position %d : ",i);
        scanf("%d\n", &tab1[i]);
	}
	for(int j=0; j < N; j++){
        if(tab1[j] < 0){
            tab2[j] = 0;
        }
        else
        {
            tab2[j] = tab1[j];
        }
	}

}

void moyenne(int tab[]){

    int total = 0;
    int moyenne = 0;

    for(int i=0; i < N; i++){
        printf("Entrer une valeur pour la position %d :\n", i);
        scanf("%d", &tab[i]);
	}

	for(int j=0; j < N; j++){
        total = total + tab[j];
	}

	moyenne = total / N;

	return moyenne;
}

void showTable(int tab[]){
	for(int i=0; i< N; i++){
		printf("à la position %d, valeur %d\n",i, tab[i]);
		}
	printf("\n");

	}
	
	int main(int argc, char **argv){
	printf("TD1- Tableau \n");

	int monTab1[N];
	int monTab2[N];
	// int monTab[N];

	// samePosition(monTab1, monTab2);

	exactPosition(monTab1, monTab2);
	// afficherTableau(monTab1);
	// afficherTableau(monTab2);

	showTable(monTab1);
	showTable(monTab2);
	moyenne(monTab1);

	return 0;
	
}