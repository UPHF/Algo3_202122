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
main(){
longueur();
}
