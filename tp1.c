/*

Author : Maxime LEFEBVRE
Class : DEUST 2 IOSI, UPHF
Years : 2021/2022

*/

#include <stdio.h>

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

int ajouter(Client c, Tab t, int *nbClients){
    if(*nbClients == 10){
        return 1;
    }
    else{
        return 0;
    }
}

void affiche(Client *c){
    printf("\nId client : %d\n", c->idClient);
    printf("Nom du client : %s\n", c->nomClient); // c->idClient; = (*c).idCLient;
}

int main(int argc, char *argv[])
{
    Client c;
    Tab t;
    int *nbClients;
    saisie(&c);
    affiche(&c);
    ajouter(c, t, &nbClients);


    printf("\nC'est OK\n");
    return 0;
}
