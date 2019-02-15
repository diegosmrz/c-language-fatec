/*///////////////////////////////////////
///////////////////////////////////////
 16) Receba K numeros quaisquer, K representa a quantidade de termos solicitada pelo usuario e cada termo pode ser representado pela variavel N. 
Exiba o produto apenas dos numeros negativos e o maior numero digitado.
C CODE*/

#include <stdio.h>
int main (){
int k, n, i, maior, prodnegativo = 0;

printf("\nDigite a quantidade de números a ser inseridos.\n");
scanf("%d", &k);
printf("\n-------------------------------");
maior = 0;
	for(i = 0 ; i < k; i++ ){
		printf("\nDigite o número a ser calculado: ");
		scanf("%d", &n);
			if( n > maior){
				maior = n;
				printf("\nNovo maior: %d", n);
			}
			if( n < 0 ){
				printf("\nNovo negativo: %d", n);
				prodnegativo =
				prodnegativo - n;
				printf("\nProduto negativo: %d", prodnegativo);}

		printf("\n-------------------------------");
	}

	printf("\n-------------------------------");
	printf("\nFIM DO PROGRAMA!");
	printf("\nMaior: %d", maior);
	printf("\nProduto dos negativos: %d", prodnegativo);
	printf("\n-------------------------------");
}
