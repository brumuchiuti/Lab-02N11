#include <stdio.h>
#include  <math.h>

int main(){

  float raio, area;
  
  printf("Qual o raio do círculo? ");
  scanf("%f", &raio);

  area = M_PI * pow(raio,2);
  printf("Um círculo com raio %.2f tem área igual a %.2f.", raio, area);
  
}