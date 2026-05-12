#include <stdio.h>
#include <stdlib.h>
/*Linguagem C - Laços de Repetição e Funções - Questão 1
1 - Desenvolva um programa que calcule a tabuada (1 a 10) do número informado pelo usuário.
*/
int main(){
int valor, multi, v;
  printf("Digite o valor que você quer a tabuada: ");
  scanf("%d",&valor);

  for (v = 0; v <= 10; v++){
  multi=v*valor;
  printf ("%d x %d = %d\n",valor, v, multi);
    }
  return 0;
}
