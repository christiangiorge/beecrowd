#include <stdio.h>

int main()

{
    /*variavel*/
    double A, B, C, pi, triangulo, circulo, trapezio, quadrado, retangulo;
    pi=3.14159;

    /*receber*/
    scanf("%lf %lf %lf", &A, &B, &C);

    /*calcular*/
    triangulo = A * C/2;
    printf("TRIANGULO: %.3lf\n", triangulo);

    circulo = pi * (C*C);
    printf("CIRCULO: %.3lf\n", circulo);

    trapezio = (A + B) * C/2;
    printf("TRAPEZIO: %.3lf\n", trapezio);

    quadrado = B * B;
    printf("QUADRADO: %.3lf\n", quadrado);

    retangulo = A * B;
    printf("RETANGULO: %.3lf\n", retangulo);

return 0;
}