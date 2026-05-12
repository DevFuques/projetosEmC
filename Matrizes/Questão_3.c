#include <stdio.h>
#include <stdlib.h>

/*3 - Um comerciante precisa informatizar o caixa de sua loja, para isso ele precisa de um programa que leia uma série de valores
 correspondendo aos preços das mercadorias compradas por um cliente( O valor zero finaliza a entrada dos valores).
 Calcule o valor total,subtraia deste valor o desconto devido (vide tabela ao lado) e,
 finalmente ,mostre o valor a ser pago pelo cliente.
*/

int main(){
float produto, desc, total = 0;
int i;

system("clear");

    printf("Insira o valor do produto\n");
while (produto != 0){
    printf("%d produto: ", i+1);
    scanf("%f", &produto);
    i++;
    total+=produto;
}
    if (total < 50){
        desc = 0.05;
    }

    else if (total < 100){
        desc = 0.1;
    }

    else if (total < 200){
        desc = 0.15;
    }

    else{
        desc = 0.2;
    }

system("clear");

printf("CUPOM FISCAL\nTOTAL DA COMPRA: R$ %.2f\nTOTAL DO DESCONTO: R$ %.2f\nTOTAL A PAGAR: R$ %.2f", total, desc, total - desc);

return 0; 
}
