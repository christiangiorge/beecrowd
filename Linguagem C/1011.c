#include <stdio.h>

int main()

{
    /*variavel*/
    double R, volume, pi;
    pi= 3.14159;

    /*receber*/
    scanf("%lf", &R);


    /*calcular*/
    volume= 4 * pi * (R*R*R)/3.0;
    printf("VOLUME = %.3lf\n", volume);

return 0;
}