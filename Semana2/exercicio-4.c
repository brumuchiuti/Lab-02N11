#include <stdio.h>
#include <math.h>

int main(void) {

  double cat1, cat2, hip;
  
  printf("Qual o valor do cateto 1? ");
  scanf("%lf", &cat1);

  printf("Qual o valor do cateto 2? ");
  scanf("%lf", &cat2);

  hip = sqrt(cat1 * cat1 + cat2 * cat2);
  
  printf("Um triângulo retângulo com lados %.2lf e %.2lf tem uma hipotenusa igual a %.2lf.\n", cat1, cat2, hip);
  
  return 0;
}