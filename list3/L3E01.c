/* 1)	Mostre todos os números ímpares de 1 até 100.Utilize o laço while. */ 
#include <stdio.h>
int main()
{
	int num = 0, mod = 0;
	while(num < 100){
		num++;
		mod = num%2;
		if(mod!=0){
			printf("\n Num: %d", num);
		}
	}
}