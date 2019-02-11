/*///////////////////////////////////////
///////////////////////////////////////
 13) Calcule o quadrado de cada um dos numeros i'mpares que deverao ser gerados pelo programador. 
Mostre a somatoria dos quadrados dos k primeiros i'mpares.
OBS: K representa a quantidade de i'mpares e e' um dado recebido via teclado.
1, 3, 5, 9, 11,...
C CODE*/

#include <stdio.h>

int calcula (int ktamanho){
	int i = 0;
	int num[ktamanho];
	int quad = 0;
    int quadsoma = 0;
	int imp = 1;

	for(i = 1; i < ktamanho+1; i++){

        quad = (imp * imp);
		quadsoma = quad + quadsoma;

		printf("----------------------------\n");
		printf("vez: %d \n", i);
		printf("impar: %d \n", imp);
		printf("quadrado da vez: %d \n", quad);
		printf("quadrado total: %d \n", quadsoma);
		printf("----------------------------\n");
		imp = imp+2;
	}
		printf("-------------FINAL----------\n");
		printf("impares: %d \n", ktamanho);
		printf("quadrado total: %d \n", quadsoma);
		printf("----------------------------\n");
}

int main (){
	int ktam = 0;

	printf("Digite a quantidade de números impares a calcular. \n\n");
	scanf("%d", &ktam);

	calcula(ktam);

}