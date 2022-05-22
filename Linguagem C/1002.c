#include <stdio.h>

int main()

{
    /* varaiaveis*/
    double raio, area;

    /*receber*/
    scanf("%lf", &raio);

    /*calculo*/

    area = 3.14159 * raio * raio;
    printf ("A=%.4lf\n", area);

return 0;

}