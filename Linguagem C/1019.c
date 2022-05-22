#include <stdio.h>

int main()

{
    int vn, horas , minutos, segundos;

    scanf("%i", &vn);

    horas = vn/3600;
    minutos = (vn - (3600 * horas))/60;
    segundos = (vn - (3600 * horas) - (minutos * 60));

    printf ("%i:%i:%i\n", horas, minutos, segundos);


    return 0;
}