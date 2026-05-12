/*2 - Crie uma estrutura chamada Retângulo, que tenha os campos base e altura, ambos
do tipo float. Crie uma variável do tipo Retângulo, leia seus dados do usuário e
imprima sua área na tela.*/

#include <stdio.h>
#include <stdlib.h>

struct Retangulo{
float base, altura, area;
} forma;

int main(){
    
    system("clear");
    
    printf("Digite a alturado Retângulo: ");
    scanf("%f", &forma.altura);
    
    system("clear");
    
    printf("Digite a base do Retângulo: ");
    scanf("%f", &forma.base);
    
    system("clear");
    
    forma.area = forma.base*forma.altura;

    printf("A área do Retângulo é igual a: %.0fcm^2\n", forma.area);
}