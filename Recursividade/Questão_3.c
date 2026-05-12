//3 -Crie um programa que calcula o máximo divisor comum entre dois números usando a recursão.

#include <stdio.h>
#include <stdlib.h>

int n1, n2, resto;

int mdc( int n1, int n2, int resto){
    while(n2 != 0){
      resto = n1 %n2;
      n1 = n2;
      n2 = resto;
    }
    return n1;
}

int main(){
printf("Digite um valor inteiro: ");
scanf("%d", &n1);
printf("\nDigite um valor inteiro para comparação: ");
scanf("%d", &n2);

printf("\nO MDC de %d e %d = %d\n", n1, n2, mdc(n1, n2, resto));

return 0;
}
