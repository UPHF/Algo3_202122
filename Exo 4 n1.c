#include <stdio.h>
# define N 10
// Exercise 4 ---> 1

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

int main(int argc, char **argv) //main
{
    int tab1[N],  tab2[N];

	InputTable(tab1, tab2);

	ShowTable(tab1, tab2);

	return 0;
}
