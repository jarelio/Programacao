#include <stdio.h>

void main(){
	float preco,taxa,litro_brasil;
	printf("Digite o valor do galão de gasolina nos EUA ($): ");
	scanf("%f",&preco);
	printf("Digite a taxa de conversão do dólar para o real: ");
	scanf("%f",&taxa);
	litro_brasil = (preco * taxa)/3.7854;
	printf("O valor do litro no Brasil é: %f R$\n", litro_brasil);
}