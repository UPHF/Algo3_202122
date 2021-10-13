#include <stdio.h>
# define N 10

typedef int Tab[N];

int permute(int *i, int *j){
	int temp = *i;
	*i = *j;
	*j = temp;
}

int retrieveIndexMinimale(Tab t, int i, int j){
	//printf("\n i %d  j %d ", i, j);
	int minValue = t[i];
	int minIndex = i;
	for (int k = i; k<=j;k++){
			//printf("\n k %d ", k);
		if (t[i]< minValue){
				minValue = t[i];
				minIndex = i;
			}
	}
	return minIndex;
}

int f1(Tab t){
	printf("In the beginning\n");
	for(int i = 0; i< N-1; i++){
		printf("Analyzing i %d", i);
		int m = retrieveIndexMinimale(t, i, N-1);
		if (i != m){
			permute(&t[i], &t[m]);/// permute(t+i,t+m);
			}
		}
}

int main(int argc, char **argv)
{
	printf("TD4 exo 2\n");
	Tab myTab = {3,44,8,70,21, 6, 40, 93, 28, 102};
	f1(myTab);
	printf("\nEnd");
	for (int i = 0; i< N-1; i++){
		printf("\n at %d: %d ", i, myTab[i]);
		}
	return 0;
}
