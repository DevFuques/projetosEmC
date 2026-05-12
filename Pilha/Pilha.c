/*1 - Faça um programa que implemente uma pilha de 20 elementos do tipo inteiro usando struct.
2 - Usando a pilha anterior, crie uma função que para empilhar elementos.
3 - Seguindo o raciocínio da questão anterior, desenvolva uma função para remover os elementos da pilha.*/

#include <stdio.h>
#include <stdlib.h>

#define tam 20

typedef struct pilha{
  int pos[20], topo;
}Pilha;

Pilha p;

int i, escolha, aux=1;
char op='s';

criar_pilha(){

    printf("Para parar o preenchimento da pilha digite: 00\n\n");
      for (i = p.topo; i < tam; i++){
        printf("Digite um valor para o %d° elemento: ", i+1);
        scanf("%d", &p.pos[i]);
        if (p.pos[i] == 00)
        break;
        p.topo++;
        }
}

escrever_pilha(){
    
    for (i = p.topo-1; i >= 0; i--){
        printf("[%d]\n", p.pos[i]);
    }
}

remover_elemento(){
    
    p.topo--;
    printf("Elemento removido: %i\n", p.pos[p.topo]);
    printf("O topo agora é: %i\n", p.pos[p.topo-1]);
    escrever_pilha();
}

int main(){

    system("clear");
    
    while(op == 's'){
    printf("Digite:\n1 - Pilha\n2 - Para ver a Pilha\n3 - Remover um número do topo\n");
    printf("Escolha: ");
    scanf("%d", &escolha);
    
    switch(escolha){
    
    case 1:
        system("clear");
        criar_pilha();
        break;
    
    case 2:
        
        system("clear");
        escrever_pilha();
        break;
    
    case 3:
        
        system("clear");
        remover_elemento();
        break;
        }
    
   
    printf("\nVoltar ao Menu (s/n)? ");
    scanf("%s", &op);
    system("clear");
    }
    printf("Pilha finalizada com sucesso: \n\n");
    escrever_pilha();

}
