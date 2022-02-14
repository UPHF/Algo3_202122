#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//Q1

void longueur(char str[]){
    int lng = 0, i = 0;
    while (str[i] != '\0')
    {
        str[i] = tolower(str[i]);
        lng += 1;
        i++;
    }
    printf("La longueur de la chaine de caracteres '%s' est : %d \n", str, lng);
}

//Q2

void afficheInverse(char str[]){
    int l = 0, i = 0;

    for (int i=0 ; str[i] != '\0' ; i++){
        l++;
    }

    char inv[l];

    while(str[i]!='\0')
    {
        inv[l] = tolower(str[i]);
        i++;
        l--;
    }
    printf("L'inverse de %s est :  %s\n", str, inv);
}

//Q3

void sontEgales(char str1[], char str2[])
{   int ln1 = 0, ln2 = 0, s = 0;
    for (int i=0 ; str1[i] != '\0' ; i++){
        ln1++;
    }
        for (int i=0 ; str2[i] != '\0' ; i++){
        ln2++;
    }
    if (ln1 != ln2)
    {
        printf("Les chaines de caractere '%s' et '%s' sont differentes.\n", str1, str2);
    }
    else
    {
        while(str1[s]==str2[s])
        {
            s++;
        }
        if(s == ln1)
        {
                printf("Les chaines de caractere '%s' et '%s' sont egales.\n", str1, str2);
        }
        else
        {
                printf("Les chaines de caractere '%s' et '%s' sont differentes.\n", str1, str2);
        }
    }
}

//main
int main()
{
    printf("TD3_Ex1\n");
    char a[] = "chaine de test";
    char b[] = "chaine de test";
    char c[] = "autre chaine";
    char b2[] = "chaine_de_test";
    //Q1
    longueur(a);

    //Q2
    afficheInverse(a);

    //Q3
    sontEgales(a,b);
    sontEgales(a,c);
    sontEgales(a,b2);

    return 0;
}
