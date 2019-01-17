#include <stdio.h>

int main(void){
	int vetor[10] = {1,8,3,2,1,0,12,8,9,10};
	int num_maximo, num_minimo, i;
	num_maximo = maximo(vetor);
	num_minimo = minimo(vetor);
	printf("Vetor: ");
	for (i = 0; i<10; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
	printf("Número Máximo: %d\n", num_maximo);
	printf("Número Mínimo: %d\n", num_minimo);
	return 0;
}

int maximo(int *vetor){
	int i = 0,numero_maximo = 0;
	for (i; i<10; i++){
		if (vetor[i] > numero_maximo){
			numero_maximo = vetor[i];
		}
	}
	return numero_maximo;
}

int minimo(int *vetor){
	int i = 0,numero_minimo = vetor[0];
	for (i; i<10; i++){
		if (vetor[i] < numero_minimo){
			numero_minimo = vetor[i];
		}
	}
	return numero_minimo;
}