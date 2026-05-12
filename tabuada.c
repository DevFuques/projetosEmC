#include <stdio.h>
#include <stdlib.h>
int main(){
int valor, multi, v;
  printf("Digite o valor que você quer a tabuada: ");
  scanf("%d\n",&valor);

  for (v = 0; v <= 10; v++){
  multi=v*valor;
  printf ("%d x %d = %d\n",valor, v, multi);
    }
  return 0;
}
