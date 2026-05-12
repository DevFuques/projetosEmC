#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
char caracter;
int op, cod;
} asc;

asc A;


convASCIIcaracter(){
    
    printf("CONVERSOR CARACTER -> ASCII\n\n");
    
    printf("Digite os códigos: ");
    scanf("%d", &A.cod);

    printf("Os codigos %d são equivalente na tabela ASCII a %c\n\n", A.cod, (char)A.cod);
    
}

convcaracterASCII(){
    
    printf("CONVERSOR ASCII -> CARACTER\n\n");
    
    printf("Digite um carácter: ");
    scanf("%c", &A.caracter);

    printf("O carácter %c na tabela ASCII é equivalente a %d\n", A.caracter, (int)A.caracter);
    
}

int main(){

system("clear");
    
    printf("\t- CONVERSOR -\n\n");
    printf("1) Caractrer para ASCII\n2) ASCII para Caracter\n\nEscolha: ");
    scanf("%d", &A.op);
    
    switch(A.op){
        
        case 1:
        convASCIIcaracter();
        break;
        
        case 2:
        convcaracterASCII();
        break;
        
        default:
        printf("Opção não encontrada! Tente novamente");
        break;
    }
}
