//1 - Faça uma rotina recursiva para calcular a somatória de todos os números de 1 a N (N será lido do teclado).

#include <stdio.h>
#include <stdlib.h>

int n, resul = 0;

int rec(int n){
    
     if(n == 1)
    resul = 1;
    
    else{
        resul = n + rec(n-1);
    }
}

int main(){
system("clear");

printf("Digite um valor limite para o somatório: ");
scanf("%d", &n);
printf("\nO somatório de %d = %d\n", n, rec(n));

return 0;
}
