#include <stdio.h>
#define Chaine (15)

struct Employe { // init struct Employe
    char nom[Chaine]; // [15] max lenght = Chaine
    char prenom[Chaine];
    int codeFonction;
    float salaire;
};

struct Employe saisieEmploye(){ // saisie Employe to stock value (char, int and float) in struct
struct Employe E;
printf("Donnez le nom de l'employe : ");
scanf("%s", &E.nom);
printf("Donnez le prenom de l'employe : ");
scanf("%s", &E.prenom);
printf("Donnez le code de fonction de l'employe : ");
scanf("%d", &E.codeFonction);
printf("Donnez le salaire de l'employe : ");
scanf("%f", &E.salaire);
return E;
}

void afficheEmploye(){ // affiche Employe to screen struct Employe
struct Employe E;
printf("Nom de l'employe : %s\n", E.nom);
printf("Prenom de l'employe : %s\n", E.prenom);
printf("Code de fonction de l'employe : %d\n", E.codeFonction);
printf("Salaire de l'employe : %f\n", E.salaire);
}

void modifEmploye(struct Employe *E){ // Modif Employe to change value of "E.nom"
printf("Changez le nom de l'employe : ");
scanf("%s", &E->nom);
printf("Le nouveau nom de l'employe est : %s", E->nom);
}

int main() { // main

struct Employe E;
E=saisieEmploye(); // init saisieEmploye
afficheEmploye(&E); //init afficheEmploye
modifEmploye(&E); //init modifEmploye
return 0;
}
