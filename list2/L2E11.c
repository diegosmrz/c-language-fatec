/*///////////////////////////////////////
///////////////////////////////////////
 11) Calcule e mostre a me'dia dos K primeiros pares.
OBS: K representa a quantidade de numeros pares solicitado via teclado pelo usuario. 
Os numeros pares deverao ser gerados pelo programador.
2, 4, 6, 8, 10,...
C CODE*/

#include <stdio.h>

int calcula(int ktamanho){
	int i = 0;
	int count = 0;
	int soma = 0;
	int media = 0;

	for(i = 2 ; i <= ktamanho ; i = i+2){
		count++;
		soma = soma + i;
		printf(" %d ", i);
	}

	media = (soma/count);

	printf(" A media dos numeros eh: %d", media);
}

int main (){
int ktam = 0;

	printf("Digite o número base: \n");
	scanf("%d", &ktam);

	calcula(ktam);
}
