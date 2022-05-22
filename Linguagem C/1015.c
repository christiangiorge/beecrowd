#include <stdio.h>
#include <math.h>
int main()

{
    /*variaveis*/
    double x1, y1, x2, y2,distancia;

    /*receber*/

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    /*calcular*/
    distancia =sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)) ;
    printf("%.4lf\n", distancia);

return 0;
}