#include <stdio.h>

//Contantes
float i7 = 7.5;
float i15 = 15.0;
float i22 = 22.5;
float i27 = 27.5;
float v7 = 1999.00;
float v15 = 2968.0;
float v22 = 3938.0;
float v27 = 4897.0;
int o = 0;
float taxaAnterior = 0;
float salarioTetoAnterior = 0;


float retornaTaxa(float salario){
	float taxa = 0;

	if(salario > v7 && salario <= v15){
		o = 1;
		taxa = i7;

		taxaAnterior = 0;
		salarioTetoAnterior = v7;

	}else if(salario > v15 && salario <= v22){
		o = 2;
		taxa = i15;

		taxaAnterior = i7;
		salarioTetoAnterior = v15;
	}else if(salario > v22 && salario <= v27){
		o = 3;
		taxa = i22;

		taxaAnterior = i15;
		salarioTetoAnterior = v22;
	}else if(salario > v27){
		o = 4;
		taxa = i27;

		taxaAnterior = i22;
		salarioTetoAnterior = v27;
	}
	return taxa;
}

void calcReturn(float salario){	 
	 
	float taxa = retornaTaxa(salario); 
	float desconto = salario - (salario/100*taxa); 
	float salarioA = 0;

	float salarioFinal = salario;
	exibe(salario, desconto, taxa, salarioFinal);

	calcCompare(salario, desconto, taxa, salarioFinal);
}

void calcCompare(float salario, float desconto, float taxa, float salarioFinal){	 
	 
	//Anterior
	taxaAnterior;
	salarioTetoAnterior; 
	float descontoA = salarioTetoAnterior - (salarioTetoAnterior/100*taxaAnterior); 
	float salarioFinalA = salario;
 
	exibe(salarioTetoAnterior, descontoA, taxaAnterior, salarioFinalA);
}

void exibe(float salario, float desconto, float taxa, float salarioFinal){
	printf("\n________________________\n");
	printf("Salário R$ %.2f \n", salario);
	printf("Taxa IR R$ %.2f \n", taxa);
	printf("Desconto IR R$ %.2f \n", desconto);
	printf("Salário final R$ %.2f \n", salarioFinal);
	printf("\n________________________\n");
}

main (void){
	float salario;

	printf("Informe o seu salário");
	scanf("%f", &salario);

	calcReturn(salario);

}