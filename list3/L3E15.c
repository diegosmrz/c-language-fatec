/* 15)	Gere a seguinte sequência abaixo para K termos. 
K representa a quantidade de números que o usuário gostaria quer fosse exibida dessa sequência. 
Mostre também a somatória apenas dos números divisíveis por 3 dessa sequência. 
Utilize o laço do while para a entrada da quantidade K e um laço for para efetuar os cálculos solicitados.
		1, 1, 2, 3, 5, 8, 13, 21,..... 
 */
		
#include <stdio.h>
int main (){
int k,i =0;
int f1, f2, f3 = 0;

	do{
		printf("\n Digite um número maior que zero");
		scanf("%d", &k);
		if(k <= 0){
			printf("\n o número deve ser maior que zero!");
		}
	}while(num <= 0);

	f1 = 0;
	f2 = 1; 
	f3 = 1;
	
	for(i=0; i < k; i++){
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}

}
