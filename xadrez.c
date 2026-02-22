#include <stdio.h>

// ===== CONSTANTES =====
#define BISPO_CASAS 5
#define TORRE_CASAS 5
#define RAINHA_CASAS 8

// ===== FUNÇÃO RECURSIVA TORRE =====
void moverTorre(int casas) {
    if (casas == 0)
        return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

// ===== FUNÇÃO RECURSIVA RAINHA =====
void moverRainha(int casas) {
    if (casas == 0)
        return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ===== FUNÇÃO RECURSIVA BISPO (COM LOOP ANINHADO) =====
void moverBispo(int casas) {

    if (casas == 0)
        return;

    // Loop aninhado obrigatório
    for (int vertical = 1; vertical <= 1; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

int main() {

    printf("===== MOVIMENTO DA TORRE =====\n");
    moverTorre(TORRE_CASAS);

    printf("\n===== MOVIMENTO DA RAINHA =====\n");
    moverRainha(RAINHA_CASAS);

    printf("\n===== MOVIMENTO DO BISPO =====\n");
    moverBispo(BISPO_CASAS);

    printf("\n===== MOVIMENTO DO CAVALO =====\n");

    // ===== CAVALO COM LOOPS ANINHADOS E CONTROLE AVANÇADO =====
    for (int vertical = 1, horizontal = 1; vertical <= 2; vertical++) {

        for (; horizontal <= 1; horizontal++) {

            if (vertical == 2 && horizontal == 1) {
                printf("Direita\n");
                continue;  // continua execução
            }

            if (vertical == 3) {
                break; // condição extra de segurança
            }

            printf("Cima\n");
        }

        horizontal = 1; // reset variável interna
    }

    return 0;
}