#include <stdio.h>

int main(void){
  int a = 5;
  switch (a) {
    case 0: printf("a es igual a 0\n");
            break;
    case 1: printf("a es igual a 1\n");
            break;
    default: printf("a es mayor que 1\n");
  }
}
