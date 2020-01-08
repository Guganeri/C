#include <stdio.h>

int main(void){
  char c;

  printf("O tamanho de c eh: %lu\n", sizeof c);
  printf("O tamanho do tipo char eh: %lu\n", sizeof (char)*8);

  c = 255;
  printf("O novo valor de c: %i\n", c);
  
  return 0;
}
