//3 - Faça um programa em C que leia uma string e a exiba em ordem inversa.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavra[31];
int i, tam;

int inverte_palavra(char palavra[31], int i, int tam){

  tam = strlen(palavra);
  for(i = tam; i>=0; i--){
  printf("%c",palavra[i]);
  }
  printf("\n");
}

int main(){

printf("Digite um palavra: ");
scanf("%s", palavra);
printf("Invertida fica: ");

inverte_palavra(palavra, i, tam);

return 0;
}

