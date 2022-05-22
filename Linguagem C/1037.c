#include <stdio.h>

int main ()

{
    /*Variavel*/
    float num;

    /*Receber*/
    scanf("%f", &num);

    if ((num >= 0) && (num <= 100))

    {
        if ((num >= 0) && (num <= 25))
            {
                printf("Intervalo [0,25]\n");
                return 0;
            }

        if ((num >= 0) && (num <= 50))
            {
                printf("Intervalo (25,50]\n");
                return 0;
            }

        if ((num>= 0)&& (num <= 75))
            {
                printf("Intervalo (50,75]\n");
                return 0;
            }

        if ((num>= 0 && num <= 100))
            {
                printf("Intervalo (75,100]\n");
                return 0;
            }
    }

    else
    {
        printf("Fora de intervalo\n");
    }

return 0;
}