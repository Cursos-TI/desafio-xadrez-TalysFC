#include <stdio.h>


int main() {


    int torre, bispo = 0, rainha = 0; //variaveis com nomes das peças (novato)
    int cavalo, movimentocavalo = 0; //variaveis (aventureiro)
    

    printf("Movimento da Torre: \n"); //movimentação da torre usando for (novato)
    for(torre = 0; torre < 5; torre++) {
        printf("Direita. \n");
    }


    printf("\nMovimento do Bispo: \n"); //movimentação do bispo usando while
    while(bispo < 5){
        printf("Cima e direita. \n");
        bispo++;
    }


    printf("\nMovimento da Rainha: \n"); //movimentação da rainha usando do while
    do{
        printf("Esquerda. \n");
        rainha++;
    } while(rainha < 8);

    
    printf("\nMovimento do Cavalo: \n"); //movimentação do cavalo usando loops aninhados (aventureiro)
    for(cavalo = 0; cavalo < 1; cavalo++){
        while(movimentocavalo < 2){
            printf("Baixo. \n");
            movimentocavalo++;
        }
        printf("Esquerda. \n");
    }


    return 0;
}
