#include <stdio.h>   
   
//movimento da torre
    void moverTorre(int TORRE) {

    // condição de parada
    if (TORRE > 5) {
        return;
    }

    printf("%d - Direita\n", TORRE);

    // chamada recursiva
    moverTorre(TORRE + 1);
}
  
// movimento da rainha
void moverRainha(int RAINHA) {

    // condição de parada
    if (RAINHA > 8) {
        return;
    }

    printf("%d - Esquerda\n", RAINHA);

    // chamada recursiva
    moverRainha(RAINHA + 1);
}
  //movimento do bispo
  void moverBispo(int BISPO) {
    if (BISPO > 5) {
        return;
    }
    for (int vertical = 1; vertical <= 1; vertical++) {

        for (int horizontal = 1; horizontal <= 1; horizontal++) {

            printf("%d - Cima Direita\n", BISPO);

        }
    }

    // chamada recursiva
    moverBispo(BISPO + 1);
}
int main() {

    int TORRE = 1, BISPO = 1, RAINHA = 1, CAVALO = 1, ESQUERDA = 1;

    // ===== TORRE =====
    printf("*** Movimentos da Torre ***\n");

    moverTorre(TORRE);

    // ===== RAINHA =====
    printf("\n*** Movimentos da Rainha ***\n");

    moverRainha(RAINHA);

    // ===== BISPO =====
    printf("\n*** Movimentos do Bispo ***\n");

    moverBispo(BISPO);

    // ===== CAVALO =====
    printf("\n*** Movimentos do Cavalo ***\n");

    // 2 casas para cima e 1 para direita
    for (CAVALO = 1, ESQUERDA = 1; CAVALO <= 2; CAVALO++) {

        printf("%d - Cima\n", CAVALO);

        if (CAVALO == 2) {

            printf("%d - Direita\n", ESQUERDA);

            // uso do break
            break;
        }
    }

    return 0;
}
