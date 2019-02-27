/* ////////////////////////////////////
///////////////////////////////////////
 14) Leia quatro valores referentes a s notas escolares de um aluno e 
exiba uma mensagem dizendo que ele foi aprovado se a me'dia for maior ou igual a 5. 
Caso contrario informe que ele esta reprovado. 
Apresente junto a  mensagem o valor da me'dia obtida pelo aluno independente de ter sido aprovado ou nao. 
As notas deverao ser maiores ou iguais a zero e menores ou iguais a dez.
C CODE*/

#include <stdio.h>
float nota[4], media = 0; 
int for_med = 0;
int main (){

	for (for_med = 1 ; for_med <= 4 ; for_med++){
             do{
		 printf("\nDigite o valor da nota %d\n", for_med);
		 scanf("%f", &nota[for_med]);}
             }while(nota[for_med] < 0 || nota[for_med] > 10);
	media = (nota[1] + nota[2] + nota[3] + nota[4])/4;
 	
 	printf("\nO valor das notas foram: \n1: %f \n2: %f \n3: %f \n4: %f \nA media e' %f \n", nota[1], nota[2], nota[3], nota[4], media);
 	if(media >= 5){printf("Aprovado");}
 	else {printf("Reprovado");}
}
