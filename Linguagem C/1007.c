#include <stdio.h>

int main()

{
    /*variáveis*/
    int A, B, C, D, DIFERENCA;

    /*receber*/
    scanf("%i %i %i %i", &A, &B, &C, &D);

    /*calcular*/
    DIFERENCA = (A * B - C * D);

    printf("DIFERENCA = %i\n", DIFERENCA);

return 0;
}