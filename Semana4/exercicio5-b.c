#include <stdio.h>
#include <stdbool.h>

bool primo(int num) {
  if (num <= 1) {
    return false;
  }
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n1, n2;
  printf("Digite o primeiro número inteiro: ");
  scanf("%d", &n1);

  printf("Digite o segundo número inteiro: ");
  scanf("%d", &n2);

  printf("Os números primos entre %d e %d, (incluindo eles), são:\n", n1, n2);
  for (int i = n1; i <= n2; i++) {
    if (primo(i)) {
      printf("%d\n", i);
    }
  }

  return 0;
}