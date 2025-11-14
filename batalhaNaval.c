// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

    /// Nível Novato - Posicionamento dos Navios
    // Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    //  Utilize `printf` para exibir as coordenadas de cada parte dos navios

    /// Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal 
    /// Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    /// Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {1,0,0,0,0,0,0,0,0,0},
        {0,1,0,0,0,0,1,1,1,0},
        {0,0,1,0,0,0,0,0,0,0},
        {0,0,0,0,0,1,0,0,0,0},
        {0,0,0,0,0,1,0,0,0,0},
        {0,0,0,1,0,1,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

    int habilidadeCone[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,1,0,0,0,0,0},
        {0,0,0,1,1,1,0,0,0,0},
        {0,0,1,1,1,1,1,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

    int habilidadeCruz[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,1,0,0,0,0,0},
        {0,0,1,1,1,1,1,1,0,0},
        {0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

    int habilidadeOctaedro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,1,0,0,0,0,0},
        {0,0,0,1,1,1,0,0,0,0},
        {0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

    // tabuleiro original
    printf("Tabuleiro:\n");
    printf("    A B C D E F G H I J\n");
    printf("   ---------------------\n");
    for(int i=0; i<10; i++){
        printf("%2d | ", i+1);
        for(int j=0; j<10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\nHabilidade Octaedro:\n");
    printf("    A B C D E F G H I J\n");
    printf("   ---------------------\n");
    for(int i=0; i<10; i++){
        printf("%2d | ", i+1);
        for(int j=0; j<10; j++){
            printf("%d ", habilidadeOctaedro[i][j]);
        }
        printf("\n");
    }
    // habilidade Cone
    printf("\nHabilidade Cone:\n");
    printf("    A B C D E F G H I J\n");
    printf("   ---------------------\n");
    for(int i=0; i<10; i++){
        printf("%2d | ", i+1);
        for(int j=0; j<10; j++){
            printf("%d ", habilidadeCone[i][j]);
        }
        printf("\n");
    }

    // habilidade Cruz
    printf("\nHabilidade Cruz:\n");
    printf("    A B C D E F G H I J\n");
    printf("   ---------------------\n");
    for(int i=0; i<10; i++){
        printf("%2d | ", i+1);
        for(int j=0; j<10; j++){
            printf("%d ", habilidadeCruz[i][j]);
        }
        printf("\n");
    }

    return 0;
}