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

int main(void)
{
Tab tab1[]= {45,3,-33,54,574,1,71,18};
Tab tab2[]= {0};
int moyennes;

recopie(tab1,tab2);
mettreAZero(tab2);
moyennes = moyenne(tab1);
printf("moyenne est: %d\n", moyennes);
return 0;
}