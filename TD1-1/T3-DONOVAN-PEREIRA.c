/**
 * Donovan PEREIRA DE REZENDE
 * TP-3
 * TP-DONOVAN-PEREIRA.c
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10
typedef int Tab[N];

void remplirTableau(Tab t, int n){
    int i ;
    srand ( time(NULL) ); // initialise le random
        for (i=0; i<n; i++)
        t[ i]= rand() % n; // t [ i ] recoit une valeur aleatoire modulo n
}

void affichage(Tab t, int SizeTab){
    SizeTab--;
    if(SizeTab < 0) {
        return;
    }
    else {
        affichage(t,SizeTab);
        printf("Element a la position  %d = %d\n", SizeTab, t[SizeTab]);
    }
}

int main (int argc, char *argv[]){

    printf("Algo-3 TP3-Donovan-Pereira.c\n");

    Tab t1;
    
    remplirTableau(t1,N);
    affichage(t1, N);

    return 0;
}