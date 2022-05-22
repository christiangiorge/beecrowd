#include <stdio.h>

int main()

{
    /*variável*/
    char nome;

    /*variáveis*/
    double salario, comissao, total;

    /*receber*/
    scanf("%s %lf %lf", &nome, &salario, &comissao);

    /*calcular*/
    total = salario + (15 * comissao)/100;
    printf("TOTAL = R$ %.2lf\n", total);

return 0;
}