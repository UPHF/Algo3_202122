#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define N 10

//création de type chaine
typedef char chaine[15];
//création de struct client
typedef struct
{
    chaine nom[15];
    int ID;
} Client;
//création de tableau de clients
typedef Client Tab[N];


//définition de saisie
void saisie(Client *c)
{
    printf("\nVeuillez saisir le nom du client :");
    scanf("%s",(*c).nom);
    printf("\nVeuillez saisir l'identifiant du client :");
    scanf("%d",&((*c).ID));
    printf("Nom : %s | ID : %i",c->nom, c->ID);
}



int main()
{
    printf("TP1_Q1\n");
    //Test
    Client cl_1;
    saisie(&cl_1);

    return 0;
}
