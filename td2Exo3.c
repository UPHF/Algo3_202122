#include <stdio.h>
#include <stdlib.h>

// Question 1

typedef char Chaine[20];

typedef struct _Employe{
    Chaine Prenom;
    Chaine nom;
    double salaire;
}Employe;

typedef Employe TabEmploye[100];

// Question 2

void employeAdding(TabEmploye tabEmp, int nombreEmp){
    for (int i = 0; i<nombreEmp; i++){
        printf("\nPrenom de l'employe numero <%d> : ", i+1);
        scanf("%s", &tabEmp->Prenom);
        printf("Nom de l'employe numero <%d> : ", i+1);
        scanf("%s", &tabEmp->nom);
        printf("Salaire de l'employe numero <%d> : ", i+1);
        scanf("%f", &tabEmp->salaire);
    }
}

int main(void)
{
    TabEmploye tabEmp1;
    employeAdding(tabEmp1, 2);
    return 0;
}