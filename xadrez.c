#include <stdio.h>   
int main() {
    int TORRE = 1, BISPO = 1, RAINHA = 1;
    
    // iniciando com torre.
printf("***Movimentos da Torre***:\n");
    for (TORRE = 1; TORRE <= 5; TORRE++) {
        printf("%d Direita, cima.\n", TORRE);
    }
    // iniciando com bispo.
    printf("\n***Movimentos do Bispo***:\n"); 
    while (BISPO <= 5)
    {
        printf("%d Direita.\n", BISPO);
        BISPO++;
    }
    
    // iniciando com rainha.    
 printf("\n***Movimentos da Rainha***:\n");
  do
  {
        printf("%d Esquerda.\n", RAINHA);
        RAINHA++;
  } while (RAINHA <= 8);
  
    return 0;
}
