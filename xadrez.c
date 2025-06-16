#include <stdio.h>

// Função recursiva para simular o movimento da Torre
void moverTorre(int casas, int atual) {
    // Caso base: se a casa atual ultrapassar o número de casas, parar
    if (atual > casas) {
        return;
    }
    // Imprime o movimento para a direita
    printf("Direita\n");
    // Chamada recursiva para a próxima casa
    moverTorre(casas, atual + 1);
}

// Função recursiva para simular o movimento do Bispo
void moverBispoRecursivo(int casas, int atual) {
    // Caso base: se a casa atual ultrapassar o número de casas, parar
    if (atual > casas) {
        return;
    }
    // Imprime o movimento diagonal (cima e à direita)
    printf("Cima, Direita\n");
    // Chamada recursiva para a próxima casa
    moverBispoRecursivo(casas, atual + 1);
}

// Função para simular o movimento do Bispo com loops aninhados
void moverBispoLoop(int casas) {
    // Loop externo para o movimento vertical (cima)
    for (int i = 1; i <= casas; i++) {
        // Loop interno para o movimento horizontal (direita)
        int j = 1;
        while (j <= 1) { // Apenas uma iteração por casa, já que é diagonal
            printf("Cima, Direita\n");
            j++;
        }
    }
}

// Função recursiva para simular o movimento da Rainha
void moverRainha(int casas, int atual) {
    // Caso base: se a casa atual ultrapassar o número de casas, parar
    if (atual > casas) {
        return;
    }
    // Imprime o movimento para a esquerda
    printf("Esquerda\n");
    // Chamada recursiva para a próxima casa
    moverRainha(casas, atual + 1);
}

// Função principal
int main() {
    // Variáveis para controle do número de casas a serem movidas
    int casasTorre = 5;           // Torre: 5 casas para a direita
    int casasBispo = 5;           // Bispo: 5 casas na diagonal para cima e à direita
    int casasRainha = 8;          // Rainha: 8 casas para a esquerda
    int casasCavaloCima = 2;      // Cavalo: 2 casas para cima
    int casasCavaloDireita = 1;   // Cavalo: 1 casa para a direita

    // Simulação do movimento da Torre (usando recursividade)
    printf("Movimento da Torre (%d casas para a direita):\n", casasTorre);
    moverTorre(casasTorre, 1); // Inicia a recursão a partir da casa 1
    printf("\n"); // Linha em branco para separação

    // Simulação do movimento do Bispo com recursividade
    printf("Movimento do Bispo com Recursividade (%d casas na diagonal para cima e à direita):\n", casasBispo);
    moverBispoRecursivo(casasBispo, 1); // Inicia a recursão a partir da casa 1
    printf("\n"); // Linha em branco para separação

    // Simulação do movimento do Bispo com loops aninhados
    printf("Movimento do Bispo com Loops Aninhados (%d casas na diagonal para cima e à direita):\n", casasBispo);
    moverBispoLoop(casasBispo); // Usa loops aninhados
    printf("\n"); // Linha em branco para separação

    // Simulação do movimento da Rainha (usando recursividade)
    printf("Movimento da Rainha (%d casas para a esquerda):\n", casasRainha);
    moverRainha(casasRainha, 1); // Inicia a recursão a partir da casa 1
    printf("\n"); // Linha em branco para separação

    // Simulação do movimento do Cavalo (usando loops aninhados com condições)
    printf("Movimento do Cavalo (2 casas para cima e 1 casa para a direita):\n");
    // Loop externo para o movimento vertical (cima)
    for (int i = 1; i <= casasCavaloCima + casasCavaloDireita; i++) {
        // Verifica se ainda deve mover para cima
        if (i <= casasCavaloCima) {
            printf("Cima\n");
            continue; // Pula para a próxima iteração para movimentos verticais
        }
        // Loop interno para o movimento horizontal (direita)
        int j = 1;
        while (j <= casasCavaloDireita) {
            printf("Direita\n");
            j++;
            break; // Sai do loop interno após uma iteração
        }
        break; // Sai do loop externo após completar o movimento horizontal
    }

    return 0;
}