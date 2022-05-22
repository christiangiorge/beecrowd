#include <stdio.h>

int main()

{
    /*variáveis*/
    double A,B, media;

    /*receber*/
    scanf("%lf", &A);
    scanf("%lf", &B);

    /*calcula*/
    media= (A*3.5 + B*7.5)/11;
    printf("MEDIA = %.5lf\n",media);

return 0;
}