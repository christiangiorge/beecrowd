#include <stdio.h>

int main()
{
    /*variáveis*/
    double A, B, C, media;

    /*receber*/
    scanf("%lf %lf %lf", &A, &B, &C);

    /*calcular*/
    media = (A*2 + B*3 + C*5) /10;
    printf("MEDIA = %.1lf\n", media);

return 0;
}