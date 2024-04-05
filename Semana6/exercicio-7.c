#include <stdio.h>

void multiplica_matrizes(int n, int m, int p, int A[n][m], int B[m][p], int C[n][p]) {
  int i, j, k;
  for (i = 0; i < n; i++) {
    for (j = 0; j < p; j++) {
      C[i][j] = 0;
        for (k = 0; k < m; k++) {
          C[i][j] += A[i][k] * B[k][j];
        }
    }
  }
}

int main() {
  int n, m, p;

  printf("Digite o número de linhas da matriz A: ");
  scanf("%d", &n);
  printf("Digite o número de colunas da matriz A: ");
  scanf("%d", &m);

  printf("Digite o número de colunas da matriz B: ");
  scanf("%d", &p);

  if (m != p) {
    printf("A multiplicação de matrizes não é possível. O número de colunas da matriz A deve ser igual ao número de linhas da matriz B.\n");
    return 1;
  }

  int A[n][m], B[m][p], C[n][p];

  printf("Digite os elementos da matriz A:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("Digite o elemento A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  printf("Digite os elementos da matriz B:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < p; j++) {
      printf("Digite o elemento B[%d][%d]: ", i, j);
      scanf("%d", &B[i][j]);
    }
  }

  multiplica_matrizes(n, m, p, A, B, C);

  printf("Resultado da multiplicação das matrizes:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < p; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}