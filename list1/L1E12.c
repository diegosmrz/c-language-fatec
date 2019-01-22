 /* ////////////////////////////////////
///////////////////////////////////////
 12) Receba dois numeros quaisquer, calcule e mostre na tela o resultado da divisao do segundo pelo primeiro.
C CODE*/ 

#include <stdio.h>
float a, b = 0;
int main (){

	 printf("\nDigite um valor para A\n");
	 scanf("%f", &a);

	while( b < a){
		printf("\nDigite um valor para B\n");
	 	scanf("%f", &b);
	 	if(b<a){printf("\nDigite um número maior que %f\n", a);}}

	 printf("\nOs valores digitados foram A[%f] e B[%f].\n", a, b); 
	 a = b/a;
	 printf("\nO resultado da divisao e' %f", a);
}