//5 - Escreva uma função recursiva que gere todas as possíveis combinações para um jogo da MegaSena com 6 dezenas.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x[6], i;

int sorteio_num(int x[6], int i){
    srand(time(NULL));
    for(i=0; i<6; i++){
     x[i] = rand()%60 + 1;
    }
    for(i=0; i<6; i++){
    printf("[%d] ", x[i]);
    }
}

int main(){

system("clear");

printf("Dentro da MegaSena sua chance de acertar a sena será de 1 em 50.063.860.\n");
printf("Uma das possíveis combinações é:\n\n");
sorteio_num(x, i);
printf("\n");

return 0;
}
