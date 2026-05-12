//5 - Faça um programa que receba uma string e retorne o número de caracteres contidos nela.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavra[31];
int tam;

int conta_letra(char palavra[31], int tam){

  tam = strlen(palavra);
  printf("%d", tam);
  printf("\n");
}

int main(){

system("clear");

printf("Digite um palavra: ");
scanf("%s", palavra);
printf("O número de caracteres é: ");

conta_letra(palavra, tam);

return 0;
}