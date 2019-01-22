/* ////////////////////////////////////
///////////////////////////////////////
 16) Receba dois numeros, 
o primeiro deve ser maior que 10 e menor que 25, 
o segundo deve ser maior ou igual a zero, 
o terceiro deve ser a soma dos dois primeiros e 
o quarto e' o produto dos tres numeros anteriores. 
Calcule e exiba a soma dos quadrados de cada um dos quatro numeros. 
Caso o resultado seja menor que 50000, solicite novos dados.
C CODE*/ 

#include <stdio.h>
int a, b, c, d, e = 0;
int main (){

	while(d < 50000){
	while(a<=10 || a>25){
			printf("Digite um numero para A maior que 10 e menor que 25\n");
			scanf("%d", &a);
				if(a<=10 || a>25){printf("O numero deve ser maior que 10 e menor que 25\n");}}

	while(b <= 0){
		printf("\nDigite um numero para B maior ou igual a 0\n");
		scanf("%d", &b);
			if( b < 0){printf("O numero deve ser maior ou igual a 0\n");}}
				c = a + b;
				d = a + b + c;
				
				a = a*a; b = b*b; c = c*c; d = d*d;

				e = a+b+c+d;

		printf("Os quadrados entre A %d + B %d + C %d + D %d, e' %d \n\n", a,b,c,d,e);
		if(d < 50000){printf("\n a soma final dos quadrados esperada era superior a 50000, insira novos números.");
			a=0; b=0; c=0; d=0; e=0;}
		}
}
