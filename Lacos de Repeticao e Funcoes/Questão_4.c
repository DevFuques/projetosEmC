#include <stdio.h>
#include <stdlib.h>

/*Linguagem C - Laços de Repetição e Funções - Questão 4
4 - A escola “APRENDER” faz o pagamento de seus professores por hora/aula. Faça um algoritmo que calcule e exiba o salário de um professor. Sabe-se que o valor da hora/aula segue a tabela abaixo:
Professor Nível 1 R$12,00 por hora/aula
Professor Nível 2 R$17,00 por hora/aula
Professor Nível 3 R$25,00 por hora/aula
*/

int main(){
int nivel;
float horaaula, salario;

system("clear");
printf("Pagamento da escola APRENDER\n\n");
printf("Por quantas hora/aula você trabalhou? ");
scanf("%f", &horaaula);

printf("\nEntre os níveis de Professor, qual o seu? ");
scanf("%d", &nivel);

switch(nivel){

case 1:
  salario = 12.00 * horaaula;
break;

case 2:
  salario = 17.00 * horaaula;
break;

case 3:
  salario = 25.00 * horaaula;
break;
  }

printf("De acordo com seu nível (%d) e suas hora/aula (%.2f) seu salario é de R$ %.2f\n", nivel, horaaula, salario);

return 0;
}
