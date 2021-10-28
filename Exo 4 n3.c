#include <stdio.h>
# define N 10
// Exercise 4 ---> 3

// EXERCISE 1 :
void InputTable(int tab1[], int tab2[]){
	for(int i=0; i < N; i++){
            printf("Write the %d value :\n",i); //Entry values
    scanf("%d", &tab1[i]);
            tab2[i] = 0; // Fix value tab2 to 0
			if (tab1[i] > 0){ // "if" to put 0 for negative values
                tab2[i] = tab1[i]; // Transfer positive values tab1 to tab2
			}
	}
}

void ShowTable(int tab1[], int tab2[]){ //function showing table
	for(int i=0; i< N; i++){
		printf("Table 2 : at position %d, value %d\n",i, tab2[i]); // Print tab2's values
		}
	}

// EXERCISE 2 :
void AvgTable (int tab[]){
    int avg;
    int sum;
    int i;
    for (i=0 ; i< N ; i++) //find the number of values in tab
      {
          sum += tab[i]; // sum of all numbers in tab
      }
avg = sum/N; // average calcul
printf("The average of this table is %d\n", avg); // print  average
}

void InputTable2(int tab[]){
	for(int i=0; i < N; i++){
            printf("Write the %d value :\n",i); //Entry values
    scanf("%d", &tab[i]);
	}
}

// EXERCISE 3 :
void MinTable(int tab[]){
    int i;
    int min = 0;
for (i=0; i<N; i++)
     {
      if(tab[i]<tab[min])min=i; // Minimal value finding
     }
     printf("Minimal value is %d\n", tab[min]); // Showing minimal value
}

int main(int argc, char **argv) //main
{
    int tab1[N],  tab2[N], tab[N];

//	InputTable(tab1, tab2);

//	ShowTable(tab1, tab2);

    InputTable2(tab);

//	AvgTable (tab);

    MinTable(tab);

	return 0;
}
