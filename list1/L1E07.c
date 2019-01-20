/* ////////////////////////////////////
///////////////////////////////////////
 7) Leia dois valores nume'ricos e efetue a adicao. 
 Caso o resultado seja maior ou igual a 10 deve ser acrescido de mais 5; 
 caso contrario, este resultado deve ser diminui'do em 7. 
 Apresente o resultado apos a avaliacao da condicao.
C CODE*/ 

#include <stdio.h>
int a,b,c = 0;
int main (){

	 printf("Digite um numero\n");
	 scanf("%d", &a);
	 printf("Digite outro numero\n");
	 scanf("%d", &b);

	 c = a+b;

	 if (c >= 10)
	 	{ c = c+5;}
	 else
	 	{ c = c-7;}

	 printf(" O resultado e' %d", c);
}