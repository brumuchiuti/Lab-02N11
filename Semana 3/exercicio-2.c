#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int dado;
  int palpite; 
  int tentativas = 0;

  srand(time(NULL));
  dado = 1 + rand() % 100;

  printf("Lancei o dado! Tente adivinhar o seu valor...\n");

  while (1) {
    printf("Seu palpite: ");
    scanf("%d", &palpite);
    tentativas++;

    if (palpite < 1 || palpite > 100) {
      printf("\nPalpite inválido. Digite um número entre 1 e 100.\n");
    } else if (palpite == dado) {
      printf("\nParabéns!!! Você acertou em %d tentativas!\n", tentativas);
      break;
    } else if (palpite < dado) {
      printf("\nVocê chutou muito baixo! Tente novamente.\n");
    } else {
      printf("\nVocê chutou muito alto! Tente novamente.\n");
    }
  }

  return 0;
}