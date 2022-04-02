//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    int num_lesmas, velocidades;


    while (scanf("%d", &num_lesmas) != EOF)
    {
        int maior = 0;

        for (size_t i = 1 ; i <= num_lesmas; i++)
        {
            scanf("%d",&velocidades);

            if(velocidades > maior)
                maior = velocidades;
        }

        if(maior < 10)
            printf("1\n");

        if((maior >= 10) && (maior < 20))
            printf("2\n");

        if(maior >= 20)
            printf("3\n");
    }

    return 0;
}