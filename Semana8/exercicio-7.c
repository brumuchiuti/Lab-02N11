#include <stdio.h>

int divisiveis(int arr[], int tam, int x) {

  if (tam == 0) {
    return 0;
  }
  if (arr[tam - 1] % x == 0) {
    return 1 + divisiveis(arr, tam - 1, x);
  } 
  else {
    return divisiveis(arr, tam - 1, x);
  }
}

int main() {
  
  int tam;
  printf("Digite o tamanho do array: ");
  scanf("%d", &tam);

  int arr[tam];

  printf("Digite os elementos do array:\n");
  for (int i = 0; i < tam; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  int x;
  printf("Digite o valor de x: ");
  scanf("%d", &x);

  int qtd_divisiveis = divisiveis(arr, tam, x);
  printf("A quantidade de números divisíveis por %d é: %d\n", x, qtd_divisiveis);

  return 0;
}