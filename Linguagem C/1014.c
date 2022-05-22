#include <stdio.h>

int main()

{
   /*variaveis*/
   float X, Y, resultado;

   /*receber*/
   scanf("%f %f", &X, &Y);

   /*calcular*/
    resultado = X / Y;
    printf("%.3f km/l\n", resultado);

return 0;
}