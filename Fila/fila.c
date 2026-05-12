/*1 - Crie uma Fila com 10 fosições utilizando Structs. em seguida, desenvolva as funções:
a) inserir na Fila
b) mostrar a Fila
c) remover da Fila
d) verificar se a Fila está cheia.
e) verificar se a Fila está vazia.
*/

#include <stdio.h>
#include <stdlib.h>

#define tam 10

typedef struct fila{
  int pos[20], first, last;
}Fila;

Fila f;

int i, escolha, aux=1;
char op='s';

criar_fila(){

    printf("Para parar o preenchimento da fila digite: 00\n\n");
      for (i = f.last; i < tam; i++){
        printf("Digite um valor para o %d° elemento: ", i+1);
        scanf("%d", &f.pos[i]);
        if (f.pos[i] == 00)
        break;
        f.last++;
        }
}

escrever_fila(){
    
    for (i = 0; i < f.last; i++){
        printf("[%d]\t", f.pos[i]);
    }
    printf("\n");
}

remover_elemento(){
    
    f.last--;
    printf("Elemento removido: %i\n", f.pos[0]);
    printf("O primeiro da fila agora é: %i\n", f.pos[1]);
    
    for(i=0; i<f.last; i++){
        f.pos[i] = f.pos[i+1];
    }
    escrever_fila();
}

verificar_cheio(){
    
    if (f.pos[tam-1] != 0){
        printf("A fila está cheia: \n");
    }
    
    else
    printf("A fila não está cheia\n");
    
    escrever_fila();

}

verificar_vazio(){
    
    if (f.pos[0] != 0){
        printf("A fila não está vazia: \n");
        escrever_fila();
    }
    
    else
    printf("A fila está vazia\n");
    
}


int main(){

    system("clear");
    
    while(op == 's'){
    printf("Digite:\n1 - Fila\n2 - Para ver a Fila\n3 - Remover um número da fila\n4 - Verificar se a pilha esta cheia\n5 - Verificar se a pilha esta vazia\n");
    printf("Escolha: ");
    scanf("%d", &escolha);
    
    switch(escolha){
    
    case 1:
        system("clear");
        criar_fila();
        break;
    
    case 2:
        
        system("clear");
        escrever_fila();
        break;
    
    case 3:
        
        system("clear");
        remover_elemento();
        break;
        
    case 4:
    
        system("clear");
        verificar_cheio();
        break;
        
    case 5:
    
        system("clear");
        verificar_vazio();
        break;
        }
    
   
    printf("\nVoltar ao Menu (s/n)? ");
    scanf("%s", &op);
    system("clear");
    }
    printf("Fila finalizada com sucesso: \n\n");
    escrever_fila();
}
