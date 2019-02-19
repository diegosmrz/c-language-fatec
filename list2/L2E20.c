/* //////////////////////////////////////
///////////////////////////////////////
 20) Receba a quantidade K de numeros positivos. K representa essa quantidade e deve ser digitada pelo usuario. 
A variavel Num armazena cada uma dos K numeros digitados. 
Calcule e mostre a quantidade de numeros i'mpares e a me'dia dos numeros pares superiores a 20. 
Exiba tambe'm o menor numero encontrado entre os numeros pares.
C CODE*/

#include <stdio.h>
int main (){
	int i, K = 0;
	int NUM[K];
	int imp = 0;
	int v = 0;
	int NUM20 = 0;
	int med = 0;
	int mod = 0;
	int menorpar = 0;

	printf("\nDigite quantos números deverão ser armazenados: \n");
	scanf("%d", &K);

	for(i=0; i < K; i++){
		printf("\n Digite o número da vez \n");
		scanf("%d", &NUM[i]);

		if( NUM[i] > 20){
			NUM20 = NUM20 + NUM[i];
			v++;
		}

		mod = NUM[i]%2;
		if(mod != 0){
			imp++;
		}
        else if (mod == 0 ){
            if( menorpar == 0 && menorpar < NUM[i]){
                menorpar = NUM[i];
            }
        }

	}

	printf("\n A quantidade de números impares é: %d", imp);
	printf("\n A quantidade de números maiores que 20 é: %d", v);
	med = NUM20/v;
	printf("\n A média de números maiores que 20 é: %d", med);
	printf("\n O menor par é: %d", menorpar);

}