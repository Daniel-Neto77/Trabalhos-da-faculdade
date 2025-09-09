#include <stdio.h>

#define TAM 10
#define NAVIO 3
#define AGUA 0
#define NAVIO_ID 3

int main()
{

    int tabuleiro[TAM][TAM];

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            tabuleiro[i][j] = AGUA;
        }
    }

    int navioHorizontal[NAVIO] = {NAVIO_ID, NAVIO_ID, NAVIO_ID};
    int navioVertical[NAVIO] = {NAVIO_ID, NAVIO_ID, NAVIO_ID};

    int linhaH = 2, colunaH = 4;
    int linhaV = 5, colunaV = 7;

    if (colunaH + NAVIO <= TAM)
    {
        for (int i = 0; i < NAVIO; i++)
        {

            if (tabuleiro[linhaH][colunaH + i] == AGUA)
            {
                tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
            }
        }
    }

    if (linhaV + NAVIO <= TAM)
    {
        for (int i = 0; i < NAVIO; i++)
        {

            if (tabuleiro[linhaV + i][colunaV] == AGUA)
            {
                tabuleiro[linhaV + i][colunaV] = navioVertical[i];
            }
        }
    }

    printf("Tabuleiro Batalha Naval:\n\n");
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}