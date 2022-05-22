#include <stdio.h>

int main()

{
    double numero, n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m5, m01;


        n100=0;
        n50=0;
        n20=0;
        n10=0;
        n5=0;
        n2=0;
        m1=0;
        m50=0;
        m25=0;
        m10=0;
        m5=0;
        m01=0;


        /*Receber*/
        scanf("%lf", &numero);

        /*comando while*/

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
            m1 = m1 + 1;
            numero = numero - 1;
        }

         while (numero >= 0.50)
        {
            m50 = m50 + 1;
            numero = numero - 0.50;
        }

         while (numero >= 0.25)
        {
            m25 = m25 + 1;
            numero = numero - 0.25;
        }

        while (numero >= 0.10)
        {
            m10 = m10 + 1;
            numero = numero - 0.10;
        }

        while (numero >= 0.05)
        {
            m5 = m5 + 1;
            numero = numero - 0.05;
        }

        while (numero >= 0.009)
        {
            m01 = m01 + 1;
            numero = numero - 0.01;
        }




        /*imprimir*/

    printf("NOTAS:\n");
    printf("%.0lf nota(s) de R$ 100.00\n", n100);
    printf("%.0lf nota(s) de R$ 50.00\n", n50);
    printf("%.0lf nota(s) de R$ 20.00\n", n20);
    printf("%.0lf nota(s) de R$ 10.00\n", n10);
    printf("%.0lf nota(s) de R$ 5.00\n", n5);
    printf("%.0lf nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%.0lf moeda(s) de R$ 1.00\n", m1);
    printf("%.0lf moeda(s) de R$ 0.50\n", m50);
    printf("%.0lf moeda(s) de R$ 0.25\n", m25);
    printf("%.0lf moeda(s) de R$ 0.10\n", m10);
    printf("%.0lf moeda(s) de R$ 0.05\n", m5);
    printf("%.0lf moeda(s) de R$ 0.01\n", m01);



    return 0;
}