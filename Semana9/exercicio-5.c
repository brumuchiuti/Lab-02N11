#include <stdio.h>

int inverter(int num, int num_invertido) {

  if (num == 0)
    return num_invertido;

  return inverter(num / 10, (num_invertido * 10) + (num % 10));
  
}

int main() {
  
  int num, num_invertido;

  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  num_invertido = inverter(num, 0);

  printf("O inverso de %d é %d.\n", num, num_invertido);

  return 0;
  
}