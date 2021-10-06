#include <stdio.h>

//saisie récursive des N entiers de T (remplir le tableau complètement)

void saisieRecursive(int tab[], int N){

}

void saisieIterative(int tab[], int N){
	
	for (int i=0; i< N; i++){
		printf("Enter value into position %d:\n",i);
		scanf("%d", &tab[i]);
	}
}

void afficherIterative(int tab[], int N){
	
	for (int i=0; i< N; i++){
		printf("Position %d: value: %d\n",i, tab[i]);
		
	}
}

int main(int argc, char **argv)
{
	printf("TD3\n");
	int N=5;
	int tab[N];
	saisieIterative(tab, N);
	printf("Now we print the Array:\n");
	afficherIterative(tab, N);
	return 0;
}
