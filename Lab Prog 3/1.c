#include <stdio.h>

int main(void){
	int i, j;
	int vetor1[5] = {1,2,3,4,5}, vetor2[8] = {1,2,3,4,5,6,7,8};
	for (i = 0; i<5; i++){
		for (j = 0; j<8; j++){
			if (vetor1[i] == vetor2[j]){
				printf("Número em comum: %d\n", vetor1[i]);
			}
		}
	}
	return 0;
}