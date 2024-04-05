#include <stdio.h>

void soma_matrizes(int n, int m, int A[n][m], int B[n][m], int C[n][m]) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }
}

int main() {

  int n, m;
  printf("Digite o número de linhas e colunas das matrizes: ");
  scanf("%d %d", &n, &m);

  int A[n][m], B[n][m], C[n][m];

  printf("Digite os elementos da matriz A:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("Digite o elemento A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  printf("Digite os elementos da matriz B:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("Digite o elemento B[%d][%d]: ", i, j);
      scanf("%d", &B[i][j]);
    }
  }

  soma_matrizes(n, m, A, B, C);

  printf("Resultado da soma das matrizes:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}