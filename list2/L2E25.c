/*///////////////////////////////////////
///////////////////////////////////////
 25) Efetue a leitura de K numeros inteiros que so poderao ser divisi'veis por 2 e 3 ao mesmo tempo, 
exiba a me'dia apenas desses numeros que sao pares e o maior numero par encontrado e quantas vezes ele apareceu. 
Lembrando que K representa a quantidade de numeros solicitada pelo usuario 
e cada termo pode ser representado pela variavel N.
C CODE*/

#include <stdio.h>
int main (){
	int div2e3, meddiv2e3, contdiv2e3, maiorpar2e3, qt2e3, i, n, mod, k = 0;

	while( k <= 0){
		printf("\n Digite a quantidade de numeros a digitar. \n");
		scanf("%d", &k);
	}

	for(i=0;i<k;i++){

		printf("\n Digite o numero da vez \n");
		scanf("%d", &n);

		mod = n%3;
		if(mod == 0){
			mod = n%2;
			if(mod == 0){
				contdiv2e3++;
				meddiv2e3 = meddiv2e3 + n;
					if(maiorpar2e3 < n){
						qt2e3 = 1;
						maiorpar2e3 = n;
					}
					else{
						qt2e3++;
					}
			}
		}
		else { printf("\n Este número não é divisível por 2 e 3 \n");}
    }

		printf("\n Foram digitados %d numeros divisiveis por 2 e 3", contdiv2e3);
		meddiv2e3 =  meddiv2e3/contdiv2e3;
		printf("\n A média destes números é: %d \n", meddiv2e3);
		printf("\n O maior par: %d, foi digitado %d vezes.", maiorpar2e3, qt2e3);

}