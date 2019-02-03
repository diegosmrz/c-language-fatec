/*///////////////////////////////////////
///////////////////////////////////////
 6) Receba a quantidade de idades de K indivi'duos. K representa essa quantidade e deve ser digitada pelo usuario. 
A variavel Idade armazena cada uma das K idades digitadas. Calcule e mostre a somatoria dessas idades.
C CODE*/ 

#include <stdio.h>
int pes = 0;

void verifica(ktamanho){
	int i = 0
	int soma = 0;
	for(i = 0; i < ktamanho; i++){
		while(num[i] < 0)
			printf("Digite o número\n");
			scanf("%d", &num[i]);
			soma = soma + num[i];
	}
}

int main (){
	printf("Digite o número de pessoas a recolher a idade.")
	scanf(" %d", &pes);
	verifica(pes);
}