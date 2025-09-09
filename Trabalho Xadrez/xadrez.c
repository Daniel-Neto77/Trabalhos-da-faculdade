#include <stdio.h>

int main()
{

    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;

    printf("Movimento do Bispo:\n");
    for (int i = 0; i < BISPO_MOV; i++)
    {
        printf("Diagonal Superior Direita\n");
    }
    printf("\n");

    printf("Movimento da Torre:\n");
    int j = 0;
    while (j < TORRE_MOV)
    {
        printf("Direita\n");
        j++;
    }
    printf("\n");

    printf("Movimento da Rainha:\n");
    int k = 0;
    do
    {
        printf("Esquerda\n");
        k++;
    } while (k < RAINHA_MOV);
    printf("\n");

    return 0;
}