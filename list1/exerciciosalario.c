#include <stdio.h>

//Contantes
float taxa7 = 7.5;
float taxa15 = 15.0;
float taxa22 = 22.5;
float taxa27 = 27.5;
float valor7 = 1999.00;
float valor15 = 2968.0;
float valor22 = 3938.0;
float valor27 = 4897.0;
float taxaAnterior = 0;
float salarioTetoAnterior = 0;


float retornaTaxa(float salario){
	float taxa = 0;
	if(salario > valor7 && salario <= valor15){
		taxa = taxa7;
		taxaAnterior = 0;
		salarioTetoAnterior = valor7;
	}else if(salario > valor15 && salario <= valor22){
		taxa = taxa15;
		taxaAnterior = taxa7;
		salarioTetoAnterior = valor15;
	}else if(salario > valor22 && salario <= valor27){
		taxa = taxa22;
		taxaAnterior = taxa15;
		salarioTetoAnterior = valor22;
	}else if(salario > valor27){
		taxa = taxa27;
		taxaAnterior = taxa22;
		salarioTetoAnterior = valor27;
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
