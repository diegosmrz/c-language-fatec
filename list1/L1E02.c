/* 2) Receba tres numeros onde o primeiro deve ser maior do que zero e menor que 20. 
O segundo deve ser negativo e o terceiro representa um numero qualquer. 
Calcule a soma de cada numero elevado ao quadrado. 
Se a soma resultar um valor inferior a 1000 solicite novos dados.

C CODE */

#include <stdlib.h>
int a,b,c,s = 0;

int main()
{
	while (s < 1000)
	{
			do{
				printf("\nDigite um numero maior que zero e menor que vinte\n");
		 		scanf("%d", &a);
		 		if( a >=20 || a<=0 ){
		 			printf("O número deve ser maior que zero e menor que vinte.\n");
		 		}
	 		}while (a>=20 || a<=0);

		do{
			printf("\nDigite um numero negativo.\n");
			scanf("%d", &b);
				if( b >= 0 ){
		 			printf("O número deve ser negativo\n");
		 		}
		}while (b >= 0);
		
			printf("\nDigite um numero qualquer.\n");
 			scanf("%d", &c);

 			a = a * a;
	 		b = b * b;
	 		c = c * c;
	 		s = a + b + c;
 		 	if (s < 1000)
 		 		printf("\nEscolha novos numeros. \n\n");
 		 	else
 		 		printf("\nO resultado e' %d \n", s);
	}
}