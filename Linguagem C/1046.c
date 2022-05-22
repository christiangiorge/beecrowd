#include <stdio.h>

int main ()

{
   int hi, hf, h;

   scanf("%d %d", &hi, &hf);
   h = hf - hi;

   if (h<0)
   {
       h= h + 24;
   }

    if (hi==hf)
   {
       printf("O JOGO DUROU 24 HORA(S)\n");
   }

    else
    {
        printf("O JOGO DUROU %d HORA(S)\n", h);
    }
    
   return 0;
}