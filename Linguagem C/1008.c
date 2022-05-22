#include <stdio.h>

int main()

{
    /*variaveis*/
    float n, h, vh, salario;

    /*receber*/
    scanf("%f", &n);
    scanf("%f", &h);
    scanf("%f", &vh);

   /*calcular*/
   salario = h * vh;
   printf("NUMBER = %.0f\n", n);
   printf("SALARY = U$ %.2f\n", salario);

return 0;
}