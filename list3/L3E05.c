/* 5)	Solicite ao usuário números quaisquer até que a soma desses números digitados seja inferior a 20. 
Utilize o laço while.
*/

#include <stdio.h>

int main()
{
    int num1, num2, soma = NULL;
    do{
        printf("\nDigite o primeiro número: \n");
    	scanf("%d", &num1);    
        printf("\nDigite o segundo número: \n");
    	scanf("%d", &num2);  
PRECISA REVISAR

    	soma = num1+num2;
    	if(soma<20){
    	    printf("\n Soma %d + %d = %d" num1, num2, soma);
    	    return 0;
    	}else{
    	printf("\n Soma maior que 20, insira novos numeros.");    
    	}
    }while(num1!=NULL && num2!=NULL && soma<20);
    return 0;
}