#include <stdio.h>

int main(void){
	float vetor1[10], vetor2[10];
	float numero, num_escalar;
	int i;

	for (i = 0; i<10; i++){

		printf("Elemento %d Vetor1: ",i);
		scanf("%f", &numero);
		vetor1[i] = numero;

		printf("Elemento %d Vetor2: ",i);
		scanf("%f", &numero);
		vetor2[i] = numero;
	}
	num_escalar = escalar(vetor1,vetor2);
	printf("Escalar: %.2f\n", num_escalar);
	return 0;
}


int escalar(float *vetor1, float *vetor2){
	int i;
	float num_escalar = 0;
	for (i = 0; i < 10; ++i){
		num_escalar += vetor1[i] * vetor2[i];
	}
	return num_escalar;
}