#include <stdio.h>

void main(){
	int seg = 0,min = 0,hora = 0;
	printf("Digite o número de segundos: ");
	scanf("%d",&seg);
	if (seg>=60){
		min = seg/60;
		seg = seg%60;
		if (min>=60){
			hora = min/60;
			min = min%60;	
		}
	}
	printf("Hora: %02d Minutos: %02d Segundos: %02d \n",hora,min,seg);
}