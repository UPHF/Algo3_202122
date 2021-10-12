/*	Donovan
	Pereira De Rezende
*/

#include <stdio.h>
# define N 10

void recopie(int tab1[], int tab2[]) {
for (int i = 0; i < 10; i++)
    {
        if (tab1[i] > 0)
        {
            tab2[i] = tab1[i];
        }
    }
}

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

void moy(int tab[]){

    int Somme = 0;
    int moyenne = 0;

    for(int i=0; i < N; i++){
        printf("Enter value for position %d :\n", i);
        scanf("%d", &tab[i]);
	}

	for(int j=0; j < N; j++){
        moyenne = moyenne + tab[j];
	}

	moyenne = Somme / N;

	return moyenne;
}

    void minimum(int tab[]){
        int Somme = 0;
        int moyenne = 0;

	for(int j=0; j < N; j++){
        Somme = Somme + tab[j];
	}
        int minimum;
        minimum = tab[0];

	moyenne = Somme / N;
        for(int i=0; i < N; i++){
            printf("Enter value for position %d :\n", i);
            scanf("%d", &tab[i]);
        }

        for(int j=0; j < N; j++){
            if(minimum > tab[j])
                minimum = tab[j];
        }
         printf("minimumimum value is : %d\n", minimum);
	return moyenne;
}

void minimummaximum(int tab[]){

        int minimum;
        minimum = tab[0];
        int maximum;
        maximum = tab[0];

        for(int i=0; i < N; i++){
            printf("Enter value for position %d :\n", i);
            scanf("%d", &tab[i]);
        }

        for(int j=0; j < N; j++){
            if(minimum > tab[j])
                minimum = tab[j];
            else if(maximum < tab[j])
                maximum = tab[j];
        }

        printf("minimum value is : %d\n", minimum);
        printf("Maximum value is : %d\n", maximum);

    }

int main(int argc, char **argv)
{
	printf("TD1- Tableau \n");

	int tabst[N];
	int tabrd[N];

	Posi(tabst, tabrd);

	affiTab(tabst);
	affiTab(tabrd);
    moy(tabst);
    minimum(tabst);


	return 0;
} 