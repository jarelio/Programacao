#include <stdio.h>
#include <math.h>

int primo(int n);

int main(void){
	int x,n,cont = 0,resultado,j = 0;
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	printf("Digite o valor de n: ");
	scanf("%d", &n);

	printf("São primos menores ou igual a %d: ", x);
	for (int i=0; i<=x; i++){
		resultado = primo(i);
		if (resultado) {
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("Os primeiros %d primos são: ", n);
		while (cont != n){
			resultado = primo(j);
			if (resultado) {
				printf("%d ",j);
				cont ++;
			}
			j++;
		}
		printf("\n");
}

int primo(int n){
	if (n == 2) {
		return 1;
	} else if (n<2 || (n%2)==0) {
		return 0;
	} else {
		int lim = (int)sqrt(n);
		for (int i=3; i<= lim; i+=2) {
			if (n%i == 0) {
				return 0;
			}
		}
		return 1;
	}
}

