#include <stdio.h>
#include <stdlib.h>

/*Linguagem C - Laços de Repetição e Funções - Questão 6
6 - Num determinado Estado, para transferências de veículos, o DETRAN cobra uma taxa de 1% para carros fabricados antes de 1990 e uma taxa de 1.5% para os fabricados de 1990 em diante, a taxa está incidindo sobre o valor de tabela do carro. O algoritmo deve ler o ano e o preço do carro e a seguir calcula e imprime imposto a ser pago.
*/

int main(){
int ano;
float valorcarro;

printf("Qual o ano de fabricação do seu carro? ");
scanf("%d", &ano);
printf("Qual o valor de tabela de seu carro? R$ ");
scanf("%f", &valorcarro);

  if(ano >= 1990){
    printf("A taxa de transferências de veículos é R$ %.2f\n", valorcarro*0.015);
    }
  if(ano < 1990){
    printf("A taxa de transferências de veículos é R$ %.2f\n", valorcarro*0.01);
    }
}
