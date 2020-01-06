#include <stdio.h>
int main(void){
  int ret = 0;

  ret = printf("papobinario.com.br");
  printf("Retorno printf() %d\n", ret);
  
  printf("%d %d %d %d \n", ret, 10, 0xa, 'A');
  printf("%x %x %x %x \n", ret, 10, 0xa, 'A'); /*imprimir em hexa "x"*/

  return 0;
}
