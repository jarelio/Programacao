#include <stdio.h>
#include <stdlib.h>

int inserir_vetor(int n);
int main(void){
	int n;
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&n);
	inserir_vetor(n);
	return 0;
}

int inserir_vetor(int n){
	int *vetor,numero,valor,tamanho_total;
	
	vetor = (int*) malloc(n*sizeof(int));
	for (int i = 0; i<n; i++){
		printf("Digite o %d valor a inserir no vetor: ", i+1);
		scanf("%d", &numero);
		vetor[i] = numero;
	}
	numero = 1;
	while(numero!=0){
		printf("Deseja digitar mais elementos?: ");
		scanf("%d", &numero);
		if (numero > 0){
			tamanho_total = n+numero;
			vetor = (int*) realloc(vetor,tamanho_total*sizeof(int));
			for (int i = n+1; i<=tamanho_total; i++){
				printf("Digite o %d valor a inserir no vetor: ", i);
				scanf("%d", &valor);
				vetor[i] = valor;
			}
			
		}
	}
	printf("%d",tamanho_total);
	for (int i = 0; i<=tamanho_total; i++){
		printf("Elemento %d do vetor: %d\n", i+1,vetor[i]);
	}
	free(vetor);
	return 0;
}


