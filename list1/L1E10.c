/* ////////////////////////////////////
///////////////////////////////////////
 10) O custo ao consumidor de um carro novo e:
 a soma do preco da fabrica + o percentual de lucro do distribuidor + impostos aplicados ao preco de fabrica. 
Faca um programa que receba o preco de fabrica de um vei'culo, 
o percentual de lucro do distribuidor e o percentual de impostos. 
Calcule e mostre:
a) O valor correspondente ao lucro do distribuidor
b) O valor correspondente aos impostos
c) O preco final do vei'culo
C CODE*/

#include <stdio.h>
float vlr_fab, lcr_d, imp_g, vlr_fnl = 0; 
int main (){

	while(vlr_fab <= 10){
		printf("Informe o valor do veiculo\n");
		scanf("%f", &vlr_fab);}

	while(lcr_d <= 0){
		printf("Informe a porcentagem de lucro.\n");
		scanf("%f", &lcr_d);}

	while(imp_g <= 0){
		printf("Informe a porcentagem de impostos.\n");
		scanf("%f", &imp_g);}

	vlr_fnl = vlr_fab + (vlr_fab * lcr_d / 100) + (vlr_fab * imp_g / 100);

	printf("\nValor de Fabrica: %f\nPorcentagem Lucro Distribuidor: %f%%\nPorcentagem dos Impostos: %f%%\nValor final : %f\n", vlr_fab, lcr_d, imp_g, vlr_fnl );
}