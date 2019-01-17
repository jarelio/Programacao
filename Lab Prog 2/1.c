#include <stdio.h>

int func_mdc(int x, int y);

int main(void){
	int x,y,resultado;
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	printf("Digite o valor de y: ");
	scanf("%d", &y);
	resultado = func_mdc(x,y);
	printf("O máximo divisor comum de x e y é: %d\n", resultado);
	return 0;
}

int func_mdc(int x, int y){
	int r;
	r = x%y;
	while (r != 0){
		x = y;
		y = r;
		r = x%y;
	}
	return y;
}