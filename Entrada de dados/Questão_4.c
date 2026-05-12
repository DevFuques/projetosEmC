/*4) Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, conforme a tabela abaixo. Faça um programa que leia o salário e o código do cargo de um funcionário e calcule o seu novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá, então, receber 15% de aumento. Mostre o salário antigo, o novo salário e a diferença entre ambos.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int codigo;
float salario, ajuste;
system("clear");
printf("Digite seu Salario: ");
scanf("%f", &salario);
printf("Digite seu Código: ");
scanf("%d", &codigo);

switch(codigo){

case 310:
ajuste = 0.05;
break;

case 456:
ajuste = 0.075;
break;

case 885:
ajuste = 0.1;
break;

default:
ajuste = 0.15;
break;

}
printf("Seu salario era %f e passara a ser %f a partir do próximo mês\nReajuste de %f\n",salario,salario+salario*ajuste,salario*ajuste);
return 0;
}
