/*///////////////////////////////////////
///////////////////////////////////////
 21) Receba via teclado um numero K. A variavel K representa a quantidade de numeros solicitada ao usuario. 
A variavel Num representa cada um desses numeros digitados pelo usuario. 
Exiba a quantidade de vezes que o numero zero foi digitado, 
a quantidade de vezes que apareceram numeros pares e quantos numeros i'mpares foram digitados. 
Exiba o menor numero digitado definido dentro de intervalo fechado entre 15 e 35.
C CODE*/

#include <stdio.h>
void main (){
    int k = 0;
    int i = 0;
    int num[k];
    int mod = 0;
    int menor1535 = 36;
    int zero = 0;
    int par = 0;
    int impar = 0;

	while(k <= 0){
		printf("\n Digite um número maior que zero");
		scanf("%d", &k);

		if(k <= 0){
			printf("\n o número deve ser maior que zero!");
		}

	}

	for(i=0; i<k; i++){

		printf("\n Digite o número da vez: \n");
		scanf("%d", &num[i]);

		mod = num[i]%2;

		if(mod == 0){ par++; }
		else if(mod != 0){ impar++; }

		if(num[i] == 0){
            zero++;
		}

		if( num[i] > 15 && num[i] < 35){
			if(num[i] < menor1535){
                menor1535 = num[i];
			}
		}
	}

	printf("\n Foram digitados %d zeros \n", zero);
	printf("\n Foram digitados %d números pares \n", par);
	printf("\n Foram digitados %d números impares \n", impar);
	if(menor1535 < 15 || menor1535 > 35){ printf("\n Nenhum número digitado entre 15 e 35! \n");} else{printf("\n O menor número digitado entre 15 e 35 é?: %d \n", menor1535);}

}