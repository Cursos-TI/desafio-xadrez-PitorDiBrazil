#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função Recursiva Movimento Bispo

void moverBispo(int mov_rest) {
    if (mov_rest == 0) {
        return;
    }

    printf("Cima, Direita\n");
    moverBispo(mov_rest - 1);
}

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    //Vou fazer um menu interativo para que ele escolha qual peça deseja mover.

    printf("Escolha uma peça para mover:\n 1.Bispo\n 2.Torre\n 3.Rainha\n 4.Cavalo\n");
    int escolha;
    scanf("%d", &escolha);

    // Estrutura do Menu
    // Todas as estruturas de movimentação estão dentro da estrutura do Menu

    switch (escolha)
    {
    case 1: // Movimento Bispo
        printf("Movendo o Bispo!\n");
        moverBispo(5);
        break;

    case 2: // Movimento Torre
        printf("Movendo Torre!\n");
        int MovTorre = 0;
        for (MovTorre =0; MovTorre <5; MovTorre++) {
            printf("Direita\n");            
        }
        break;

    case 3: // Movimento Rainha
        printf("Movendo a Rainha!\n");
        int MovRainha = 0;
        do {
            printf("Esquerda\n");
            MovRainha++;
        } while (MovRainha <8);
        break;

    case 4: // Movimento Cavalo
        printf("Movimentando o Cavalo!\n");
        int i, j = 0;
    
        while (j < 1) {
            for (i = 0; i < 2; i++) {
                printf("Baixo\n");
            }
                printf("Esquerda\n");
                j++;
        } 
        break;
        
    default:
            printf("Ocorreu um erro!");
        break;
    }

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
