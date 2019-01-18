/* //////////////////////////////////////
///////////////////////////////////////
 4) Faca um programa que receba o salario-base de um funcionario, 
calcule e mostre o salario a receber, 
sabendo-se que esse funcionario tem gratificacao de 5% sobre o salario-base 
e paga imposto de 7% sobre o salario-base.
C CODE*/

#include <stdlib.h>
float sal_b, sal_f, sal_gr, sal_im = 0; 

int main (){

	while (sal_b <= 0){
		printf("Digite o salario base: \n");
		scanf("%f", &sal_b);}

	sal_gr = sal_b * 0.05;
	sal_im = sal_b * 0.07;
	sal_f = sal_b + sal_gr - sal_im;

	printf(" Salario base: %f \n Gratificacao: (+) %f \n Imposto: (-) %f \n Salario final: %f", sal_b, sal_gr, sal_im, sal_f);
}