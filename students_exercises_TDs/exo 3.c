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

int main() { // main

struct Employe E;
E=saisieEmploye(); // init saisieEmploye
return 0;
}
