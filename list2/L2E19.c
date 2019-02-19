/* //////////////////////////////////////
///////////////////////////////////////
 19) Receba K numeros quaisquer, 
K representa a quantidade de termos solicitada pelo usuario e cada termo pode ser representado pela variavel N. 
Exiba a quantidade dos numeros divisi'veis por 11 e a me'dia apenas dos numeros i'mpares negativos e multiplos de 13. 
Exiba o maior numero encontrado divisi'vel por 11.
C CODE*/

#include <stdio.h>
int main (){
	int i;
    int k = 0;
    int n[k] = 0;
    int d11 = 0;
    int d13 = 0;
    int dv13[d13];

    printf("/nDigite o número de termos a serem digitados./n");
  	scanf("%d", &k);
  	
  	for( i = 0; i < k; i++){
  		printf("/nDigite o %dº número./n", i);
  		scanf("%d", &n[i]);
  		if( (n[i]/11) = 0){
  			d11++;
  		}
  		if( (n[i]/13) = 0){
			dv13[d13] = n[i];
  			d13++;
  		}

  		printf("/n%d números são divisiveis por 11/n", d11);
		printf("/n%d números são divisiveis por 13/n", d13);
		printf("/n Números divisíveis por 13: /n", d13);

  		for(i = 0; i < k; i++){
  			printf("/n %d - %d /n", i, dv13[i]);
  		}
  	}
}
