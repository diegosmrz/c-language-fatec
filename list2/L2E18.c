/*///////////////////////////////////////
///////////////////////////////////////
 18) Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usuario. 
A variavel Peso armazena cada um do K pesos digitados. 
Calcule e mostre a me'dia dos pesos superiores ou iguais a 70 quilos e inferiores ou iguais a 85,5 e 
a quantidade de pessoas que apresentam pesos superiores a 75 quilos. Exiba tambe'm o menor e o maior peso encontrado.
C CODE*/

#include <stdio.h>

int main (){
	int i = 0;
    int pessoas;
    float pesosoma = 0;
    int pesoquant = 0;

        printf("Digite a quantidade de pessoas! \n");
        scanf("%d", &pessoas);

	float peso[pessoas];
		for(i = 0; i < pessoas; i++){
			printf("\n Digite o peso!");
	        scanf("\n %f", &peso[i]);

	        if( (peso[i] >= 70) && (peso[i] <= 85,5)){
				pesosoma = pesosoma + peso[i];
				pesoquant++;
			}
		}

		for(i = 0; i < pessoas; i++){
			printf("\n Pessoa %d pesa %f \n", i, peso[i]);
		}

		float mediapesosoma = pesosoma/pesoquant;

		printf("\n A média de peso de pessoas entre 70 e 85,5 é de: %f \n", mediapesosoma);
}
