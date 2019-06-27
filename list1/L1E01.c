/*//////////////////////////////////////
///////////////////////////////////////
1) Leia dois valores nume'ricos e exibe a diferenca do maior pelo menor. 
Se os numeros forem iguais informe ao usuario.
C CODE */

#include <stdlib.h>
int num1,num2,result=0;

int main()
	{
	printf("Digite o primeiro numero para soma: \n");
		scanf("%d", &num1);
	printf("Digite o segundo numero para soma: \n");
		scanf("%d", &num2);

	if (num1 == num2){
		printf("Numeros iguais, nao ha diferenca entre eles. \n");}
	else if (num1 > num2)
	{	
		result = num1-num2;
		printf("A diferenca entre %d e %d e'; %d \n", num1, num2, result);} 
	else{	
		result = num2-num1;
		printf("A diferenca entre %d e %d e'; %d \n", num2, num1, result);}
	}
