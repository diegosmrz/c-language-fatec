/* 4)	Pergunte ao usuário quantos alunos tem na sala dele. 
Em seguida, através de um laço do while, peça ao usuário para que entre com as notas de todos os alunos da sala,
um por vez. Exiba a média da turma e quantas notas foram digitadas maiores ou iguais a 6.  */

#include <stdio.h>
void main (){
	int qtAlunos, nota, contaNotas = 0, somaNotas = 0, vez = 0;

		printf("\nDigite quantos alunos tem na sua turma: \n");
		scanf("%d", &qtAlunos);
	
	do{
		printf("\nDigite a nota da pessoa: \n");
		scanf("%d", &nota);
		somaNotas += nota;
		if(nota>=6){
			contaNotas++;
		}
		vez++;
	}while(vez<qtAlunos);

	printf("\nMédia de notas : %d", somaNotas/qtAlunos);
	printf("\nQuantidade de notas maiores que 6 : %d", contaNotas);
}