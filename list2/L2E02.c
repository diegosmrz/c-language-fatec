/*///////////////////////////////////////
///////////////////////////////////////
 2) Receba a quantidade K de numeros quaisquer. K representa essa quantidade e deve ser digitada pelo usuario. 
A variavel Num armazena cada uma dos K numeros digitados e devera ser alimentada pelo usuario. 
Verifique e exiba a quantidade de numeros positivos digitada.
C CODE*/

#include <stdio.h>
int k = 0;
int positive = 0;
int num[50];
int i = 0;

void verifica(ktamanho){
int i = 0;
	for(i = 0; i < ktamanho; i++){
		printf("Digite o número\n");
		scanf("%d", &num[i]);
		if(num[i] > 0) { positive = positive+1;} // positive ++ não rodou
	}
}

int main (){

	while(k <= 0){
		  printf("\n Informe uma quantidade: ");
		  scanf("%d", &k);
		  verifica(k);}
	  
  printf("O número de positivos digitados foi: %d \n", positive);
  
  for (i=0;i< k;i++){
  	printf("Número %d \n", num[i]);
  }
}
