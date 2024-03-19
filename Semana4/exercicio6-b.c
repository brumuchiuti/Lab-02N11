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
  int valor;
  printf("Digite um valor inteiro: ");
  scanf("%d", &valor);

  double resultado = calculo(valor);

  printf("O resultado do somatório para o valor %d é: %.12lf\n", valor, resultado);

  return 0;
}
