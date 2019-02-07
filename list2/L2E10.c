/*///////////////////////////////////////
///////////////////////////////////////
 10) Receba a quantidade K de numeros quaisquer. K representa essa quantidade e deve ser digitada pelo usuario. 
A variavel Num armazena cada uma dos K numeros digitados e devera ser alimentada pelo usuario. 
Verifique e exiba a quantidade de numeros negativos superiores ou igual a -23 e inferiores a -16.

C CODE*/

#include <stdio.h>

void calcula(int ktam){
int i = 0;
int pl = 0;
int num[ktam];
int plus[pl];

	for(i = 0; i < ktam ; i++){

		printf("Digite o numero da vez");
		scanf("%d", &num[i]);
		if((num[i] >= -23) && (num[i] < -16) ){
            pl++;
			plus[pl] = num[i];

		}

	}

	printf("--------------------------------------- \n");
	printf("Foram digitados %d numeros com valores \n entre -23 e -16: \n", pl);

	printf("\nOs números digitados foram: \n");

        for (i = 1 ; i <= pl; i++ ){
            printf("%do %d \n", i, plus[i]);
        }

	printf("--------------------------------------- \n");
}

int main (){
int ktam = 0;

	printf("Digite o número base: \n");
	scanf("%d", &ktam);

	calcula(ktam);
}