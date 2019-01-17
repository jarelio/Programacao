#include <stdio.h>

int func_mdc(int x, int y);

int main(void){
	int x,y,z,resultado,resultado_final;
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	printf("Digite o valor de y: ");
	scanf("%d", &y);
	printf("Digite o valor de z: ");
	scanf("%d", &z);
	resultado = func_mdc(x,y);
	resultado_final = func_mdc(resultado,z);
	printf("O máximo divisor comum de x:%d e y:%d e z:%d é: %d\n", x,y,z,resultado_final);
	return 0;
}

int func_mdc(int x, int y){
	int r;
	r = x%y;
	if (r == 0){
		return y;
	}
	return func_mdc(y,r);
}