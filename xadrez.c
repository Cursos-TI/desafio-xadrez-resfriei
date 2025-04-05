#include <stdio.h>

 int main() {
 
     int i;
         
     printf("# Bem-vindo ao jogo de xadrez! #\n\n");
     printf("* Movimentando as peças Torre, Bispo, Rainha * \n\n");
     
     // Movimentando a Torre (5 casas para a direita) utilizando for:

     printf("Movimentando a Torre 5 casas na horizontal à direita\n");

     for (i = 1; i <= 5; i++) 
     {
         printf("Torre: %d Direita\n\n", i);
     }
     
     // Movimentando o Bispo (5 casa na diagonal, para cima e a direita) utilizando while:
 
     printf("Movimentando o Bispo 5 casa na diagonal para cima e à direita\n");

     i = 1;
    
     while (i <= 5)
     {
        printf("Bispo: %d Cima e à direita\n\n", i);
         i++;
     }
 
     // Movimentando a Rainha (8 casas para a esquerada) utilizando do-while

     printf("Movimentando a Rainha 8 casa na horizontal para à esquerda\n");

     i = 1;

     do {
         printf("Rainha: %d Esquerda\n\n", i);
         i++; 
     } while (i <= 8);
 
     printf("## Fim do jogo de xadrez! ##\n");

     return 0;
 }