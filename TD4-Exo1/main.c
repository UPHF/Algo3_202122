#include <stdio.h>
# define N 10

typedef int Tab[N];

int dicho(Tab t ,int valueToSearch, int indexG ,int indexD ){
	printf("\nIndex of G %d, D %d", indexG,indexD);

	int indexM = (indexG + indexD) / 2;
	
	printf("\nIndex of the middle %d", indexM);
	
	if (t[indexM] == valueToSearch){
		printf("\nfound at position %d",indexM );
		return indexM;
		//Stop condition
	}else if (indexG == indexD){
		return -1;
		}
	else{
		if (t[indexM] > valueToSearch)
		
			return dicho(t, valueToSearch, indexG, indexM );
		else {
				return dicho(t, valueToSearch, indexM + 1, indexD );
			}
	}
	
}

int main(int argc, char **argv)
{
	Tab myTab = {3,4,8,20,21, 30, 40, 43, 98, 102};
	printf("TD4 exo 1\n");
	int indexG = 0;
	int indexD = N - 1;
	int elementToSearch = 50;
	int foundAt = dicho(myTab, elementToSearch, indexG, indexD);
	
	if (foundAt == -1 ){
		printf("\nNot found");
	}
	else{
		printf("\nfound at position %d",foundAt );
		}
	
	return 0;
}
