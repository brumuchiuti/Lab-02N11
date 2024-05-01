#include <stdio.h>

int busca_bin(int arr[], int esquerda, int direita, int x) {
  
  if (direita >= esquerda) {
    int meio = esquerda + (direita - esquerda) / 2;

    if (arr[meio] == x)
      return meio;

    if (arr[meio] > x)
      return busca_bin(arr, esquerda, meio - 1, x);

    return busca_bin(arr, meio + 1, direita, x);
  }

  return -1;
  
}

int main() {
  
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int tamanho = sizeof(arr) / sizeof(arr[0]);
  int i;

  printf("Digite o número a ser procurado: ");
  scanf("%d", &i);

  int resultado = busca_bin(arr, 0, tamanho - 1, i);
  
  if (resultado == -1)
    printf("O elemento não está presente no array\n");
  else
    printf("O elemento está no índice %d\n", resultado);

  return 0;
  
}