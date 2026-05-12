//1 - Faça um programa em C que leia duas strings e concatene-as.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nome[30], sobrenome[35];

int main(){

system("clear");

printf("Digite um nome: ");
fgets(nome,30,stdin);

printf("Digite um sobrenome: ");
fgets(sobrenome,35,stdin);

strcat(nome,sobrenome);

printf("A junção dos nomes forma: %s\n", nome);


return 0;
}
