/**
 * Donovan PEREIRA DE REZENDE
 * TP-2
 * TP-DONOVAN-PEREIRA.c
*/

#include <stdio.h>

#define N 10
typedef int Tab[N];


int somme(Tab t, int n, int i ){
    int res=0;
    printf ("Calcul de la somme a partir de l’indice %d :\n",i);
    if (i<n){
        printf ("\t appel du calcul de la somme a partir de l’indice %d :\n",i+1);
        res=t[i]+somme(t,n,i+1);
        printf ("\t addition avec t[%d]\n",i );
    }
    printf ("\t Somme a partir de l’indice %d = %d\n\n",i,res);
    return res ;
}

/*Question 1 version 1*/

void affichage(Tab t, int SizeTab){
    SizeTab--;
    if(SizeTab < 0) {
        return;
    }
    else {
        affichage(t,SizeTab);
        printf("Element at pos %d : %d\n", SizeTab, t[SizeTab]);
    }
}

/*Question 1 version 2*/

void afficher(Tab t,int i)
{
    if(i<0){
        return;
    }
    else
    {
        afficher(t,i-1);
        printf("\nElement du tableau à la position %d : %d", i,t[i]);
    }
}

/*Question 2*/

int calcul(Tab t, int n){
    int res = 0, i = 0;
    printf ("Calcul de la somme a partir de l’indice %d :\n",i);
    if (i<n){
        printf ("\t appel du calcul de la somme a partir de l’indice %d :\n",i+1);
        res=t[i]+somme(t,n,i+1);
        printf ("\t addition avec t[%d]\n",i );
    }
    printf ("\t Somme a partir de l’indice %d = %d\n\n",i,res);
    return res ;
}

int main(){

    printf("Algo-3 TP2-Donovan-Pereira.c");

    Tab t1 = {4,2,8,0,7,3,1,5,9,6};
    printf ("La somme des entiers du tableau t1 = %d\n",somme(t1,N,0));
    affichage(t1, 10);
    /*afficher(t1, 10); version deux*/
    calcul(t1,N);

    return 0;
}