//2) Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar. 
#include <stdio.h>
#include <stdlib.h>
int main(){
int A;
system("clear");
printf("Digite um valor inteiro: ");
scanf("%d",&A);

if(A %2 == 0){
    printf("%d e Par\n",A);
}
else{
        printf("%d e Impar\n",A);
}
return 0;
}
