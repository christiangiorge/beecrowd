#include <stdio.h>

int main()

{
    /*Variaveis*/
    int A, B, C, D;

    /*Receber*/
    scanf("%i %i %i %i", &A, &B, &C, &D);

    if (B>C && D>A && C+D>A+B && C>0 && D>0 && A%2==0)
        {
            printf("Valores aceitos\n");
        }

    else
        {
            printf("Valores nao aceitos\n");
        }


    return 0;


}