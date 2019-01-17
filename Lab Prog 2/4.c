#include <stdio.h>
#define pi 3.14

int main(void){
	float raio,volume,area;
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	volume = ((4 * pi * raio * raio * raio)/3);
	area = (4 * pi * raio * raio);
	printf("O volume da esfera é: %.2f u.v.\n", volume);
	printf("A área da esfera é: %.2f u.v.\n", area);
	return 0;
}