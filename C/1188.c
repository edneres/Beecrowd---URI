//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>
#include <string.h>

int main()
{

    char aux;
    double M[12][12], total = 0;

    scanf("%c", &aux);

    for(size_t i = 0; i < 12; i++)
    {
        for(size_t j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);
    }

    for(size_t i = 0; i < 12; i++)
    {
        for(size_t j = 0; j < 12; j++)
        {
            if((i > j) && (i + j > 11))
                total += M[i][j];
        }
    }

    if(aux == 'S')
        printf("%.1lf\n", total);
    
    if(aux == 'M')
        printf("%.1lf\n", total/30);

    return 0;
}