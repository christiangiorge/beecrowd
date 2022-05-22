#include <stdio.h>

int main()

{
  /*variáveis*/
  int   codigo1, unidade1, codigo2, unidade2;
  float valor1, valor2, pagar;

  /*receber*/
  scanf("%i %i %f", &codigo1, &unidade1, &valor1);
  scanf("%i %i %f", &codigo2, &unidade2, &valor2);

  /*calcular*/
  pagar = (unidade1 * valor1) + (unidade2 * valor2);
  printf("VALOR A PAGAR: R$ %.2f\n", pagar);

return 0;
}