#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n, *vetor, i;
	printf("Digite o número de voltas: ");
	scanf("%d", &n);
	vetor = (int *) malloc(n * sizeof(int*));
	for (i = 0; i<n; i++){
		printf("Volta %d: ", i);
		scanf("%d", &vetor[i]);	
	}

	funcoes(vetor,n);
	return 0;
}

int funcoes(int *vetor, int n){
	int i,melhor_tempo = vetor[0],pior_tempo = vetor[0],posic1,posic2;
	/*melhor e pior tempo*/
	for (i = 0; i<n; i++){
		if (pior_tempo < vetor[i]){
			pior_tempo = vetor[i];
		}
		if (melhor_tempo > vetor[i]){
			melhor_tempo = vetor[i];
		}
	}
	for (i = 0; i<n; i++){
		if (pior_tempo == vetor[i]){
			posic2 = i;
		}
		if (melhor_tempo == vetor[i]){
			posic1 = i; 
		}
	}
	/*posicao do melhor e pior tempo*/
	printf("\n");
	printf("Vetor: ");
	for (i = 0; i<n; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
	printf("Melhor tempo: %d\n", melhor_tempo);
	printf("Pior tempo: %d\n", pior_tempo);
	printf("Posição melhor tempo: %d\n", posic1);
	printf("Posição pior tempo: %d\n", posic2);
}