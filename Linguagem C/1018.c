#include <stdio.h>

int main ()

{
    /*Val*/
    int numero, n100, n50, n20, n10, n5, n2, n1;

    scanf ("%i", &numero);
    printf("%i\n", numero);

    n100 = 0;
    n50 = 0;
    n20 = 0;
    n10 = 0;
    n5 = 0;
    n2 = 0;
    n1 = 0;

    while (numero >= 100)
    {
        n100 = n100 + 1;
        numero = numero - 100;
    }

    while (numero >= 50)
    {
        n50 = n50 + 1;
        numero = numero - 50;
    }

    while (numero >= 20)
    {
        n20 = n20 + 1;
        numero = numero - 20;
    }

    while (numero >= 10)
    {
        n10 = n10 + 1;
        numero = numero - 10;
    }

    while (numero >= 5)
    {
        n5 = n5 + 1;
        numero = numero - 5;
    }

    while (numero >= 2)
    {
        n2 = n2 + 1;
        numero = numero - 2;
    }

    while (numero >= 1)
    {
        n1 = n1 + 1;
        numero = numero - 1;
    }

    printf ("%i nota(s) de R$ 100,00\n", n100);
    printf ("%i nota(s) de R$ 50,00\n", n50);
    printf ("%i nota(s) de R$ 20,00\n", n20);
    printf ("%i nota(s) de R$ 10,00\n", n10);
    printf ("%i nota(s) de R$ 5,00\n", n5);
    printf ("%i nota(s) de R$ 2,00\n", n2);
    printf ("%i nota(s) de R$ 1,00\n", n1);


   return 0;

}