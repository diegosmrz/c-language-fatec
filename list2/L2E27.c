/*///////////////////////////////////////
///////////////////////////////////////
 27) Solicite ao usuario um numero maior ou igual a zero e inteiro representado pela variavel Num. 
Calcular o fatorial desse numero.
OBS: O Fatorial de zero e de um e' um.
Exemplo de calculo do Fatorial:
5! =5 * 4 * 3 * 2 * 1 ou
5! =1 * 2 * 3 * 4 *5
C CODE*/

#include <stdio.h>
int main (){
int num, i =0;
int fat = 1;

	do{
		printf("\n Digite um número maior que zero");
		scanf("%d", &num);
		if(num <= 0){
			printf("\n o número deve ser maior que zero!");
		}
	}while(num <= 0);

	for(i=1; i <= num; i++){
		fat = fat * i;
	}

	printf(" o fatorial de %d é: %d", num, fat);
}