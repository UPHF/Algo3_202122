#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Question 1

typedef char Chaine[20];

typedef struct _Employe{
    Chaine Prenom;
    Chaine nom;
    double *salaire;
}Employe, *pEmploye;

typedef pEmploye *TabEmploye[100];

// Question 2

void employeAdding(TabEmploye *tabEmp, int nombreEmp){
    for (int i = 0; i<nombreEmp; i++){
        printf("\nPrenom de l'employe numero <%d> : ", i+1);
        scanf("%s", *(tabEmp)->prenom);
        printf("Nom de l'employe numero <%d> : ", i+1);
        scanf("%s", *(tabEmp)->nom);
        printf("Salaire de l'employe numero <%d> : ", i+1);
        scanf("%f", *(tabEmp)->salaire);
    }
}

void dispTabEmp(TabEmploye tabEmp, int nombreEmp){
    for (int i=0; i<nombreEmp; i++){
        printf("\nEmploye numero : %d\n", i+1);
        printf("Prenom : %s\n", tabEmp->Prenom);
        printf("Nom : %s\n", tabEmp->nom);
        printf("Salaire : %f\n", tabEmp->salaire);
    }
}

int main(void)
{
    TabEmploye tabEmp1;
    TabEmploye *pTabEmp1 = &tabEmp1;
    
    employeAdding(pTabEmp1, 2);
    dispTabEmp(tabEmp1, 2);
    return 0;
}