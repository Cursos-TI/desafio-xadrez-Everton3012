#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    char bispo[10] = "Bispo";
    char rainha[10] = "Rainha";
    char torre[10] = "Torre";

    int t = 1;
    int p = 1;

    while (t <= 8)
    {
        printf(" %s : %d Esquerda\n", rainha, t);
        t++;
    }
    printf("\n");
    for (size_t i = 1; i <= 5; i++)
    {
        printf(" %s : %d Direita e Esquerda\n", bispo, i);
    }
    printf("\n");
    do
    {

        printf(" %s : %d Frente\n", torre , p);
        p++;

    } while (p <= 5);
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
