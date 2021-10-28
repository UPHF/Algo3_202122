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

// Question 3

int indexMinVal(Tab tab){
    int temp = tab[0];
    int index = 0;
    for (int i=1; i<10; i++){
        if (tab[i] < temp){
            temp = tab[i];
            index = i;
        }
    }
    
    return index;
}

// Question 4

int maxANDminVal(Tab tab){
    int minVal = tab[0];
    int maxVal = tab[0];
    
    for (int i=1; i<10; i++){
        if (tab[i] < minVal){
            minVal = tab[i];
        }
        if (tab[i] > maxVal){
            maxVal = tab[i];
        }
    }

    return minVal, maxVal;
}

int main(void)
{
    return 0;
}