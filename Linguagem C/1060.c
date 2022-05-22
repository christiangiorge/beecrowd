#include <stdio.h>

int main ()

{
    int qn , i;
    double n;
    i=1;
    qn=0;

    while (i<=6)
    {
        scanf("%lf", &n);
        i++;

        if(n>0)
        {
            qn++;
        }
    }

    printf("%d valores positivos\n", qn);

return 0;
}