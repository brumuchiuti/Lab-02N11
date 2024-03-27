#include <stdio.h>

void diferenca(int A[], int tam_A, int B[], int tam_B) {
  
  printf("A - B = {");

  int encontrados = 0;
  
  for (int i = 0; i < tam_A; i++) {
    int encontrado = 0;

    for (int j = 0; j < tam_B; j++) {
      if (A[i] == B[j]) {
        encontrado = 1;
        break;
      }
    }

    if (!encontrado) {
      if (encontrados > 0) {
        printf(", ");
      }
      printf("%d", A[i]);
      encontrados++;
    }
  }

  printf("}\n");
}

int main() {
  int A[] = {7, 2, 5, 8, 4};
  int tam_A = sizeof(A) / sizeof(A[0]);
  int B[] = {4, 2, 9, 5};
  int tam_B = sizeof(B) / sizeof(B[0]);

  printf("A[] = {7, 2, 5, 8, 4} e B[]= {4, 2, 9, 5}:\n");
  diferenca(A, tam_A, B, tam_B);
  printf("\n");

  int C[] = {3, 9, 11};
  int tam_C = sizeof(C) / sizeof(C[0]);
  int D[] = {2, 6, 1};
  int tam_D = sizeof(D) / sizeof(D[0]);

  printf("A[] = {3, 9, 11} e B[]= {2, 6, 1}:\n");
  diferenca(C, tam_C, D, tam_D);

  return 0;
}