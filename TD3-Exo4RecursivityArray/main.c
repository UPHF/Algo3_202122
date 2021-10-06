#include <stdio.h>

//saisie récursive des N entiers de T (remplir le tableau complètement)

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

void afficherRecursive(int tab[], int i){
	if (i <= 0){
			return ;
	}
	else{
		afficherRecursive(tab, i -1);
		printf("Recursive position %d: %d\n", i -1, tab[i-1]);
	}
}

void saisieRecursive(int tab[], int i){
	if (i <= 0){
			return ;
	}
	else{
		saisieRecursive(tab, i -1);
		printf("Enter value for position %d\n", i -1);
		scanf("%d", &tab[i-1]);
	}
}
int main(int argc, char **argv)
{
	printf("TD3\n");
	int N=5;
	int tab[N];
	//saisieIterative(tab, N);
	//printf("Now we print the Array Iterative:\n");
	//afficherIterative(tab, N);
	printf("Enter values for the array recursive: \n");
	saisieRecursive(tab, N);
	printf("Print the array recursive: \n");
	afficherRecursive(tab, N);
	
	return 0;
}
