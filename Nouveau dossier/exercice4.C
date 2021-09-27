#include <stdio.h>
typedef int Tab[10]; //declaration du tableau de 10 entier 

void recopie(Tab tab1, Tab tab2)// la fonction permet de recopier le tab1 dans le tab2 (seulement les elements positifs)
{

for (int i = 0; i < 10; i++)
{
    if (tab1[i] > 0)
    {
        tab2[i] = tab1[i];
        
    }
    
}


}

void mettreAZero(Tab tab2)// cette fonction permet completer la fin du tableau par des zero si il n'y a pas de valeur
{

for (int i = 0; i < 10; i++)
{
    if (tab2[i] < 0)
    {
        tab2[i] = 0;
    }
    
}
}

void affichage (Tab tab)//affiche le tableau 
{

for (int i = 0; i < 10; i++)
{
    printf("valeur tab 1: %d \n", tab[i]);
}
}
int moyenne(Tab tab)// return la moyenne du tableau 
{
int somme=0,moyenne=0,nombre=0;

for (int i = 0; i < 10; i++)
{
    somme= somme + tab[i];
    nombre++;
}

 moyenne = somme/ nombre;
return moyenne;

}


void ValeurMaxMin (Tab tab) // affiche la valeur maximal et minimal du tableau 
{
int min=99999999999999,max = 0,position=0, longueur=10;
      
      
      for (int i=0 ; i< longueur ; i++)
      {
          if(tab[i]<min){
                         min=tab[i];
                         position=i;
          }
      }

      for (int i=0 ; i< longueur ; i++)
      {
          if(tab[i]>max){
                         max=tab[i];
                         position=i;
          }
      }

int MinMax[2]= {max, min};
printf("la valeur maximal est = %d et la valeur minimal est = %d",MinMax[0], MinMax[1]);
 
}

int main(void)
{
Tab tab1[]= {45,3,-33,54,574,1,71,18};
Tab tab2[]= {0};
int moyennes, positionMin;

recopie(tab1,tab2);
affichage(tab1);
mettreAZero(tab2);
moyennes= moyenne(tab1);
printf("moyenne est: %d\n", moyennes);
positionMin= posmin(tab1);
printf("\nl'indice de la valeur min est %d\n", positionMin);
ValeurMaxMin(tab1);

return 0;
}