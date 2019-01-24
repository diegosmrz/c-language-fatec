/*//////////////////////////////////////
///////////////////////////////////////
1) Leia dois valores nume'ricos e exibe a diferenca do maior pelo menor. 
Se os numeros forem iguais informe ao usuario.
C CODE */

#include <stdlib.h>
int a,b,s;

int main()
	{
		printf("Digite o primeiro numero para soma: \n");
			scanf("%d", &a);

		printf("Digite o segundo numero para soma: \n");
			scanf("%d", &b);

	if (a == b)
		{printf("Numeros iguais, nao ha diferenca entre eles. \n");}
	else
    if (a > b)
	{	s = a-b;
		printf("A diferenca entre %d e %d e'; %d \n", a, b, s);} 
	else
			{	s = b-a;
		printf("A diferenca entre %d e %d e'; %d \n", b, a, s);}
	}