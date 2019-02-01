/* ///////////////////////////////////////
///////////////////////////////////////
1) Gere e exiba cada uma das sequencias abaixo com uma quantidade k de termos determinados pelo usuario.
i. 3, 6, 9, 12, 15,...
ii. 1/4, 1/8, 1/12, 1/16, 1/20,...
iii. 1/8, 3/16, 5/24, 7/32, 9/40, 11/48,...
iv. 2/3, 4/6, 6/9, 8/12,...
v. 2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...
vi. 4/8, 1, 36/24, 2, 100/40, 144/48,...
C CODE*/

#include <stdio.h>
int i, k = 0;
int i1, i2=1, ii1=1, ii2, iii1=-1, iii2, iv1, iv2, v1, v2, vi1, vi2;
int main (){
	while (k <= 0){
		printf("Digite quantas vezes voc^e quer contar.\n");
		scanf("%d", &k);	}

	printf("\nValores de i: \n i.: ");
	for (i = 0 ; i < k ; i++){
		i1 =  i1 + 3;
		printf(", %d",i1);
	}

	printf("\nValores de ii: \n ii.: ");
	for (i = 0;i < k; i++){
		ii2 =  ii2 + 4;
		printf(", %d/%d",ii1, ii2);
	}

	printf("\nValores de iii: \n iii.: ");
	for (i = 0;i < k; i++){
		iii1 =  iii1 + 2;
		iii2 =  iii2 + 8;
		printf(", %d/%d",iii1, iii2);
	}

	printf("\nValores de iv: \n iv.: ");
	for (i = 0;i < k; i++){
		iv1 =  iv1 + 2;
		iv2 =  iv2 + 3;
		printf(", %d/%d",iv1, iv2);
	}

		printf("\nValores de v: \n v.: ");
	for (i = 0;i < k; i++){
		v1 =  v1 + 2;
		v2 =  v2 + 5;
		printf(", %d/%d",v1, v2);
	}

}