/* //////////////////////////////////////
///////////////////////////////////////
 6) Faca um programa que receba o valor de um deposito, o valor da taxa de juros e o peri'odo.
 	Calcule e mostre o valor do rendimento e o valor total depois do rendimento.
C CODE */

#include <stdio.h>
float cap, tax, vrend, vtotal;
int per = 0;
int main (){

	while (cap <= 0){
		printf("\nDigite o valor do capital a depositar\n");
		scanf("%f", &cap);
	}

	while (tax <= 0){
		printf("\nDigite o valor da taxa de juros\n");
		scanf("%f", &tax);
	}

	while (per <= 0){
		printf("\nDigite o periodo de tempo correspondente a taxa\n");
		scanf("%d", &per);
	}

	vrend = (cap*tax*per)/100;
	vtotal = cap + vrend;

	printf("\nCapital: %f\nTaxa: %f\nPeriodo: %d\nRendimento: %f\nMontante: %f", cap, tax, per, vrend, vtotal);
}