#include <stdio.h>
int main(){
	int tam=0;
	scanf("%i", &tam);
	int i=0, n=0, k=1, j=0, cont=0;
	for(i=0; i<tam; i++){
		scanf("%i", &n);
		j=n;
		do{
			cont = 0;
			for(k=1; k <= j; k++){
				if( j % k == 0){
					cont++;
				}
			}
			j++;
		}while( cont != n);
		printf(" %i\n", j-1);
	}
	return 0;
}
