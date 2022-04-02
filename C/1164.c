//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    int N, n;

    scanf("%d", &N);

    for (size_t i = 0; i < N; i++)
    {
        int soma = 0;
        
        scanf("%d", &n);

        for (size_t i = 1; i < n; i++)
        {
            if(n % i == 0)
                soma = soma + i;
        }
        
        if(soma == n)
            printf("%d eh perfeito\n", n);

        else
            printf("%d nao eh perfeito\n", n);
    }

    return 0;
}