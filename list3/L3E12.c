/* 12)	Receba a quantidade de pesos de N pessoas. 
N representa essa quantidade e deve ser digitada pelo usuário. 
A variável P representa cada peso digitado. 
Calcule e mostre a média dos pesos superiores ou iguais a 70 quilos e inferiores ou iguais a 85,5 e a quantidade de pessoas que apresentam pesos superiores a 75 quilos. Exiba também o menor e o maior peso encontrado. 
Utilize o laço while para a entrada da quantidade N e um laço do while para efetuar os cálculos e as comparações solicitadas.*/
#include <stdio.h>
void main (){
	int i = 0;
	char nome[15][30];
	float peso [15];

	for(i=0;i<15;i++){
		printf("\nDigite o nome da pessoa: \n");
		scanf("%s", &nome[i][30]);

		printf("\nDigite o peso da pessoa: \n");
		scanf("%f", &peso[i]);
	}

	for(i=0;i<15;i++){
		printf("\nNome : %s", nome[i][30]);
		printf("Peso : %f \n", peso[i]);
	}
}