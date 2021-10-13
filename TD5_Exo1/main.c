#include <stdio.h>

# define N 10

typedef int Tab[N];

int permute(int *i, int *j){
	int temp = *i;
	*i = *j;
	*j = temp;
}

int initPivot(Tab t, int  g, int d){
	return t[g];
}

int partitionN(int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            permute(&arr[i], &arr[j]);
        }
    }
    permute(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 

int partitionner(Tab t, int g, int d){
	int pivot = initPivot(t, g,d);
	int i = g - 1;
	int j = d + 1;
	
	int fin = 0;
	
	while (!fin){
		printf("\nIn the while Pivot %d , i %d , j %d \n", pivot, i, j);
		
		do{	
			j = j -1;
		}while(t[j] < pivot);//
		
		do{
		 i = i +1;
		}while(t[i] >= pivot);
		
		if (i < j){
			printf("\n Permute ");
			permute(&t[i], &t[j]);
		}else{
			fin = 1;
		}
	}
	return i;
}

int quicksort(Tab t, int g, int d){
	printf("\nQS: g %d d %d", g, d);
	if (g < d){
		int p = partitionN(t, g, d);
		quicksort(t, g, p-1);
		quicksort(t, p + 1, d);
		
	}
}
	
int main(int argc, char **argv)
{
	printf("TD5-exo1\n");
	
	Tab myTab = {3,17,9,15,2,7,10,9,8,12};//{3,44,8,70,21, 6, 40, 93, 28, 102};
	
	quicksort(myTab, 0, N-1);
	printf("\nEnd");
	for (int i = 0; i< N-1; i++){
		printf("\n at %d: %d ", i, myTab[i]);
		}
	
	return 0;
}
