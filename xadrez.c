#include <stdio.h>

int main()
{

    char bispo[10] = "Bispo";
    char rainha[10] = "Rainha";
    char torre[10] = "Torre";
    char cavalo[10] = "Cavalo";

    int t = 1;
    int p = 1;

    // movimentação Rainha
    while (t <= 8)
    {
        printf(" %s : %d Esquerda\n", rainha, t);
        t++;
    }
    printf("\n");
    // movimentação Bispo
    for (size_t i = 1; i <= 5; i++)
    {
        printf(" %s : %d Direita e Esquerda\n", bispo, i);
    }
    printf("\n");
    // movimentação Torre
    do
    {

        printf(" %s : %d Frente\n", torre, p);
        p++;

    } while (p <= 5);
    printf("\n");
    // movimentação Cavalo
    int movimentoCompleto = 1;
    while (movimentoCompleto--)
    {
        for (size_t i = 1; i <= 2; i++)
        {
            printf(" %s : %d Cima\n", cavalo, i);
        }
        printf(" %s : %d Direita\n", cavalo, movimentoCompleto + 1);
    }
}