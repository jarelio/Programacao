#include <stdio.h>
#include <math.h>
double pot (double x, int k);
int main(void){
	double x,resultado;
	int k;
	printf("Digite o valor da base: ");
	scanf("%lg", &x);
	printf("Digite o valor do expoente: ");
	scanf("%d", &k);
	resultado = (pot(x, k));
	printf("Resultado de %lg ^ %d: %lg\n", x,k,resultado);
	printf("Pow Math: %lg\n", pow(x,k));
	return 0;
}

double pot(double x, int k){
	if (k == 1){
		return x;
	}
	return pot(x, k-1) * x; 
}