 /* ////////////////////////////////////
///////////////////////////////////////
 15) Receba dois numeros, o primeiro deve ser maior que 100, 
O segundo deve ser menor que 50 e o terceiro deve ser a soma dos dois anteriores. 
Calcule e exiba o produto entre eles.
C CODE*/ 

#include <stdio.h>
int a =0, b = 100, c = 0;
int main (){

	while(a < 100){
		printf("Digite um numero para A maior que 100\n");
		scanf("%d", &a);
			if( a < 100){printf("O numero deve ser maior que 100\n");}}

	while(b > 50){
		printf("Digite um numero para B menor que 50\n");
		scanf("%d", &b);
			if( b > 50){printf("O numero deve ser maior que 100\n");}}

		c = a + b;
		c = a + b + c;
		printf("A soma entre A %d + B %d e' %d", a,b,c);
}