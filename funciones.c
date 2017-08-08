#include <stdio.h>

int suma_dif (int a, int b, int *res){
  int sum;
  sum = a + b;
  *res = a - b;
  return sum;
}

int main(void){
  int b = 2;
  int diff;

  printf("La suma de 5 y %d es %d\n", b, suma_dif(5, b, &diff));
  printf("La diferencia de 5 y %d es %d\n", b, diff);
}
