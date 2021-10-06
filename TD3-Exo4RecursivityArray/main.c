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
	if (i < 0){
			return ;
	}
	else{
		afficherRecursive(tab, i -1);
		printf("Recursive position %d: %d\n", i , tab[i]);
	}
}

/**
 * @brief Printing Step by Step 
 * @param tab: array to print
 * @param i: current position to print
 */
void afficherRecursiveDebug(int tab[], int i){
	printf("[Debug]Current value of i: %d\n", i);
	if (i < 0){
			printf("[Debug]Inside Stop condition: (negative position does not exist)\n");
			return ;
	}
	else{
		printf("[Debug]Before calling afficherRecursiveDebug(tab, %d)\n", i-1);
		afficherRecursiveDebug(tab, i -1);
		printf("Recursive position %d: %d\n", i , tab[i]);
	}
}

void afficherRecursiveDebugSpaces(int tab[], int i){
	printf("[Debug]Current value of i: %d\n", i);
	if (i < 0){
			printf("[Debug]Inside Stop condition: (negative position does not exist)\n");
			return ;
	}
	else{
		printf("[Debug]Before calling afficherRecursiveDebug(tab, %d)\n", i-1);
		afficherRecursiveDebug(tab, i -1);
		printf("Recursive position %d: %d\n", i , tab[i]);
	}
}

//calcul de la somme des N premiers éléments de T
int sommeRecursiveDebug(int tab[], int i){
	printf("[Debug]Current value of i: %d\n", i);
	
	if( i<0){
		printf("[Debug]Inside Stop condition: (negative position does not exist)\n");
		return 0;
	}
	else{
		printf("[Debug] calling sommeRecursive(tab, %d)\n", i-1);
	
		int sumAtLeft =  sommeRecursiveDebug(tab, i-1);
		printf("[Debug] results of sommeRecursive(tab, %d):%d\n", i-1, sumAtLeft);
	
		return  tab[i] + sumAtLeft;
	}
	
}

int sommeRecursive(int tab[], int i){
	
	if( i<0){
		return 0;
	}
	else{
		
		return  tab[i] + sommeRecursive(tab, i-1);
	}
	
}

void saisieRecursive(int tab[], int i){
	if (i < 0){
			return ;
	}
	else{
		saisieRecursive(tab, i -1);
		printf("Enter value for position %d\n", i );
		scanf("%d", &tab[i]);
	}
}

void saisieRecursiveDebug(int tab[], int i){
	if (i < 0){
			return ;
	}
	else{
		saisieRecursive(tab, i -1);
		printf("Enter value for position %d\n", i );
		scanf("%d", &tab[i]);
	}
}

int main(int argc, char **argv)
{
	printf("TD3\n");
	int sizeArray=5;
	int tab[sizeArray];
	//saisieIterative(tab, N);
	//printf("Now we print the Array Iterative:\n");
	//afficherIterative(tab, N);
	
	printf("Enter values for the array recursive: \n");
	
	int indexLastPosition = sizeArray -1;
	saisieRecursive(tab, indexLastPosition);
	printf("Print the array recursive: \n");
	//afficherRecursive(tab, indexLastPosition);
	//afficherRecursiveDebug(tab, indexLastPosition);
	int resultSum = sommeRecursiveDebug(tab, indexLastPosition);
	printf("Result Sum value %d: \n", resultSum);
	return 0;
}
