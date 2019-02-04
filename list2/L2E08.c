/*///////////////////////////////////////
///////////////////////////////////////
 8) Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usuario. 
A variavel Peso armazena cada um do K pesos digitados. Calcule e mostre o produto e a somatoria desses pesos.
C CODE*/

#include <stdio.h>

void calcula(int ktamanho){
	int i = 0;
	float peso[ktamanho];
	float somapeso = 0;

	do{
		for(i = 0; i < ktamanho; i++){
            	printf("\nDigite o peso da pessoa \n");
				scanf("%f", &peso[i]);
				somapeso = somapeso + peso[i];

                if(peso[i] < 0){
                    printf("\nValor 0 ou negativo são invalidos\n");
                }
		}
	}while(somapeso < 100);
	printf("\nO peso total eh: %f \n", somapeso);
}

int main (){
int ktam = 0;
while(ktam < 3){
	printf("\n Digite o quantidade de valores a recolher.\n");
	scanf(" %d", &ktam);
	if(ktam < 3){
		printf("\n O número deve ser maior que 15: o Atual é %d \n", ktam);
		}
	}
	calcula(ktam);
}