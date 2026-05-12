//4 - Faça um programa em C que leia uma string e conte o número de vogais.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavra[31];
int cont, contvogal, tam;

int conta_vogais(char palavra[31], int tam, int cont, int contvogal){

  tam = strlen(palavra);
  for(cont = 0; cont<tam; cont++){
      if(palavra[cont] == 'a'||palavra[cont] == 'e'||palavra[cont] == 'i'||palavra[cont] == 'o'||palavra[cont] == 'u'||palavra[cont] == 'A'||palavra[cont] == 'E'||palavra[cont] == 'I'||palavra[cont] == 'O'||palavra[cont] == 'U'){
          contvogal++;
      }
  }
  printf("%d", contvogal);
  printf("\n");
}

int main(){

system("clear");

printf("Digite um palavra: ");
scanf("%s", palavra);
printf("O número de vogais é: ");

conta_vogais(palavra, tam, cont, contvogal);

return 0;
}