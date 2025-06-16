#include <stdio.h>

// Função principal
int main() {
    // Variáveis para controle do número de casas a serem movidas
    int casasTorre = 5;  // Torre: 5 casas para a direita
    int casasBispo = 5;  // Bispo: 5 casas na diagonal para cima e à direita
    int casasRainha = 8; // Rainha: 8 casas para a esquerda
    int i;               // Contador para as estruturas de repetição

    // Simulação do movimento da Torre (usando for)
    printf("Movimento da Torre (%d casas para a direita):\n", casasTorre);
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); // A Torre move-se horizontalmente para a direita
    }
    printf("\n"); // Linha em branco para separação

    // Simulação do movimento do Bispo (usando while)
    printf("Movimento do Bispo (%d casas na diagonal para cima e à direita):\n", casasBispo);
    i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n"); // O Bispo move-se na diagonal (cima + direita)
        i++;
    }
    printf("\n"); // Linha em branco para separação

    // Simulação do movimento da Rainha (usando do-while)
    printf("Movimento da Rainha (%d casas para a esquerda):\n", casasRainha);
    i = 1;
    do {
        printf("Esquerda\n"); // A Rainha move-se horizontalmente para a esquerda
        i++;
    } while (i <= casasRainha);

    return 0;
}