#include <stdio.h>
#include <stdlib.h>

/*1 - Numa empresa paga-se R $19,50 a hora trabalhada e recolhe-se para o imposto de renda 10% dos salários acima de R$1500,00.
Dado um número de horas trabalhadas por um funcionário, informe o valor do salário líquido.
*/
int main(){
int hora;
float salario;

system("clear");

printf("Calculadora de Salario:\n\n");
printf("Você trabalha por quantas horas? ");
scanf("%d", &hora);

salario = 30*(19.50*hora);

printf("Seu salario e igual a R$ %.2f\n", salario);

if(salario > 1500){
    printf("Por conta de passar do limite o imposto é aplicado\n");
    printf("Com isso seu salario passa a ser R$ %d", salario/0.010);   
}
return 0;
}
