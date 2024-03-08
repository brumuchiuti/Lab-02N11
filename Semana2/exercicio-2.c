#include <stdio.h>

int main() {

  float peso, altura, imc;
  
  printf("Qual seu peso em kg? ");
  scanf("%f", &peso);

  printf("Qual sua altura em metros? ");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("O IMC de uma pessoa com peso %.2fkg e altura %.2fm é: %.2f\n", peso, altura, imc);
  
  return 0;
}