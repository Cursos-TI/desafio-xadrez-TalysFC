#include <stdio.h>


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


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
