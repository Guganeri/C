#include<stdio.h>
#include<limits.h>
#include<stdint.h>
#include<stdlib.h>

int main(void){
  float f = 1;

  printf("O tamanho de f (float): %zu bytes / %zu bits\n", sizeof f, sizeof * 8);


printf("O valor de f:%f\n",f);

  return 0;

}
