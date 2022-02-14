#include <stdio.h>
# define N 10

    void exactPosition(int tab1[], int tab2[]){

        for(int i=0; i < N; i++){
            printf("Entrer la valeur %d : ",i);
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
            printf("Entrer la valeur %d :\n", i);
            scanf("%d", &tab[i]);
        }

        for(int j=0; j < N; j++){
            total = total + tab[j];
        }

        moyenne = total / N;

        return moyenne;
    }

    void minimum(int tab[]){

        int minimum;
        minimum = tab[0];

        for(int i=0; i < N; i++){
            printf("Entrer la valeur %d :\n", i);
            scanf("%d", &tab[i]);
        }

        for(int j=0; j < N; j++){
            if(minimum > tab[j])
                minimum = tab[j];
        }

        printf("la valeur minimal est : %d\n", minimum);
    }

    void maximumMinimum(int tab[]){

        int minimum;
        minimum = tab[0];
        int maximum;
        maximum = tab[0];

        for(int i=0; i < N; i++){
            printf("Entrer la valeur %d :\n", i);
            scanf("%d", &tab[i]);
        }

        for(int j=0; j < N; j++){
            if(minimum > tab[j])
                minimum = tab[j];
            else if(maximum < tab[j])
                maximum = tab[j];
        }

        printf("La valeur minimale est : %d\n", minimum);
        printf("La valeur maximale est %d\n", maximum);

    }



    void showTable(int tab[]){
        for(int i=0; i< N; i++){
            printf("à la position %d, valeur %d\n",i, tab[i]);
            }
        printf("\n");
        }

    int main(int argc, char **argv)
    {
        printf("TD1- Tableau \n");

        int monTab1[N];
        // int montab2[N];

        // exactPosition(monTab1, monTab2);

        // showTable(monTab1);
        // showTable(monTab2);

        // moyenne(monTab1);

        // minimum(monTab1);

        maximumMinimum(monTab1)

        return 0;
    } 