/*///////////////////////////////////////
///////////////////////////////////////
 3) Efetue a leitura de um valor inteiro qualquer e exiba o numero lido e o seu modulo. 
  O modulo de um numero positivo e' o proprio numero. 
  O modulo de um numero negativo e' obtido multiplicando-o por menos 1.
C CODE*/

#include <stdlib.h>
int a, a_mod;

int main (void) {

	printf("Digite um numero \n");
	scanf("%d", &a);

	if (a < 0){ 
	a_mod = a * -1;}
		else 
		a_mod = a;

	printf("O numero digitado foi %d e seu modulo e': %d \n", a, a_mod);
}