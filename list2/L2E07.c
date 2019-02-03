/*///////////////////////////////////////
///////////////////////////////////////
 7) Receba via teclado um numero X, onde este numero representa a quantidade de termos que o usuario deseja. 
H representa cada um desses numeros, calcule o produto dos X numeros.
OBS: H deve ser maior ou igual a 15.
C CODE*/ 

#include <stdio.h>

int insere(ktam){
	int i = 0;
	int h[ktam];
	int hsoma = 0;
	while(hsoma < 15){
		for(i = 1; i < ktam; i++){
			printf("n\ Digite o Número: \n");
			scanf("%d", &h[i]);
			hsoma = hsoma + h[i];
		}
		if(hsoma < 15){
		printf("A soma total digitada atual é %d \n"
			"A soma é inferior a 15, digite novos números:\n ", hsoma);
		}else{
		printf("A soma total é igual a: %d", hsoma);
		}
	}

	return hsoma;
}


int main (){
int ktam = 0;
while(ktam < 15){
	printf("\n Digite o quantidade de valores a recolher.\n");
	scanf(" %d", &ktam);
	if(ktam < 15){
		printf("O número deve ser maior que 15: o Atual é %d \n", ktam);
		}
	}
	insere(ktam);
	char lifo = 'c';
	getchar(lifo);

}