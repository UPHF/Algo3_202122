// @ChoeurClément TP1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 15

typedef char chaine[N];

typedef struct
{
    int id;
    char nom[N];
} Client;

typedef Client Tab[N];

void saisie(Client * c)
{
    printf("Le nom du client est ? \n");
    scanf("%s", (*c).nom);
    printf("L'Id du client est ? \n");
    scanf("%d", &(*c).id);
}

int ajouter(Client c, Tab t, int * nbClients)
{
    if(*nbClients > N - 1)
           return 0;
    else
       {
           t[*nbClients] = c;
           *nbClients = *nbClients + 1;
           return 1;
       }
}

int saisieClients(Tab t, int p, int * nbClients){
    if(*nbClients > N - 1)
        return 0;
    else
    {
        int i = 0;
        while(i < p)
        {
            Client p[i];
            t[*nbClients] = p[i];
            *nbClients = *nbClients + 1;
            i++;
        }
        return 1;
    }
}

void modifierNom(Tab t, int nbClients, int i){
    Client p = t[i];
    char newName[N];
    printf("Entrer le nouveau nom du client : ");
    scanf("%s", newName);
    strcpy(p.nom, newName);
}

void afficherClients(Tab t, int nbClients){
    Client p = t[nbClients];
    printf("Nom du client : %s", p.nom);
    printf("Id du client : %d", p.id);
}

int rechercheClient(int idClient, Tab t, int nbClients, int * indiceClient){
    Client p = t[nbClients];
    int i = 0;

    while(i < nbClients)
    {
        if(idClient == p.id)
        {
            printf("L'indice du client est %p", &indiceClient);
            return 1;
        }
        else
            return 0;
        i++;
    }
    return 0;
}

void rechercheIdMinMax(Tab t, int nbClients, int * indiceIdMin, int * indiceIdMax)
{
    Client p = t[nbClients];
    int min = 2000;
    int max = -2000;

    int i = 0;

    while(i < nbClients)
    {
        if(p.id < min)
        {
            min = p.id;
            *indiceIdMin = min;
        }
        else
        {
            max = p.id;
            *indiceIdMax = max;
        }
        i = i + 1;
    }
    printf("L'Id minimum est : %d \n", *indiceIdMin);
    printf("L'Id maximum est : %d \n", *indiceIdMax);
}

// @ChoeurClément TP1

int afficherDoublons(Tab t, int nbClients){
    Client p = t[nbClients];
    Client pNext = t[nbClients + 1];
    int doublon = 0;
    int i = 0;

    while(i<nbClients)
    {
        if(p.id == pNext.id && strcmp(p.nom, pNext.nom))
            doublon++;
    }
    printf("Nombre de doublon(s) : %d", doublon);
    printf("Nom des doublons: %s", p.nom);
    printf("id des doublons : %d", p.id);

    return 0;
}

int ajouterSansDoublon(Client c, Tab t, int * nbClients){
    Client p = t[*nbClients];
    if(*nbClients > N - 1 && (c.id != p.id && c.nom != p.nom))
           return 0;
    else
       {
           t[*nbClients] = c;
           *nbClients = *nbClients + 1;
           return 1;
       }
}

int enleverClient(int idClient, Tab t, int * nbClients){
    Client p = t[*nbClients];
    int i;
    int j;

    for(i = 0; i < *nbClients; i++)
    {
        if(p.id == idClient)
        {
            for(j = i; j < *nbClients; j++)
            {
                t[j]= t[j+1];
            }
        }
    }
    return 0;
}

int main()
{
    Client * c;
    Client c1;
    Tab t;
    int * nbClients;
    int nbClients2;
    int i;
    int idClient;
    int * indiceClient;
    int * indiceIdMin;
    int * indiceIdMax;

    saisie(c);
    ajouter(c1, t, nbClients);
    modifierNom(t, nbClients2, i);
    afficherClients(t, nbClients2);
    rechercheClient(idClient, t, nbClients2, indiceClient);
    rechercheIdMinMax(t, nbClients2, indiceIdMin, indiceIdMax);
    afficherDoublons(t, nbClients);
    ajouterSansDoublon(c1, t, nbClients);
    enleverClient(idClient, t, nbClients);

    return 0;
}

// @ChoeurClément TP1
