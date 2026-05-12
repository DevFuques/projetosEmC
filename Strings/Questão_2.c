//2 - Faça um programa em C que leia uma string e verifique se ela é palíndroma.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavra[31];
int i, tam;

int palavra_palindroma(char palavra[31], int i, int tam){

  tam = strlen(palavra);
  for(i = tam; i>=0; i--){
  printf("%c",palavra[i]);
  }
  printf("\n");
  
  if(tam == palavra[i]){
  printf("Esta palavra é Palíndroma\n");
  }
  else 
  printf("Esta palavra não é Palíndroma\n");
}

int main(){

printf("Digite um palavra: ");
scanf("%s", palavra);
printf("Invertida fica: ");

palavra_palindroma(palavra, i, tam);

return 0;
}
