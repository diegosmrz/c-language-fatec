/* //////////////////////////////////////
///////////////////////////////////////
17) Receba tres numeros que garantam a existencia de uma equacao do segundo grau. 
Se existirem rai'zes reais exiba-as. Caso nao existam rai'zes informe ao usuario.
Observacoes:
Condicao de existencia de uma equacao do segundo grau: 
a) O coeficiente que acompanha o x2 devera ser um numero diferente de zero.
b) Delta maior que zero: a equacao possui duas rai'zes reais e distintas.
c) Delta igual a  zero: a equacao possui duas rai'zes iguais.
d) Delta menor que zero: a equacao nao apresenta rai'zes reais.
C CODE*/ 

#include <stdio.h>
#include <math.h>
float a, b, c = ;
float delta, x1, x2 = 0;
int main (){
  
  do(){
    printf("Digite o valor de A\n");
    scanf("%f\n", &a);
    if(a==0){ printf("\O valor de A não pode ser igual a zero."); }
  }while(a==0);
  
    printf("Digite o valor de B\n");
    scanf("%f\n", &b);
  
    printf("Digite o valor de C\n");
    scanf("%f\n", &c);
  
  delta = b*b - 4*a*c;
  
  x1 = (-b + sqrt(delta)) / 2*a;
  x2 = (-b - sqrt(delta)) / 2*a;
 
  if(delta > 0){
    //Delta maior que zero: a equacao possui duas rai'zes reais e distintas.
  }
  else if(delta == 0){
    //Delta maior que zero: a equacao possui duas rai'zes reais e distintas.
  }
  else{
   //Delta menor que zero: a equacao nao apresenta rai'zes reais.
  }
}	
