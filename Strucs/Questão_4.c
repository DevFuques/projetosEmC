/*4 - Crie uma estrutura chamada Funcionário, que tenha os campos nome (uma string de
até 50 caracteres), salario e ano_contratacao, ambos do tipo inteiro. Crie uma
variável do tipo Funcionario, leia seus dados do usuário e imprima o nome do
funcionário e o número de anos que ele trabalha na empresa.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Funcionário{
char nome[50];
int salario, ano_contatacao;
} funcionario;

int main(){
    
    system("clear");
    
    printf("Digite seu nome: ");
    scanf("%s", funcionario.nome);
    
    system("clear");
    
    printf("Digite seu Salario: R$ ");
    scanf("%d", funcionario.salario);
    
    system("clear");
    
    printf("Digite seu Ano de Contratação: ");
    scanf("%d", funcionario.ano_contatacao);
    
    system("clear");
    
    printf("Nome do Funcionário: %s\n", funcionario.nome);
    printf("Salario: R$ %d\n", funcionario.salario);
    printf("Ano de Contratação: %d\n", funcionario.ano_contatacao);
    printf("Tempo na empresa: %d\n", funcionario.ano_contatacao - data_hora_atual->tm_year+1900);
}
