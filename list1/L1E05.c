/* //////////////////////////////////////
///////////////////////////////////////
 5) Faca um programa que calcule e mostre a area de um triangulo.
C CODE*/ 

#include <stdio.h>
int a, b, ar_t = 0;
int main (){

	while (a <= 0){ 
		printf(" Digite o valor do lado a: ");
		scanf("%d", &a);
	}

	while (b <= 0){
		printf("Digite o valor do lado b: ");
		scanf("%d", &b);
	}
	ar_t = (a*b) / 2;
	printf("\nQuando se o multiplica ao quadrado, faz a*b, como um triangulo é a metade de um quadrado cortado na diagonal, entao, a*b, divide por 2 e sobra o resultado.\n");
	printf("\nLado a: %d\nLado b: %d\nA area do triangulo e' : %d", a, b, ar_t);
}