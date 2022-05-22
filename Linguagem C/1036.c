#include <stdio.h>
#include <math.h>
int main()

{
    /*Variaveis*/
    float a, b, c, delta, r1, r2, raiz;

    /*Receber*/
    scanf("%f %f %f", &a, &b, &c);

    /*Calcular*/
    if (a==0)

    {
        printf("Impossivel calcular\n");

        return 0;
    }

    else
    {
        delta = b*b -4 *a*c;
    }

    if (delta<0)
    {
        printf("Impossivel calcular\n");

    return 0;
    }

    else
    {
        raiz= sqrt(delta);
        r1= (-b + raiz) / (2*a);
        r2= (-b - raiz) / (2*a);
        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }

return 0;
}