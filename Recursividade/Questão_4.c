//4 - Escrever uma função recursiva que calcule o valor de a elevado a b.

#include <stdio.h>
#include <stdlib.h>

int a, b;

int pot(int a, int b){
  if(b == 0){
    return 1;
      }
      else return a*pot(a, b - 1);
      }
  
int main(){

system("clear");

printf("Digite um valor para a base: ");
scanf("%d", &a);
printf("Digite um valor inteiro para o exponencial: ");
scanf("%d", &b);

printf("\n%d^%d = %d\n", a, b, pot(a, b));

return 0;
}
