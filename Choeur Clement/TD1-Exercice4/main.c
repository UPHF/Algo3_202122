    #include <stdio.h>
    # define N 10

    void samePosition(int tab1[], int tab2[]){

        for(int i=0; i < N; i++){
            printf("Enter value for position %d : ",i);
            scanf("%d\n", &tab1[i]);
        }

        for(int j=0; j < N; j++){
            if(tab1[j] < 0){
                tab2[j] = 0;
            }
            else
            {
                tab2[j] = tab1[j];
            }
        }

    }

    void average(int tab[]){

        int sum = 0;
        int avg = 0;

        for(int i=0; i < N; i++){
            printf("Enter value for position %d :\n", i);
            scanf("%d", &tab[i]);
        }

        for(int j=0; j < N; j++){
            sum = sum + tab[j];
        }

        avg = sum / N;

        return avg;
    }

    void min(int tab[]){

        int min;
        min = tab[0];

        for(int i=0; i < N; i++){
            printf("Enter value for position %d :\n", i);
            scanf("%d", &tab[i]);
        }

        for(int j=0; j < N; j++){
            if(min > tab[j])
                min = tab[j];
        }

        printf("Minimum value is : %d\n", min);
    }

        void minMax(int tab[]){

        int min;
        min = tab[0];
        int max;
        max = tab[0];

        for(int i=0; i < N; i++){
            printf("Enter value for position %d :\n", i);
            scanf("%d", &tab[i]);
        }

        for(int j=0; j < N; j++){
            if(min > tab[j])
                min = tab[j];
            else if(max < tab[j])
                max = tab[j];
        }

        printf("Minimum value is : %d\n", min);
        printf("Maximum value is : %d\n", max);

    }

    void afficherTableau(int tab[]){
        for(int i=0; i< N; i++){
            printf("at position %d, value %d\n",i, tab[i]);
            }
        printf("\n");
        }

    int main(int argc, char **argv)
    {
        printf("TD1- Tableau \n");

        int mytab1[N];
        // int mytab2[N];

        // samePosition(mytab1, mytab2);

        // afficherTableau(mytab1);
        // afficherTableau(mytab2);

        // average(mytab1);

        // min(mytab1);

        minMax(mytab1);

        return 0;
    }