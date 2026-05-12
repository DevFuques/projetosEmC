//2 - Crie um programa em Linguagem C que conte os dígitos de um determinado número usando recursão.

#include <stdio.h>
#include <stdlib.h>

int n, resul = 1;
float aux;

int rec(float n){
        if (n/10 >= 1){
            resul++;
            n = rec(n)/10;
        }
        
        return resul;
        
    }

int main(){
system("clear");

printf("Digite um valor inteiro: ");
scanf("%d", &n);
printf("\n O valor %d tem %d números", n, rec(n));

return 0;
}
