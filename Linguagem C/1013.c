#include <stdio.h>

int main ()

{
    /*variaveis*/
    int a, b, c;

    /*receber*/
    scanf ("%i %i %i", &a, &b, &c);


    /*calcular*/
    if (a > b)
    {
        if (a > c)
        {
            printf("%i eh o maior\n", a);
        }
        else
        {
            printf("%i eh o maior\n", c);
        }
    }
    else
    {

       if(b > c)
        {
            printf("%i eh o maior\n", b);
        }
        else
        {
            printf("%i eh o maior\n", c);
        }


    }



return 0;
}