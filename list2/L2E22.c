/* //////////////////////////////////////
///////////////////////////////////////
 22) Receba a quantidade K de numeros quaisquer. K representa essa quantidade e deve ser digitada pelo usuario. 
A variavel Num armazena cada uma dos K numeros digitados. 
Calcule e mostre 
a quantidade de numeros positivos divisi'veis por 3, 
a me'dia dos numeros negativos que sao divisi'veis por 5 
e sao superiores a 10. 
Exiba tambe'm o maior numero encontrado e quantas vezes ele apareceu.
C CODE*/

#include <stdio.h>
int main (){
int k =0;
int i = 0;
int pos3 = 0;
int med5p10 = 0;
int neg5p10 = 0;
int maior = 0;
int mod = 0;
int num[k];

	while( k <= 0){
		printf("\n Digite a quantidade de números a armazenar! ");
		scanf("%d", &k);
		if(k <= 0){printf("\n O número deve ser maior que zero");}
	}

	for(i=0; i<k; i++){

		printf("\n Digite o número da vez! \n");
		scanf("%d", &num[i]);

		if(num[i] >= 0){
		mod = num[i]%3;
			if(mod == 0){
				pos3++;
			}

			if(maior < num[i]){
				maior = num[i];
			}
		}else{
		mod = num[i]%5;
			if(mod == 0 && num[i] < -10){
				neg5p10 = neg5p10 + num[i];
				med5p10++;
			}
		}

	}

	printf("\n Foram digitados %d números positivos e divisiveis por 3 \n", pos3);
	printf("\n Foram digitados %d números negativos superiores a 10 e divisiveis por 5 \n", med5p10);
	med5p10 = neg5p10/med5p10;
	printf("\n A média dos números negativos superiores a 10 e divisiveis por 5 é de %d \n", med5p10);
	printf("\n O maior número digitado foi %d \n", maior);
}
