2)	Mostre todos os números ímpares de 50 até 300.Utilize o laço do while.

#include <stdio.h>
int main()
{
	int num = 50, mod;
	
	while(num < 300){
		num++;
		mod = num%2;
		if(mod!=0){
			printf("\n Num: %d", num);
		}
	}
}