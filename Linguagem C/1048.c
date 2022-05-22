#include <stdio.h>

int main()

{
    double s, rs , ns;

    scanf("%lf", &s);

    if (s > 0 && s <= 400.00)
    {
        rs = s * 0.15;
        ns = s + rs;

    printf("Novo salario: %.2lf\n", ns);
    printf("Reajuste ganho: %.2lf\n", rs);
    printf("Em percentual: 15 %%\n");
    }

    if (s >= 400.01 && s <= 800.00)
    {
        rs = s * 0.12;
        ns = s + rs;

    printf("Novo salario: %.2lf\n", ns);
    printf("Reajuste ganho: %.2lf\n", rs);
    printf("Em percentual: 12 %%\n");
    }

    if (s >= 800.01 && s <= 1200.00)
    {
        rs = s * 0.10;
        ns = s + rs;

    printf("Novo salario: %.2lf\n", ns);
    printf("Reajuste ganho: %.2lf\n", rs);
    printf("Em percentual: 10 %%\n");
    }

    if (s >= 1200.01 && s <= 2000.00)
    {
        rs = s * 0.07;
        ns = s + rs;

    printf("Novo salario: %.2lf\n", ns);
    printf("Reajuste ganho: %.2lf\n", rs);
    printf("Em percentual: 7 %%\n");
    }

    if (s > 2000.00)
    {
        rs = s * 0.04;
        ns = s + rs;

    printf("Novo salario: %.2lf\n", ns);
    printf("Reajuste ganho: %.2lf\n", rs);
    printf("Em percentual: 4 %%\n");
    }
return 0;
}