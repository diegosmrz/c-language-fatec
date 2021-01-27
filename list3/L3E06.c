/* 6)	Calcule e mostre a média dos K primeiros pares e múltiplos de cinco.
OBS: K representa a quantidade de números pares solicitados via teclado pelo usuário. 
Os números pares deverão ser gerados pelo programador. 
Utilize o laço while para a entrada da quantidade K e um laço for para o cálculo da média.
		2, 4, 6, 8, 10,...*/

#include <stdio.h>
int num1,contanum1,somanum1,media,mod,mod2=0;
float result;

int main(){
    printf("Digite a quantidade de numero pares: \n");
    scanf("%d", &num1);
    num1 = num1*2;
    for(int i=1; i<num1 ;i++){
        mod = i%5;
        mod2 = i%2;
        if(mod==0&&mod2==0){
            somanum1 = somanum1+i;
            contanum1++;
            result = somanum1/contanum1;
        }
    }

    printf("\n result: %f", result);
}