//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    char caracter;
    double soma = 0;
    double matriz[12][12];
    int linha, coluna;
    int aux = 9;

    scanf("%c", &caracter);

    // USUÁRIO FORMA A MATRIZ
    for (size_t linha = 0; linha < 12; linha++)
    {
        for (size_t coluna = 0; coluna < 12; coluna++)
            scanf("%lf", &matriz[linha][coluna]);
    }

    // ANALISA DA DIREITA PARA A ESQUERDA 
    for (size_t linha = 1; linha < 11; linha++)
    {
        if (linha <= 5)
        {
            for (size_t coluna = 11; coluna > 11-linha; coluna--)
                soma = soma + matriz[linha][coluna]; 
        }

        if (linha > 5)
        {
            for (size_t coluna = 11; coluna > linha; coluna--)
                soma = soma + matriz[linha][coluna];
        }
    }
    
    if (caracter == 'S')
        printf("%.1lf\n", soma);
    
    if (caracter == 'M')
        printf("%.1lf\n", soma/30.0);

    return 0;
}