//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
    float n;
    int cont = 0;
    float soma = 0;

    for (size_t i = 0; i < 6; i++)
    {
        scanf("%f", &n);

        if(n > 0)
        {
            cont ++;
            soma = soma + n/2.0;
        }
    }
    
    printf("%d valores positivos\n%.1lf\n", cont, soma/2);

    return 0;
}