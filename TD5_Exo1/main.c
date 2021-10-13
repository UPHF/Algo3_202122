#include <stdio.h>

# define N 10

typedef int Tab[N];
int permute(int *i, int *j){
	int temp = *i;
	*i = *j;
	*j = temp;
}

int initPivot(Tab t, g,d){
}

int partitionner(Tab t, g,d){
	int pivot = initPivot(t, g,d);
	int i = g - 1;
	int j = d + 1;
	
	int fin = 0;
	
	while (fin != 1){
		do{	
		 j = j -1;
		}while(t[j] <= pivot);
		
		do{
		 i = i +1;
		}while(t[i] >= pivot);
		
		if (i <j){
			permute(&t[i], &t[j]);
		}else{
			fin = 1;
		}
	}
	
}


int main(int argc, char **argv)
{
	printf("TD5-exo1\n");
	return 0;
}
