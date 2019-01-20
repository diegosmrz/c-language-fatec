 /* ////////////////////////////////////
///////////////////////////////////////
 9) Receba dois numeros quaisquer, onde 
	o primeiro deve ser maior que zero e 
	o segundo menor ou igual a zero. 
    Calcule e mostre na tela o produto entre eles.
C CODE*/ 

#include <stdio.h>
int nasc, a_atual, idade = -1;
int main (){

	printf("Digite o ano atual\n");
	scanf("%d", &a_atual);

	while (nasc <= 0){
			printf("\nDigite seu ano de nascimento \n");
		    scanf("%d", &nasc);		
	}
	idade = a_atual - nasc;
 	printf("Ano atual: %d\nAno nascimento: %d\nIdade: %d", a_atual, nasc, idade);
}
