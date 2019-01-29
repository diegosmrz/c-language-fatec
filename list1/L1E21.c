/* ///////////////////////////////////////
///////////////////////////////////////
 21) Faca um programa que receba a altura e o peso de uma pessoa. 
De acordo com a tabela a seguir e mostre qual a classificacao dessa pessoa.
Altura
Peso
Ate' 60
Entre 60 e 90(Inclusive)
Acima de 90
Menores que 1,20
A
D
G
De 1,20 a 1,70
B
E
H
Maiores que 1,70
C
F
I
C CODE*/

#include <stdio.h>
int alt, pes = 0;

int main (){

	while (alt < 10 || pes < 10 ){
		printf("Digite a sua altura.\n");
		scanf("%d", &alt);
		printf("\nDigite o seu peso\n");
		scanf("%d", &pes);
			if( alt < 10 ){printf("\nVocê digitou a altura menor que 10, insira novos numeros.");}
				else if( pes < 10 ){printf("\nVocê digitou o peso menor que 10, insira novos numeros.");}
					else {printf("\nPeso: %d e Altura: %d \n\n", alt, pes);}
	}

	if ( alt <= 120 && pes < 60 ) { printf("Clase A");}
	else if ( alt <= 120 && pes <= 90 ) { printf("Clase D");}
	else if ( alt <= 120 ) { printf("Clase G");}

	else if ( alt <= 170 && pes <= 60 ) { printf("Clase B");}
	else if ( alt <= 170 && pes <= 90 ) { printf("Clase E");}
	else if ( alt <= 170 ) { printf("Clase H");}

	else if ( pes <= 60 ) { printf("Clase C");}
	else if ( pes <= 90 ) { printf("Clase F");}
	else { printf("Clase I");}
}