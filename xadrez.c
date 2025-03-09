#include <stdio.h>

void moverPeca(int casas, char sentido[15]) {
    if (casas > 0) {
        printf("%s\n", sentido);
        moverPeca(casas - 1, sentido);
    } 
}

void moverCavalo() {
    int casas = 0;

    while (casas < 3) {
        if (casas < 2) {
            printf("Baixo\n");
        } else {
            for (int i = 0; i < 1; i++) {
                printf("Esquerda\n"); 
            }
        }
        casas++;
    }
}

int main() {
    printf("Movimentação de Peças de Xadrez!\n");

    printf("\nMovimentação da Torre:\n");
    moverPeca(5, "Direita");

    printf("\n\nMovimentação da Rainha:\n");
    moverPeca(8, "Esquerda");

    printf("\n\nMovimentação do Cavalo:\n");
    moverCavalo();

    printf("\n\nMovimentação do Bispo:\n");
    moverPeca(5, "Cima, Direita");
    
}