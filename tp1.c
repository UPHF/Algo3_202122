/*

Author : Maxime LEFEBVRE
Class : DEUST 2 IOSI, UPHF
Years : 2021/2022

*/

#include <stdio.h>
#include <string.h>

#define N 10

typedef char Chaine[15];

typedef struct _Client{
    unsigned short idClient; // Entiers de 0 a 65535
    Chaine nomClient;
}Client;

typedef Client Tab[N];

void saisie(Client *c){
    printf("\nEntrer l'id du client : ");
    scanf("%hd", &c->idClient);
    printf("Entrer le nom du client : ");
    scanf("%s", c->nomClient);
}

void modifierNom(Tab t, int nbClients, int i){
    Chaine nouveauNom;

    if(i <= nbClients){
        printf("\nEntrer le nouveau nom du client %d : ", i);
        scanf("%s", nouveauNom);
        strcpy(t[i-1].nomClient, nouveauNom);
    }
}

int ajouter(Client c, Tab t, int *nbClients){
    if(*nbClients == N){
        return 0;
    }
    else{
        t[*nbClients] = c;
        *nbClients += 1;
        return 1;
    }
}

void affiche(Tab t, int nbClients){
    for(int i = 0; i<nbClients; i++){
        printf("\nId client : %d\n", t[i].idClient);
        printf("Nom du client : %s\n", t[i].nomClient); // c->idClient; = (*c).idCLient;
    }
}

int saisieClients(Tab t, int p, int *nbClients){
    if(*nbClients == N){
        return 0;
    }
    else{
        for(int i=0; i<p; i++){
            Client c = t[*nbClients + i];
            saisie(&c);
            ajouter(c, t, nbClients);
        }
        return 1;
    }
}

int main(int argc, char *argv[])
{
    Tab t;
    int *nbClients;
    int nbclient = 0;
    nbClients = &nbclient;

    saisieClients(t, 3, nbClients);
    affiche(t, nbclient);
    modifierNom(t, nbclient, 2);
    affiche(t, nbclient);

    printf("\nNombre de client dans le tableau : %d\n", *nbClients);
    printf("\nC'est OK\n");
    return 0;
}