//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main() 
{
    int i, j;
    char c;
    double matriz[12][12], soma = 0;

    scanf("%c", &c);

    for (size_t i = 0; i < 12; i++) 
    {
        for (size_t j = 0; j < 12; j++) 
        {
            scanf("%lf", &matriz[i][j]);

            if (j + i < 11)
                soma += matriz[i][j];
        }
    }

    if (c == 'M') 
        soma /= 66.0;

    printf("%.1lf\n", soma);

    return 0;
}