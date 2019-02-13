/*///////////////////////////////////////
///////////////////////////////////////
 15) Leia um numero inteiro representado pela variavel N ate' que N seja igual a zero. 
Exiba uma mensagem informando se o numero e' par ou i'mpar.

C CODE*/

#include <stdio.h>
int main (){

	int n = 1;

	do{
		printf("\nDigite o número:\n");
		scanf("%d", &n);
		if(n%2==0){printf("Número par.\n");}
			else{printf("Número ímpar.\n");}
	}while(n != 0);
	printf("\n Numero zero digitado \n\n FIM DO PROGRAMA!");

}