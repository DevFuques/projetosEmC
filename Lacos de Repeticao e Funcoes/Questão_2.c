/*Linguagem C - Laços de Repetição e Funções - Questão 2 
2 - Escreva um algoritmo que solicite ao usuário a entrada de 5 números, e que exiba o somatório desses números na tela.
Após exibir a soma, o programa deve mostrar também os números que o usuário digitou, um por linha.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int num[5], soma, i;
system("clear");

for (i = 0; i<5; i++){ 
printf("Digite o %dº valor inteiro: ",i+1);
scanf("%d", &num[i]);
soma+=num[i];
}
printf("A soma dos números é igual a %d \n",soma);
printf("Os valores digitados para a soma foram:\n");

for (i = 0; i<5; i++){ 
printf("%d\n",num[i]);
}
return 0;
}
