 /*///////////////////////////////////////
///////////////////////////////////////
 4) Receba K numeros positivos. 
Cada numero recebido devera ser armazenado na variavel Num e a variavel K representa a quantidade de numeros solicitada pelo usuario. 
Exiba a quantidade de numeros divisi'veis por 2 e 3 ao mesmo tempo.
C CODE*/

#include <stdio.h>
int k = 0;
int divisivel = 0;
int num[50];
int i = 0;

void verifica(ktamanho){
int i = 0;
	for(i = 0; i < ktamanho; i++){
		while(num[i] < 0){
			printf("Digite o número\n");
			scanf("%d", &num[i]);
			if(num[i] % 2 = 0){ 
			if (num[i] % 3 = 0){{ divisivel = divisivel+1;}}}
}

int main (){
		while(k <= 0){
			  printf("\n Informe uma quantidade: ");
			  scanf("%d", &k);
			  verifica(k);
		}  

  printf("O número de divisiveis por 2 e 3 digitados foi: %d \n", divisivel);
  
  for (i=0;i< k;i++){
  	printf("%dº número %d \n",i, num[i]);
  }
}