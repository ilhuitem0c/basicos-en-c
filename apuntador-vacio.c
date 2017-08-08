#include <stdio.h>

void main (void){
  int intval = 255958283;
  void *vptr = &intval;

  printf("El valor de vptr en un int es %d\n", *((int *) vptr));
  printf("El valor de vptr en un char es %d\n", *((char *) vptr)); 
}
