#include <stdio.h>


void recursivotorre(int numero){ //criação da função recursiva da torre (mestre)
    if(numero > 0){
        printf("Direita. \n");
        recursivotorre(numero - 1);
    }
}


void recursivobispo(int n){ //criação função recursiva do bispo (mestre)
    if (n > 0) { //uso de loops aninhados
        for (int i = 0; i < 1; i++) { //loop externo
            printf("Cima. \n");


            for (int j = 0; j < 1; j++) { //loop interno
                printf("Direita. \n");
            }
        }
        recursivobispo(n - 1);
    }
}


void recursivorainha(int num){ //criação função recursiva da rainha (mestre)
    if(num > 0){
        printf("Esquerda. \n");
        recursivorainha(num - 1);
    }
}


int main() {


    int torre = 5, bispo = 5, rainha = 8; //variaveis com nomes das peças (novato)
    int cavalo, movimentocavalo; //variaveis (aventureiro)


    printf("Movimento da Torre: \n"); //movimentação da torre (mestre)
    recursivotorre(torre);


    printf("\nMovimento do Bispo: \n"); //movimentação do bispo (mestre)
    recursivobispo(bispo);


    printf("\nMovimento da Rainha: \n"); //movimentação da rainha (mestre)
    recursivorainha(rainha);

    
    printf("\nMovimento do Cavalo: \n"); //movimentação do cavalo usando loops aninhados, múltiplas variáveis e comandos de controle de fluxo (mestre)
    for(cavalo = 0, movimentocavalo = 0; cavalo < 1; cavalo++){
        while(movimentocavalo < 2){
            printf("Cima. \n");
            movimentocavalo++;
        }
        printf("Direita. \n");
        break;
    }


    return 0;
}
