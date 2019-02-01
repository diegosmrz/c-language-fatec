/*///////////////////////////////////////
///////////////////////////////////////
 3) Receba K numeros. Exiba a quantidade de numeros pares negativos e quantas vezes o numero zero foi digitado. 
Obs1: K representa a quantidade de numeros digitados pelo usuario.
Obs2: A variavel Num representa cada numero digitado pelo usuario.
C CODE*/

#include <stdio.h>
int k = 0;
int negative = 0;
int num[50];
int i = 0;

void verifica(ktamanho){
int i = 0;
	for(i = 0; i < ktamanho; i++){
		printf("Digite o número\n");
		scanf("%d", &num[i]);
		if(num[i]%2=0 && num[i] < 0) { negative = negative+1;} // o modulo não rodou
	}
}

int main (){
		while(k <= 0){
			  printf("\n Informe uma quantidade: ");
			  scanf("%d", &k);
			  verifica(k);
		}  

  printf("O número de negativos digitados foi: %d \n", negative);
  
  for (i=0;i< k;i++){
  	printf("%dº número %d \n",i, num[i]);
  }
}