#include <stdio.h>


int main() {


    int torre, bispo = 0, rainha = 0; //variaveis com nomes das peças (novato)
    

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

    
    return 0;
}
