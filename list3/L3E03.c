/* 3)	Receba um número inteiro e mostre os números pares de 2 até esse inteiro. Utilize o laço do while. */

#include <stdio.h>
int main()
{
	int limit = 0;
	int num, mod = 0;
	printf("Digite um número ");
    scanf("%d", &limit);
	while(num < limit){
		num++;
		mod = num%2;
		if(mod==0){
			printf("\n Num: %d", num);
		}
	}
}