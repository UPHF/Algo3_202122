/*
    Author : Maxime LEFEBVRE
    Year : 2021/2022
    Subject : Test GitHub commits with exo 4 TD1
*/

#include <stdio.h>
#include <stdlib.h>

typedef int Tab[10];

int copy(int t1, int t2)
{
    Tab tab1;
    Tab tab2;

    for (int i = 0; i < 10; i++){
        if(tab1[i]>0){
            tab2[i] = tab1[i];
        }
    }

    //Remplissage t2 de 0 s'il reste des places

    for(int j = 10-t2; j<t2; j++){
        for(int i=0; i<t2; i++){
            tab2[i] = 0;
        }
    }
}

// Question 2

float tabValAvg(Tab tab){
    float avg = 0;
    for (int i=0; i<10; i++){
        avg = avg + tab[i];
    }
    avg = avg/10;

    return avg;
}

int main(void)
{
    return 0;
}