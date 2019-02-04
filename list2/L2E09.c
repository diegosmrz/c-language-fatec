/* ///////////////////////////////////////
///////////////////////////////////////
 9) Mostre na tela a soma e o produto dos K primeiros naturais.
OBS: K representa a quantidade de numeros naturais solicitado via teclado pelo usuario. 
Os numeros naturais deverao ser gerados pelo programador.
0, 1, 2, 3, 4, 5, 6,....

C CODE*/

#include <stdio.h>

void calcula(int ktam){
int num = 0;
int i = 0;

	for(i = 0 ; i <= ktam ; i++){
		num = num + i;
	}
 	printf("O resultado da soma e %d", num);
}

int main (){
int ktam = 0;

	printf("Digite o número base: \n");
	scanf("%i", &ktam);

	calcula(ktam);
}
