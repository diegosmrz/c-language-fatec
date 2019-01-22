 /* ////////////////////////////////////
///////////////////////////////////////
 11) Receba tres numeros, onde o primeiro e o segundo devem ser maiores ou iguais a 100 e o terceiro e' qualquer. 
     Calcule e exiba o produto dos seus quadrados.
C CODE*/

#include <stdio.h>
int a, b, c = 0;
int main (){

	while (a < 100){
		printf("\nDigite um valor maior que 100 para A:");
		scanf("%d", &a);
			if (a < 100){printf("\nDigite um valor maior que 100");}}

	while (b < 100){
		printf("\nDigite um valor  maior que 100 para B:");
		scanf("%d", &b);
			if (b < 100){printf("\nDigite um valor maior que 100");}}

		printf("\nDigite um valor qualquer para C:");
		scanf("%d", &c);

		printf("Os valores Digitados foram\n A: [%d]\n B: [%d]\n C: [%d]\n", a,b,c);
		a = a*a;
		b = b*b;
		c = c*c;
		printf("Os valores Quadrados sao \n A: [%d]\n B: [%d]\n C: [%d]\n", a,b,c);
}