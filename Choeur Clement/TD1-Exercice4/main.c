#include <stdio.h>
# define N 10

void samePosition(int tab1[], int tab2[]){

	for(int i=0; i < N; i++){
        printf("Enter value for position %d : ",i);
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

void afficherTableau(int tab[]){
	for(int i=0; i< N; i++){
		printf("at position %d, value %d\n",i, tab[i]);
		}
    printf("\n");
	}

int main(int argc, char **argv)
{
	printf("TD1- Tableau \n");

	int mytab1[N];
	int mytab2[N];

	samePosition(mytab1, mytab2);

	afficherTableau(mytab1);
	afficherTableau(mytab2);

	return 0;
}