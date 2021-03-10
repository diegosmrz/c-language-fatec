/* 5)	Solicite ao usuário números quaisquer até que a soma desses números digitados seja inferior a 20.
Utilize o laço while.
*/

#include <stdio.h>

void main()
{
    int num1, num2 = 0;
    int soma = 50;
    while(soma>20){
        printf("\n Digite o primeiro número: \n");
    	scanf("%d", &num1);
        printf("\n Digite o segundo número: \n");
    	scanf("%d", &num2);
        soma = num1+num2;
        printf("\n Resultado: %d \n", soma);
    };
}
