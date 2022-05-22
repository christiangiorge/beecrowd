#include <stdio.h>

int main ()

{
    /*Variáveis*/
    int a, b, c;

    /*Receber*/
    scanf("%d %d %d", &a, &b, &c);

    if (a>b)
    {
        if(b>c)
        {
            printf("%d\n%d\n%d\n\n", c, b, a);
            printf("%d\n%d\n%d\n", a, b, c);
            return 0;
        }

        else
        {
            if(a>c)
            {
                printf("%d\n%d\n%d\n\n", b, c, a);
                printf("%d\n%d\n%d\n", a, b, c);
                return 0;
            }

            else
            {
                printf("%d\n%d\n%d\n\n", b, a, c);
                printf("%d\n%d\n%d\n", a, b, c);
                return 0;
            }
        }
    }

    else
    {
        if (b>c)
        {
            if (a>c)
            {
                printf("%d\n%d\n%d\n\n", c, a, b);
                printf("%d\n%d\n%d\n", a, b, c);
                return 0;
            }

            else
            {
                printf("%d\n%d\n%d\n\n", a, c, b);
                printf("%d\n%d\n%d\n", a, b, c);
                return 0;
            }
        }

        else
            {
                printf("%d\n%d\n%d\n\n", a, b, c);
                printf("%d\n%d\n%d\n", a, b, c);
                return 0;
            }


    }
}