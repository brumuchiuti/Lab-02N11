#include <stdio.h>

int main(void) {

  float c, f;

  printf("Digite a temperatura em Celsius: ");
  scanf("%f", &c);

  f = 9.0/5 * c + 32;

  printf("Uma temperatura de %.2f graus Celsius equivale a %.2f graus Fahrenheit.\n", c, f);

  return 0;

}