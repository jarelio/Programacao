#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i,n, *vetor,*vetor2;
	printf("Digite a quantidade de algarismos: ");
	scanf("%d", &n);

	/*Criação do Vetor */
	vetor = (int*) malloc(n*sizeof(int*));
	vetor2 = (int*) malloc(n*sizeof(int*));
	for (i = 0; i<n; i++){
		printf("Elemento %d do vetor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	for (i = 0; i<n; i++){
		printf("Elemento %d do vetor 2: ", i+1);
			scanf("%d", &vetor2[i]);	

	}

	soma(vetor,vetor2, n);
	return 0;
}

int soma(int *vetor, int *vetor2, int n){
	int i,valor,vetor3[n+1];
	for (i = 0; i<n; i++){
		vetor3[i] = 0;
	}
	for (i = n-1; i>=0; i--){
		if ((vetor[i] + vetor2[i]) >= 10){
			valor = vetor[i] + vetor2[i];
			vetor3[i] = valor%10;
			vetor[i-1] = vetor[i-1]+1;	
		}else{
			valor = vetor[i] + vetor2[i];
			vetor3[i] = valor;
		}
	}
	printf("\nSoma: ");
	for (i = -1; i<=n-1; i++){
		printf("%d", vetor3[i]);
	}
	return 0;
}