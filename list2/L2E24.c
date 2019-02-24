/* //////////////////////////////////////
///////////////////////////////////////
 24) Receba K numeros inteiros quaisquer. 
K representa a quantidade de termos solicitada pelo usuario e cada numero pode ser representado pela variavel N. 
Exiba a somatoria dos numeros divisi'veis por 5 e a me'dia dos numeros multiplos de 7. 
Mostre tambe'm o maior numero digitado divisi'vel por 5 e a quantidade de vezes que ele NaƒO apareceu.
C CODE*/

#include <stdio.h>
int main (){
	int i = 0;
	int k = 0;
	int div5 = 0;
	int sumdiv5 = 0;
	int qthigh5 = 0;
	int highdiv5 = 0;
	int countm7 = 0;
	int average7 = 0;
	int mod = 0;
	int n[k];

	while( k <= 0){
		printf("\n Digite a quantidade de numeros a digitar.");
		scanf("%d", &k);
	}

	for(i=0; i < k; i++){
		printf("\n Digite o numero da vez: \n");
		scanf("%d", &n[i]);

		mod = n[i]%5;
		if(mod == 0){
			sumdiv5 = n[i] + sumdiv5;
			div5++;
				if(n[i] > highdiv5){
					qthigh5 = 1;
					highdiv5 = n[i];
				}
				else if(n[i] == highdiv5){
					qthigh5++;
				}
		}

		mod = n[i]%7;
		if(mod == 0){
			countm7++;
			average7 = n[i] + average7;
		}
	}

	average7 = average7/countm7;

	printf("\n Foram digitados %d numeros divisiveis por 5 somando o total de %d \n", div5, sumdiv5);
	printf("\n O maior número divisivel por 5 digitado %d, foi digitado %d vezes. \n", highdiv5, qthigh5);
	printf("\n Foram digitados %d números multiplos de 7, a média´desses números é %d \n", countm7, average7);
}
