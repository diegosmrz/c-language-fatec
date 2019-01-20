/* ////////////////////////////////////
///////////////////////////////////////
8) Faca um programa que receba o ano do nascimento de uma pessoa e o ano atual, 
calcule e mostre:
a) A idade dessa pessoa
b) Quantos anos essa pessoa tera em 2020.
C CODE*/

#include <stdio.h>
int a, b, c = 0;
int main (){

 while (a <= 0){
 	printf("Digite um numero mair que zero\n");
 	scanf("%d", &a);
	 	if (a <= 0)
    	{printf("\nO numero deve maior que zero.\n");}
 }

 while (b >= 0){
 	printf("\nDigite um numero menor que zero\n");
 	scanf("%d", &b);
 		if(b >= 0)
 			{printf("\nDigite um numero negativo\n");}
 }

	c = a + b;
	printf("O produto de %d e %d e' %d.", a, b, c);
}