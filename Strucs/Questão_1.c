/*1 - Crie uma estrutura chamada Pessoa, que tenha os campos nome (uma string de até
50 caracteres), idade (um inteiro) e altura (um float). Crie uma variável do tipo
Pessoa, leia seus dados do usuário e imprima-os na tela.*/

#include <stdio.h>
#include <stdlib.h>

struct dados_pessoais{
char nome[50];
int idade;
float altura;
} dados_pessoais;

int main(){
    
    printf("Digite seu nome: ");
    scanf("%s", dados_pessoais.nome);
    
    system("clear");
    
    printf("Digite sua idade: ");
    scanf("%d", &dados_pessoais.idade);
    
    system("clear");
    
    printf("Digite sua altura: ");
    scanf("%f", &dados_pessoais.altura);
    
    system("clear");

    printf("Os dados informados foram:\n\n");
    printf("Nome: %s\n", dados_pessoais.nome);
    printf("Idade: %d\n", dados_pessoais.idade);
    printf("Altura: %.2f\n", dados_pessoais.altura);
}