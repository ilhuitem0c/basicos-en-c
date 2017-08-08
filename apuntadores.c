#include <stdio.h>

void main (void){
  int a;
  int *ptr_to_a;

  ptr_to_a = &a;

  a = 5;
  printf("El valor de a es %d\n", a);

  *ptr_to_a = 6;
  printf("El valor de a es %d\n", a);

  printf("El valor de ptr_to_a es %d\n", ptr_to_a);
  printf("Se aloja en el valor\n", *ptr_to_a);
  printf("La direccion de a es %d\n", &a);
}
