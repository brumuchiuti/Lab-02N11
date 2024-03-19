#include <stdio.h>

double calculo(int n) {
  double soma = 0.0;
  int k;
  for (k = 1; k <= n; k++) {
    double termo = (double)k / (k * k * ((k % 2 == 0) ? -1 : 1));
    soma += termo;
  }
  return soma;
}

int main() {
  int n = 6;
  double resultado = calculo(n);
  printf("Resultado para n = %d: %.12lf\n", n, resultado);
  return 0;
}