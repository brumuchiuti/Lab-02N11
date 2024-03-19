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
  int numero;
  printf("Digite um número inteiro: ");
  scanf("%d", &numero);

  if (primo(numero)) {
    printf("%d é um número primo.\n", numero);
  } 
  else {
    printf("%d não é um número primo.\n", numero);
  }

  return 0;
}