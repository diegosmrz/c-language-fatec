/* //////////////////////////////////////
///////////////////////////////////////
 17) Receba a quantidade de salarios de K indivi'duos. 
K representa essa quantidade e deve ser digitada pelo usuario. 
A variavel Salario armazena cada uma dos K salarios digitados. 
Calcule e mostre a somatoria dos salarios superiores a 3 salarios mi'nimos e inferior ou igual a 7 salarios mi'nimos. 
Exiba tambe'm o maior e o menor salario encontrado.
C CODE*/

#include <stdio.h>

int main (){
    int i = 0;
    int pessoas;
    float salminimo = 0;
    float soma3a7salminimo = 0;

        printf("Digite a quantidade de pessoas! \n");
        scanf("%d", &pessoas);

        printf("Digite o valor do salário minimo! \n");
        scanf("%f", &salminimo);

	float salario[pessoas];
	for(i = 0; i < pessoas; i++){
		printf("\n Digite o salário!");
        scanf("\n %f", &salario[i]);
        if(salario[i] > (salminimo*3) && salario[i] < (salminimo*7)){
			soma3a7salminimo = soma3a7salminimo + salario[i];
		}
	}

	for(i = 0; i < pessoas; i++){
		printf("\n Pessoa %d:, recebe R$ %f \n", i, salario[i]);
	}

	printf("\n A soma de salários entre 3 a 7 salários mínimos é de: R$ %f \n", soma3a7salminimo);
}