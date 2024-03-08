#include <stdio.h>

int main() {

  int a, b, soma, sub, mult, div;
  
  printf("Informe o valor de A: ");
  scanf("%d", &a);
  
  printf("Informe o valor de B: ");
  scanf("%d", &b);

  soma = a + b;
  sub = a - b;
  mult = a * b;
  div = a / b;

  printf("A soma de A e B é: %d\n", soma);
  printf("A subtração de A e B é: %d\n", sub);
  printf("A multiplicação de A e B é: %d\n", mult);
  printf("A divisão de A e B é: %d\n", div);

  return 0;
    
}