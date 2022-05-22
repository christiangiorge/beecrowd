#include <stdio.h>

int main ()

{
    /*Var*/
    float a, b, c, p, at;

    /*Receber*/
    scanf("%f %f %f", &a, &b, &c);

    /*Logica, para verificar a existencia de um triangulo
    deve se notar que tendo 3 retas a, b, c e que uma reta
    tem que ser menor que a soma das outras e maior que a
    diferenca das outras*/

    if(a < b + c && a> b - c)
        {
            p = a+b+c;
            printf("Perimetro = %.1f\n", p);
        }
    else
        {
           at = c*(a+b)
           /2;
           printf("Area = %.1f\n", at);
        }
    return 0;
}