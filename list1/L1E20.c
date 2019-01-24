/*//////////////////////////////////////
///////////////////////////////////////
 20) Faca um programa que receba a altura e o sexo de uma pessoa e que calcule e mostre o seu peso ideal, 
utilizando as seguintes formulas:
// para homens: (72.7 * Altura ) - 58;
// para mulheres: (62.1 * Altura ) - 44.7.
C CODE*/ 

#include <stdio.h>
float alt, pes = 0;
char gen = 'N';

main(){
 		printf("Digite o seu genero; M ou F.");
 		scanf("%c", &gen);

		printf("Digite a altura [cm]. ");
	  	scanf("%f", &alt);

	    if (gen == 'M' || gen == 'm'){
     		pes = 72.7*alt - 58;}
  		else{
     		pes = 62.1*alt - 44.7;	
		} 	
    	  printf("\nO Peso Ideal e': %f kgs.", pes);
}