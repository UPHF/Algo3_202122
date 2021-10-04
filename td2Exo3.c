#include <stdio.h>
#include <stdlib.h>

typedef char Chaine[20];

typedef struct _Employe{
    Chaine Prenom;
    Chaine nom;
    double salaire;
}Employe;

typedef Employe TabEmploye[100];

int main(void)
{
    return 0;
}