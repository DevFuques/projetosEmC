/*3 - Crie uma estrutura chamada Aluno, que tenha os campos nome (uma string de até 20 caracteres),
nota1, nota2 e nota3, todos do tipo float. Crie uma variável do tipo Aluno, leia seus dados do
usuário e imprima sua média na tela.*/

#include <stdio.h>
#include <stdlib.h>

struct Aluno{
char nome[20];
float nota1, nota2, nota3, media;
} aluno;

int main(){
    
    system("clear");
    
    printf("Digite seu nome: ");
    scanf("%s", aluno.nome);
    
    system("clear");
    
    printf("Digite a primeira nota: ");
    scanf("%f", &aluno.nota1);
    
    system("clear");
    
    printf("Digite a segunda nota: ");
    scanf("%f", &aluno.nota2);
    
    system("clear");
    
    printf("Digite a terceira nota: ");
    scanf("%f", &aluno.nota3);
    
    system("clear");
    
    aluno.media = (aluno.nota1+aluno.nota2+aluno.nota3)/3;

    printf("Nome do aluno....... %s\n", aluno.nome);
    printf("Primeira nota....... %.2f\n", aluno.nota1);
    printf("Segunda nota........ %.2f\n", aluno.nota2);
    printf("Terceira nota....... %.2f\n", aluno.nota3);
    printf("Média............... %.2f\n", aluno.media);
}