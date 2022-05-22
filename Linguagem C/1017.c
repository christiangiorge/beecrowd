#include <stdio.h>

int main ()

{
    /*Val*/
    float t, v, resultado;

    /*Receber*/
    scanf("%f %f", &t, &v);

    /*Calcular*/

    resultado = (t * v)/12;
    printf("%.3f\n", resultado);

return 0;
}