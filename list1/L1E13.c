/* ////////////////////////////////////
///////////////////////////////////////
 13) Elabore um programa que efetue o calculo do reajuste de salario de um funcionario. 
Considere que o funcionario deve receber um reajuste de 15% caso seu salario seja menor que 800 reais. 
Se o salario for maior ou igual a 800 e menor ou igual a 1000, seu reajuste sera de 10 %; 
caso seja maior que 1000, o reajuste deve ser de 5%.
Ao final do programa deve apresentar o valor antigo e o novo salario.
C CODE*/ 

#include <stdio.h>
float sal_base, sal_ajust = 0;
int main (){

	while(sal_base < 100){
		printf("\n Informe o salario \n(obs: valor minimo: 100)\n");
		scanf("%f", &sal_base);
		if(sal_base < 100){printf("\nInforme um numero maior que 100\n");}}

	if (sal_base < 800){ sal_ajust = sal_base * 1.15;}
	else if (sal_base <= 1000){ sal_ajust = sal_base * 1.10;}
	else { sal_ajust = sal_base * 1.05;}

	printf("Salario anterior: %f\n", sal_base);
	sal_base = sal_ajust - sal_base;
	printf("Valor do ajuste: %f\n Valor salario ajustado: %f", sal_base, sal_ajust);
}