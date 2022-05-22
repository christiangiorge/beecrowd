#include <stdio.h>

int main ()

{
    /*Var*/
    int a, b;

    /*receber*/
    scanf("%d %d", &a, &b);

    /*Logica, verificando se 2 numeros sao multiplos entre si*/

    if(a%b==0 || b%a==0)
    {
        printf("Sao Multiplos\n");
    }

    else
    {
        printf("Nao sao Multiplos\n");
    }
return 0;
}