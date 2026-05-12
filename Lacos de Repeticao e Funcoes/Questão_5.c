#include <stdio.h>
#include <stdlib.h>

/*Linguagem C - Laços de Repetição e Funções - Questão 5
5 - Construa um algoritmo que calcule o peso ideal de uma pessoa. Dados de entrada: altura e sexo. Fórmulas para
cálculo do peso:
peso ideal de homem = (72,7 x altura) - 58
peso ideal da mulher = (62,1 x altura) - 44,7
*/

int main(){
float h;
char sexo;

printf("Calculadora de peso ideal:\n");
printf("Qual seu sexo biológico(M - MASCULINO | F - FEMININO)? ");
scanf("%c", &sexo);
printf("Qual a sua altura? ");
scanf("%f", &h);

  if(sexo == 'M'){
    printf("\nSeu peso ideal é %.2f Kg\n", (72.7*h)-58);
    }
  if(sexo == 'F'){
    printf("\nSeu peso ideal é %.2f Kg\n", (62.1*h)-44.7);
    }

}
