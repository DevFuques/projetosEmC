/*Linguagem C - Laços de Repetição e Funções - Questão 3
3 -Escrever um algoritmo que leia o nome e as três notas obtidas por um aluno durante o semestre. Calcular a sua
média (aritmética), informar o nome e sua menção aprovado (media >= 7), Reprovado (media <= 5) e Recuperação (média entre 5.1 a 6.9).
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
char nome[100];
int n;
float media, notas[3];

system("clear");

printf("Digite seu nome: ");
scanf("%s",nome);

for(n = 0; n<3; n++){
  printf("\nDigite a nota da %dº prova: ",n+1);
  scanf("%f", &notas[n]);
  media += notas[n]/3;
  }
  
  if(media >=7){
  printf("Parabéns você foi Aprovado(a)\n");
  }
  else if(media <=5){
  printf("Você foi Reprovado(a)\n");
  }
  if(media == 5.1 || media == 6.9);{
  printf("Você esta na Recuperação\n");
  }
  
  printf("De acordo com os cálculos, %s sua pontuação final é: %f\n", nome, media );
  
  return 0;
}
