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
        printf("Element a la position  %d = %d\n", SizeTab, t[SizeTab]);
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
        printf("\nElement du tableau à la position %d : %d\n", i,t[i]);
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

/*Question 3*/

void superieur(Tab t, int n, int i, int supe){
    if (i<n)
    {
        if (t[i] > supe)
        {
            printf("La valeur %d est plus grande que %d\n",t[i], supe);
        }
        superieur(t, n, i+1, supe);
    }
}

/*Question 4*/

void affichagedecroissants(Tab t,int n){
    if (n == -1) return;
    printf("Valeur décroissantes %d\n", t[n]) ;
        affichagedecroissants (t, n-1) ;
}

/*Question 5*/

int recherche(int *t, int n, int i, int rech){

if (i == n) return -1;
    if (t[i] == rech)
    {
        return i;
    }
     recherche(t,n,i+1, rech);
}

/*Question 6*/

void dichotomie (Tab t, int v){

    //trie du tableau 
        int i,minimun,j,tmp;
        for(i=0;i<v-1;i++){
                minimun=i;
                for(j=i+1;j<v;j++)
                    if(t[j]<t[minimun])
                        minimun=j;
                if(minimun!=i){
                        tmp=t[i];
                        t[i]=t[minimun];
                        t[minimun]=tmp;
                }
        }
        printf("Tableau trié : ");
        for ( int i = 0; i < v; i++){
        printf("%d/",t[i]);
    }//fin du tri


}

int main(int argc, char *argv[]){

    printf("Algo-3 TP2-Donovan-Pereira.c\n");

    Tab t1 = {4,2,8,0,7,3,1,5,9,6};
    printf ("La somme des entiers du tableau t1 = %d\n",somme(t1,N,0));
    printf("\nQuestion 1\n");
    affichage(t1, 10);/*Question 1*/
    /*afficher(t1, 10); version deux*//*Question 1*/
    printf("\nQuestion 2\n");
    calcul(t1,N);/*Question 2*/
    printf("\nQuestion 3\n");
    superieur(t1,N,0,2);/*Question 3*/
    printf("\nQuestion 4\n");
    affichagedecroissants(t1,2);/*Question 4*/
    printf("\nQuestion 5\n");
    printf("l'indice de recherche est %d\n",recherche(t1,N,0,2));/*Question 5*/
    printf("\nQuestion 6\n");
    dichotomie(t1, 10);

    return 0;
}