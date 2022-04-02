//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int vencedor(int x, int y)
{
    int rafael = 9*x*x + y*y;
    int beto = 2*x*x + 25*y*y;
    int carlos = -100*x + y*y*y;
    int maior = rafael;

    if (beto > maior)
        maior = beto;

    if(carlos > maior)
        maior = carlos;

    if (maior == rafael)
        return printf("Rafael ganhou\n");

    if (maior == beto)
        return printf("Beto ganhou\n");

    if (maior == carlos)
        return printf("Carlos ganhou\n");
}

int main()
{
    int x, y, Ncasos;

    scanf("%d", &Ncasos);

    for (size_t i = 0; i < Ncasos; i++)
    {
        scanf("%d %d", &x, &y);
        vencedor(x, y);
    }

    return 0;
}