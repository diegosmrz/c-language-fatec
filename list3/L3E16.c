/* 16)	Solicite ao usuário um número maior ou igual a zero e inteiro representado pela variável num. Calcular o fatorial desse número.
Utilize o laço while para a entrada da variável num e um laço for para efetuar o cálculo do fatorial.
	     OBS: O Fatorial de zero e de um é um.
         Exemplo de cálculo do Fatorial:
		5! =5 * 4 * 3 * 2 * 1            ou
		5! =1 * 2 * 3 * 4 *5 */

#include<stdio.h>
int fatorial, n;

int main()
{
  printf("Digite o número a calcular.\n");
  scanf("%d", &n);

  for(fatorial = 1; n > 1; n = n - 1)
  {
      fatorial = fatorial * n;
  }

  printf("\n%d", fatorial);
  return 0;
}
