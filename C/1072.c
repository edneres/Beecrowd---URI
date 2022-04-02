//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
    int N, X;
    int cont_in = 0;
    int cont_out = 0;

    scanf("%d", &N);

    for (size_t i = 0; i < N; i++)
    {
        scanf("%d", &X);

        if((X >= 10) && (X <= 20))
            cont_in ++;

        else
            cont_out++;
    }
    
    printf("%d in\n%d out\n", cont_in, cont_out);

    return 0;
}