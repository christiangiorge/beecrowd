#include <stdio.h>

int main ()

{
    /*Variaveis, ne= nota exame, mde= media de exame*/
    float n1, n2, n3, n4, med, ne, mde;

    /*Receber*/
    scanf ("%f %f %f %f", &n1, &n2, &n3, &n4);

    /*Calculo de média*/
    med = n1*0.2 + n2*0.3 + n3*0.4 + n4*0.1;
    printf ("Media: %.1f\n", med);

    /*Verificação de aprovado, reprovado e de exame*/
    if (med >= 7.0)
    {
        printf ("Aluno aprovado.\n");
    }

    else
    {
        if (med < 5.0)
        {
            printf ("Aluno reprovado.\n");
        }

        else
        {
            printf("Aluno em exame.\n");
            scanf ("%f", &ne);
            printf ("Nota do exame: %.1f\n", ne);

            mde = (med + ne) /2;

            if (mde >5)

            {
                printf ("Aluno aprovado.\n");
                printf ("Media final: %.1f\n", mde);
            }

            else
            {
                printf ("Aluno reprovado.\n");
                printf ("Media final : %.1f\n", mde);
            }

        }
    }
return 0;
}