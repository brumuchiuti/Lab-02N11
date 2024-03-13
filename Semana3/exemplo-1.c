#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int dado;

  srand(time(NULL));
  dado = 1 + rand()%6;  

  printf("Lancei o dado! Tente adivinhar o seu valor...\n");
  printf("Seu palpite: ");
  int palpite;
  scanf("%d", &palpite);

  if(palpite == dado) {
    printf("Você acertou!\n");
  } else {
    printf("Não foi desta vez...\n");
  }
  printf("Valor do dado lançado: %d\n", dado);  
  
  return 0;
}