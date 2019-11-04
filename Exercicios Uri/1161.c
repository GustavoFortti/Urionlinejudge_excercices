#include <stdio.h>
int main(){
	int a=0, b=0;
	scanf("%i", &a );
	scanf("%i", &b );
	int Va[a], Vb[b], i=0;
	int soma = a;
	if(soma == 0){
		soma = 1;
	}
	for(i=a; i>1; i--){
		Va[i-1] = i-1;
		soma = soma * Va[i-1];
	}

	int somb = b;
	if(somb == 0){
		somb = 1;
	}
	for(i=b; i>1; i--){
		Vb[i-1] = i-1;
		somb = somb * Vb[i-1];
	}
	int total = soma + somb;
	printf("%i\n", total);
	return 0;
}
