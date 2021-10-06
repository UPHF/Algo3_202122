#include <stdio.h>

int exo2(int n){
	if (n ==0){
		return 1;
	}else{
		return exo2(n-1) + 2;
	}
}

int exo2Debug(int n){
	printf("[debug] n=%d\n",n);
	if (n < 0)
		return 0;
	if (n ==0){
		return 1;
	}else{
		int rec =exo2Debug(n-1);
		printf("[debug]exo2Debug(%d-1)=%d\n",n, rec);
		return rec + 2;
	}
}

int main(int argc, char **argv)
{
	printf("TD 3 EXO 2\n");
	int n= 3;
	int result = exo2Debug(n);
	printf("Result U_%d=%d", n, result);
	return 0;
}
