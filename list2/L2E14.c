/*///////////////////////////////////////
///////////////////////////////////////
 14) Receba a quantidade K de numeros positivos. K representa essa quantidade e deve ser digitada pelo usuario. 
A variavel Num armazena cada uma dos K numeros digitados e devera ser alimentada pelo usuario. 
Verifique e exiba a quantidade de numeros pares digitada.

C CODE*/

#include <stdio.h>
#include <stdio.h>

int calcula (int ktamanho){
	int i = 0;
	int num = 0;
	int numttl = 0;
	int numpar = 0;
	int pares[ktamanho];
	int numeros[numttl];

	do{
		printf("\n-----------------------------\n");
		printf("Digite o número da vez: \n");
		scanf("%d", &num);
		if(num%2==0){
			pares[numpar] = num;
			numpar++;
		}
		numttl = numttl+1;
		printf("\n--numttl %d--\n", numttl);
		printf("\n--numero %d--\n", numpar);
		printf("\n-----------------------------\n");


	}while(numpar < ktamanho);
		printf("\n------------FINAL------------\n");
		printf("\n--TOTAL numttl %d--\n", numttl);
		printf("\n--TOTAL numpar %d--\n", num);
		printf("\n-----------------------------\n");
}

int main (){
	int ktam = 0;

	printf("Digite a quantidade de números a registrar. \n\n");
	scanf("%d", &ktam);

	calcula(ktam);

}