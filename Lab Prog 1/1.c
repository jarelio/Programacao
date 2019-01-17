#include <stdio.h>
#define pi 3.14159265358979323846

void main(){
	float r;
	printf("Digite o valor do raio da esfera: ");
	scanf("%f",&r);
	float vol = ((4*pi*r*r*r)/3);
	printf("Volume: %f u.v\n",vol);
}