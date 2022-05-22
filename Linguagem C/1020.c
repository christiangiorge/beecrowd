#include <stdio.h>

int main ()

{
    int vn, anos, meses, dias;

    //*Receber*//
    scanf ("%i", &vn);

    //*Calcular*//
    anos = vn/365;
    meses = (vn - (365*anos))/30;
    dias = (vn - (365*anos) - (30*meses));

    //*Termino*//
    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);


    return 0;
}