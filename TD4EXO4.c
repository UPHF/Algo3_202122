/*	Donovan
	Pereira De Rezende
*/

#include <stdio.h>
# define N 10

void Posi(int tab1[], int tab2[]){

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

void affiTab(int tab[]){
	for(int i=0; i< N; i++){
		printf("at position %d, value %d\n",i, tab[i]);
		}
    printf("\n");
	}

int main(int argc, char **argv)
{
	printf("TD1- Tableau \n");

	int tabst[N];
	int tabrd[N];

	Posi(tabst, tabrd);

	affiTab(tabst);
	affiTab(tabrd);

	return 0;
} 