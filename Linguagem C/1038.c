#include <stdio.h>

int main()

{
    /*Variavel*/
    float ord, quant, valor;

    /*Receber*/
    scanf("%f %f", &ord, &quant);

    if (ord == 1)
    {
        valor = quant * 4.00;
        printf("Total: R$ %.2f\n", valor);
    }
    if (ord == 2)
    {
        valor = quant * 4.50;
        printf("Total: R$ %.2f\n", valor);
    }
    if (ord == 3)
    {
        valor = quant * 5.00;
        printf("Total: R$ %.2f\n", valor);
    }
    if (ord == 4)
    {
        valor = quant * 2.00;
        printf("Total: R$ %.2f\n", valor);
    }
    if (ord == 5)
    {
        valor = quant * 1.50;
        printf("Total: R$ %.2f\n", valor);
    }
return 0;

}