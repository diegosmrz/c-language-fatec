 /*///////////////////////////////////////
///////////////////////////////////////
 5) Receba numeros ate' que esse numero seja igual a zero. 
Exiba a quantidade de numeros digitados que sao multiplos de 3 ou 5.
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
			if(num[i]%2=0 && num[i]%3=0) { divisivel = divisivel+1;}
		}
	}
}

int main (){
		while(k <= 0){
			  printf("\n Informe uma quantidade: ");
			  scanf("%d", &k);
			  verifica(k);
		}  

  printf("O número de positivos digitados foi: %d \n", positive);
  
  for (i=0;i< k;i++){
  	printf("%dº número %d \n",i, num[i]);
  }
}
