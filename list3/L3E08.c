/* 8)	Receba K números inteiros quaisquer,
K representa a quantidade de termos solicitada pelo usuário e cada termo pode ser representado pela variável N.
Exiba a quantidade de números positivos recebidos e a média dos números ímpares.
Utilize o laço do while para a entrada da quantidade K e um laço while para efetuar os cálculos solicitados.*/

#include <stdio.h>
int num1,contaimpar,somanum1,contanum1,mod,i=0;
int qt1 = 3;
float result;

int main(){

    printf("Digite a quantidade de numero pares: \n");
    scanf("%d", &qt1);
    int num[qt1];
    while(i<qt1){
        printf("Digite o número %d: \n", i);
        scanf("%d", &num[i]);
        if(num[i]<0){
            contaimpar++;
        }
        mod = i%2;
        if(mod!=0){
            somanum1 += num[i];
            contanum1++;
            result = somanum1/contanum1;
        }
        i++;
    }
    printf("\n media impares: %f", result);
}
