#include <stdio.h>   
int main() {
    int TORRE = 1, BISPO = 1, RAINHA = 1, CAVALO = 1, ESQUERDA = 1;
    
    // iniciando com torre.

    printf ("***Movimentos da Torre***:\n");
   
    for (TORRE = 1; TORRE <= 5; TORRE++) {
        printf("%d Direita, cima.\n", TORRE);
    }
   
    // iniciando com bispo.
    
    printf ("\n***Movimentos do Bispo***:\n"); 
    
    while (BISPO <= 5)
    {
        printf("%d Direita.\n", BISPO);
        BISPO++;
    }
    
    // iniciando com rainha.    
 
    printf ("\n***Movimentos da Rainha***:\n");
 
    do
  {
        printf("%d Esquerda.\n", RAINHA);
        RAINHA++;
  } while (RAINHA <= 8);
 
  // Fazendo o movimento do cavalo
 
  printf ("\n***Movimentos do Cavalo***:\n");

  for (CAVALO = 1; CAVALO < 2; CAVALO++);
{
   printf("%d Baixo. \n", CAVALO);
} 
 while (ESQUERDA < 1) ESQUERDA++;
{
    printf("%d Esquerda. \n", ESQUERDA);
}
    return 0;
}
