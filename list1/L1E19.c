/* ///////////////////////////////////////
///////////////////////////////////////
 19) Receba tres numeros que garantam a existencia de uma equacao completa do segundo grau. 
Se existirem rai'zes reais exiba-as e informe ao usuario se sao iguais ou diferentes. 
Caso nao existam rai'zes tambe'm informe ao usuario e solicite novos dados. Considerar as observacoes do ex.17.
C CODE*/ 

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float delta, sqrtdelta; 
    float r1,r2;

       printf("Equação do 2o grau: ax² + bx + cx = 0\n");

        printf("Digite o valor de A: ");
        scanf("%f", &a);

        printf("Digite o valor de B: ");
        scanf("%f", &b);

        printf("Digite o valor de c: ");
        scanf("%f", &c);

        if(a <> 0)
        {
         
            delta = (b*b) - (4*a*c);
            sqrtdelta = sqrt(delta);
          
            if(delta >= 0)
            {
                r1 = (-b + sqrtdelta)/(2*a);
                r2 = (-b - sqrtdelta)/(2*a);
                printf("Valor das Raízes: %.2f e %.2f", r1, r2);
            }
            else
            {
                delta = -delta;
                sqrtdelta = sqrt(delta);
                printf("Raíz 1: %.2f + i.%.2f\n", (-b)/(2*a), (sqrtdelta)/(2*a));
                printf("Raíz 2: %.2f - i.%.2f\n", (-b)/(2*a), (sqrtdelta)/(2*a));

            }

        }
        else
            printf("Coeficiente 'a' inválido. Não é uma equação do 2o grau");
}
