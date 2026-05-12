//1) Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que C.
#include <stdio.h>
#include <stdlib.h>
int main(){
int A,B,C,soma;
system("clear");
printf("Digite um valor inteiro: ");
scanf("%d",&A);
printf("Digite um valor inteiro: ");
scanf("%d",&B);
printf("Digite um valor inteiro: ");
scanf("%d",&C);

soma = A+B;

if(A+B<C){
    printf("%d + %d = %d que e menor que %d\n",A,B,soma,C);
    }
   else{
    printf("%d + %d = %d que e maior que %d\n",A,B,soma,C);
    }
    return 0;
}
