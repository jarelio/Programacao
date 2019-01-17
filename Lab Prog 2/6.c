#include <stdio.h>
#include <math.h>

int raizes(double a, double b, double c, double *px1, double *px2);
double delta(double a, double b, double c);

int main(void){
	double a,b,c,v_delta,x1,x2;
	printf("Cálculo raízes quadradas: aX² + bX + c: \n");
	printf("Digite o valor de a: ");
	scanf("%lg", &a);
	if (a == 0){
		return 1;
	}
	printf("Digite o valor de b: ");
	scanf("%lg", &b);
	printf("Digite o valor de c: ");
	scanf("%lg", &c);
	raizes(a,b,c,&x1,&x2);
	v_delta = delta(a,b,c);
	printf("O valor de delta é: %2.f\n", v_delta);
	if (v_delta == 0){
		printf("Existe uma raiz\n");
	} else if (v_delta > 0){
		printf("Existem duas raízes\n");

	}else {
		printf("Não existe raiz real para essa função\n");
	}
	printf("O valor das raízes x1 e x2 são: X1: %lg X2: %lg\n", x1,x2);
	return 0;
}

double delta(double a, double b, double c){
	double v_delta = ((b*b) - (4*a*c));
	return v_delta;
}

int raizes(double a, double b, double c, double *px1, double *px2){
	int raiz_delta;
	raiz_delta = sqrt(((b*b) - (4*a*c)));
	b = b * (-1);
	*px1 = (b - raiz_delta)/(2*a);
	*px2 = (b + raiz_delta)/(2*a);
}