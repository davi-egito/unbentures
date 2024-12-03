/* Fazer uma função de Ackermann */ 
#include <stdio.h>
#include <stdlib.h>

int AckermannRecursivo () {
  int m;
  int n;
  if (m == 0) {
    return n + 1;
  } else if (m > 0 && n == 0) {
    return AckermannRecursivo(m - 1, 1);
  } else if (m > 0 && n > 0) {
    return AckermannRecursivo(m - 1, AckermannRecursivo(m, n - 1));
  }
}

int main () {
  int m;
  int n;
  printf("Digite o valor de m: ");
  scanf("%d", &m);
  printf("Digite o valor de n: ");
  scanf("%d", &n);
  printf("O resultado da função de Ackermann é: %d\n", AckermannRecursivo(m, n));
  return 0;
}