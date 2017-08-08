#include <stdio.h>

int main(void){
  int a = 0;

  do{
    printf("A es igual a %d \n", a);
    a++;
  } while (a<5);
  printf("A es igual a %d y se termina\n", a);
}
