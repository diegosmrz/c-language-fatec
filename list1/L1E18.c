/* ////////////////////////////////////
///////////////////////////////////////
 18) Receba tres numeros que representam os lados de um triangulo e garantam a existencia de um triangulo. 
Informe ao usuario se o triangulo e' isosceles, equilatero ou escaleno.
Observacoes:
a) Garantir que cada lado e' menor que a soma dos outros dois lados.
b) O triangulo e' equilatero quando todos os lados sao iguais.
c) O triangulo e' isosceles quando apenas dois lados sao iguais.
d) O triangulo e' escaleno quando todos os lados sao diferentes.
C CODE*/ 

#include <stdio.h>
int a = -1,b = -1,c = -1;
int main (){

	while( a > b + c || b > a+c || c > a+b){
		while ( a < 0 ){
			printf("Digite um numero para A \n");
			scanf("%d", &a);
				if(a < 0){printf("O numero deve ser maior que zero.\n");}
		}

		while ( b < 0 ){
			printf("Digite um numero para B \n");
			scanf("%d", &b);
				if(b < 0){printf("O numero deve ser maior que zero.\n");}
		}

		while ( c < 0 ){
			printf("Digite um numero para C \n");
			scanf("%d", &c);
				if(c < 0){printf("O numero deve ser maior que zero.\n");}
		}
		if( a > b + c || b > a+c || c > a+b){printf("O numero nao pode ser maior do que a soma dos outros dois.\n");}	
	}

	if (a == b && b == c && c == a){
		printf("Triangulo equilatero, todos os lados sao iguais.");
	}
	else if ( a != b && b != c){
		printf("Triangulo escaleno, todos os lados são diferentes.");
	}
	else {
		printf("Triangulo isoceles, apenas dois lados sao iguais.");
	}
}