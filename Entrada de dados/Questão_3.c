/*3) Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois,caso contrário multiplique A por B. Ao final de qualquer um dos cálculos deve-se atribuir o resultado para uma variável C e mostrar seu conteúdo na tela. */
#include <stdio.h>
#include <stdlib.h>
int main(){
int A,B,C;
system("clear");
printf("Digite um valor inteiro: ");
scanf("%d",&A);
printf("Digite um valor inteiro: ");
scanf("%d",&B);

if(A != B){
C = A*B;
}
else{
C = A+B;
}
printf("%d \n", C);
return 0;
}
