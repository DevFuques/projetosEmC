/*5)Desenvolva um programa que recebe do usuário, o placar de um jogo de futebol (os gols de cada time)
 e informa se o resultado foi um empate, se a vitória foi do primeiro time ou do segundo time.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int A,B;
char c[10],d[10];
system("clear");
printf("Digite o nome do primeiro time: ");
scanf("%s",c);
printf("Digite o valor de gols do time %s: ",c);
scanf("%d",&A);
printf("Digite o nome do segundo time: ");
scanf("%s",d);
printf("Digite o valor de gols do time %s: ",d);
scanf("%d",&B);

system("clear");

if(A > B){
    printf("O time campeão foi %s\n",c);
}
else if(A < B){
        printf("O time campeão foi %s\n",d);
}
else{
        printf("O jogo empatou\n");
}

return 0;
}
