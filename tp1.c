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

void modifierNom(Tab t, int nbClients, int i){
    Chaine nouveauNom;
    if(i <= nbClients){
        printf("\nEntrer le nouveau nom du client d'indice %d : ", i);
        scanf("%s", nouveauNom);
        strcpy(t[i].nomClient, nouveauNom);
    }
}

void afficher(Tab t, int nbClients){
    for(int i = 0; i<nbClients; i++){
        printf("\nId client : %d\n", t[i].idClient);
        printf("Nom du client : %s\n", t[i].nomClient); // c->idClient; = (*c).idCLient;
    }
}

int rechercheClient(int idClient, Tab t, int nbClients, int *indiceClient){
    for(int i = 0; i<nbClients; i++){
        if(t[i].idClient == idClient){
            *indiceClient = i;
            printf("\nL'indice du client qui a pour id %d est : %d", idClient, *indiceClient);
            return 1;
        }
    }
    return 0;
}

void rechercherIdMinMax(Tab t, int nbClients, int *indiceIdMin, int *indiceIdMax){
    int tempIdMin = t[0].idClient;
    int tempIdMax = t[0].idClient;
    for(int i = 1; i<nbClients; i++){
        if(t[i].idClient < tempIdMin){
            tempIdMin = t[i].idClient;
            *indiceIdMin = i;
        }
        if(t[i].idClient > tempIdMax){
            tempIdMax = t[i].idClient;
            *indiceIdMax = i;
        }  
    }
    printf("\nL'indice dans le tableau du client ayant l'id Client minimum : %d\n", *indiceIdMin);
    printf("L'indice dans le tableau du client ayant l'id Client maximum : %d\n", *indiceIdMax);
}

int afficherDoublons(Tab t, int nbClients){
    int nbDoublons = 0;
    printf("\n-- Affichage des doublons (non prise en charge des triplons, quadruplons, etc...) --\n");
    for(int i = 0; i<nbClients; i++){
        for(int j = 0; j<nbClients; j++){
            if(i != j && t[j].idClient == t[i].idClient && strcmp(t[j].nomClient, t[i].nomClient) == 0){
                nbDoublons += 1;
                if((nbDoublons+1) % 2 == 0){
                    printf("\nId client : %d Nom client : %s Indice : %d\n", t[i].idClient, t[i].nomClient, i);
                }                    
                else{
                    printf("Id client : %d Nom client : %s Indice : %d\n", t[i].idClient, t[i].nomClient, i);              
                }
            }
        }
    }
    if(nbDoublons == 0){
        printf("\nPas de doublons dans le tableau !\n");
    }
    return nbDoublons/2;
}

int ajouterSansDoublon(Client c, Tab t, int *nbClients){
    for(int i=0; i<*nbClients; i++){
        if(t[i].idClient == c.idClient && strcmp(t[i].nomClient, c.nomClient) == 0){
                printf("\nLe client voulant etre ajoute existe deja.\n");
                return 0;
        }   
    }
    ajouter(c, t, nbClients);
    printf("\nClient qui a pour id : %d et nom : %s a ete ajoute en position : %d\n", c.idClient, c.nomClient, *nbClients-1);
    return 1; 
}

int enleverClient(int idClient, Chaine nomClient, Tab t, int *nbClients){
    int temp_i;
    int a = 0;
    while(a==0){
        for(int i=0; i<*nbClients; i++){ // Trouver mon identifiant egal a celui en parametre.
            if(t[i].idClient == idClient && strcmp(t[i].nomClient, nomClient) == 0){
                temp_i = i;
                a = 1;
            }
        }
        if(a==0){
            printf("\nLe client souhaite n'a pas ete enleve car il n'existe pas.\n");
            return 0;
        }
    }
    for(int i = temp_i; i<*nbClients; i++){
        t[i] = t[i+1];
    }
    *nbClients -= 1;
    return 1;
}

int main(int argc, char *argv[])
{
    Tab t;

    // Client *cp;
    // Client c1;
    // cp = &c1;

    Client c;
    c.idClient = 3;
    strcpy(c.nomClient, "c");

    int *nbClients;
    int nbclient = 0;
    nbClients = &nbclient;
    
    int *indiceClient;
    int indiceclient = 0;
    indiceClient = &indiceclient;

    int *indiceIdMin;
    int indiceidmin = 0;
    indiceIdMin = &indiceidmin;

    int *indiceIdMax;
    int indiceidmax = 0;
    indiceIdMax = &indiceidmax;

    int nbDoublons;

    // saisie(cp);
    // ajouter(c1, t, nbClients);
    saisieClients(t, 5, nbClients);
    afficher(t, nbclient);
    enleverClient(2, "b", t, nbClients);
    modifierNom(t, nbclient, 2);
    afficher(t, nbclient);
    rechercheClient(3, t, nbclient, indiceClient);
    rechercherIdMinMax(t, nbclient, indiceIdMin, indiceIdMax);
    ajouterSansDoublon(c, t, nbClients);
    nbDoublons = afficherDoublons(t, nbclient);
    printf("\nNombre de doublons : %d\n", nbDoublons);
    afficher(t, nbclient);
    enleverClient(2, "b", t, nbClients);
    printf("\n----------- Apres modification -----------\n");
    afficher(t, nbclient);

    nbDoublons = afficherDoublons(t, nbclient);
    printf("\nNombre de client dans le tableau : %d\n", nbclient);
    printf("Nombre de doublons : %d\n", nbDoublons);
    printf("\n//END\n");
    return 0;
}