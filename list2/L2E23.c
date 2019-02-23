/*///////////////////////////////////////
///////////////////////////////////////
 23) Leia um numero representado pela variavel N ate' que N seja igual a zero. 
Se N for maior que zero guarda na variavel Positivos, 
se N for negativo acumule o valor na variavel Negativos e 
utilize a variavel Quant_Impares para guardar a quantidade de numeros i'mpares digitada
 independente de serem positivos ou negativos. 
Quando N for igual a zero exiba os valores das variaveis Positivos, Negativos e Quant_pares. 
Exiba tambe'm o maior numero i'mpar e o menor numero par digitado.
C CODE*/

#include <stdio.h>
int main (){
int n = 1;
int i = 0;
int kpos = 0;
int positivos[kpos];
int kneg = 0;
int negativos[kneg];
int mod = 0;
int kimp = 0;
int maiorimpar=0;
int menorpar=0;


	while( n != 0){
		printf("\n Digite o número N! \n");
		scanf("%d", &n);

		if( n >= 0){
			positivos[kpos] = n;
			kpos++;
		}
		else{
			negativos[kpos] = n;
			kneg++;
		}

		mod = n%2;
		if(mod != 0){
			kimp++;
			if(maiorimpar < n){ maiorimpar = n;}
		}
		else{
			if(menorpar > n || menorpar == 0){ menorpar = n;}
		}
	}
	printf(" \n Positivos: ");
	for(i=0; i<kpos; i++){
		printf(" - %d ", positivos[i]);
	}

	for(i=0; i<kneg; i++){
		printf(" - %d ", negativos[i]);
	}

	printf("\n A quantidade de números impares digitados é de %d \n", kimp);
	printf("\n O menor par digitado foi %d \n", menorpar);
	printf("\n O maior impar digitado foi %d \n", maiorimpar);

}
