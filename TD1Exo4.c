#include <stdio.h>
typedef int Tab[10]; 

void recopieTableau(Tab tab1, Tab tab2)
{
for (int i = 0; i < 10; i++)
{
    if (tab1[i] > 0)
    {
        tab2[i] = tab1[i];
    }
}
}

void affichage (Tab tab)
{
for (int i = 0; i < 10; i++)
{
    printf("valeur tab 1: %d \n", tab[i]);
}
}

void zero(Tab tab2)
{
for (int i = 0; i < 10; i++)
{
    if (tab2[i] < 0)
    {
        tab2[i] = 0;
    }
}
}

int moyenne(Tab tab) 
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

void MaxMin (Tab tab) 
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
Tab tab1[]= {12,-8,254,11,5744,3,};
Tab tab2[]= {0};
Tab MinMax[2];
int moyennes, positionMin;

recopieTableau(tab1,tab2);
afficher(tab1);
zero(tab2);
moyennes= moyenne(tab1);
printf("moyenne est: %d\n", moyennes);
positionMin= posmin(tab1);
printf("\nl'indice de la valeur min est %d\n", positionMin);
ValeurMaxMin(tab1);

return 0; 

