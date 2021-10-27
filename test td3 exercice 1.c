#include <stdio.h>
#include <conio.h>
///1
void longueur() {
   char chaine1[10] = "Hello";
   int  longueur;
   longueur = strlen(chaine1);
   printf("la longueur du mot est de :%d\n",longueur);
   return 0;
}
///2
void affiche_inverse()
{
    char chaine[20], inverse[20];
    int t, i, j;

    printf(" Entrez une chaine de caractere :  ");
    gets(chaine);

    j = 0;
    t = strlen(chaine);

    inverse[t] = '\0';
    for (i = t - 1; i >= 0; i--)
    {
      inverse[j++] = chaine[i];
    }
    inverse[i] = '\0';

    printf(" Chaine de caractère apres inversion = %s\n", inverse);

    return 0;
}
///3
void comparer()
{
   char chaine2[20], chaine3[20];

   printf("\n Entrez la premiere chaine: ");
   gets(chaine2);

   printf("\n Entrez la deuxième chaine: ");
   gets(chaine3);

   if (strcmp(chaine2,chaine3) == 0)
      printf(" Les deux chaines sont egales.\n");
   else
      printf(" Les deux chaines ne sont pas egales.\n");

   return 0;
}
///4

///5

main(){
longueur();
affiche_inverse();
comparer();
}
