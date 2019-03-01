/*///////////////////////////////////////
///////////////////////////////////////
 26) Gere a seguinte sequencia abaixo para K termos. 
K representa a quantidade de numeros que o usuario gostaria quer fosse exibida dessa sequencia. 
Mostre tambe'm a somatoria apenas dos numeros divisi'veis por 3 dessa sequencia.
1, 1, 2, 3, 5, 8, 13, 21,.....
C CODE*/

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