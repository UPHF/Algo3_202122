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

int main(void)
{
Tab tab1[]= {45,3,-33,54,574,1,71,18};
Tab tab2[]= {0};


recopie(tab1,tab2);
affichage(tab1);
mettreAZero(tab2);

return 0;