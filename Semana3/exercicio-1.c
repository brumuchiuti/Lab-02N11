#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int dado; 
  int palpite;

  srand(time(NULL));
  dado = 1 + rand ()%100;

  printf("Lancei o dado! Tente adivinhar o seu valor...\n");

  printf("Seu palpite: ");
  scanf("%d", &palpite);

  while (palpite < 1 || palpite > 100) {
    printf("Palpite inválido. Digite um número entre 1 e 100: ");
    scanf("%d", &palpite);
  }

  if (palpite == dado) {
    printf("Parabéns!!! Você acertou!\n");
  } else if (palpite < dado) {
    printf("Você chutou muito baixo! O valor correto é %d.\n", dado);
  } else {
    printf("Você chutou muito alto! O valor correto é %d.\n", dado);
  }

  return 0;
}