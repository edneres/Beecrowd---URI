//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int primo(int n)
{
    int cont = 1;

    if (n == 1)
            return printf("1 nao eh primo\n");

    for (size_t i = 2; i <= n; i = i + 2)
    {
        if (n % i == 0)
            cont++;
        
        if (cont > 2)
            return printf("%d nao eh primo\n", n);
    }

    for (size_t i = 3; i <= n; i = i + 2)
    {
        if (n % i == 0)
            cont++;
        
        if (cont > 2)
            return printf("%d nao eh primo\n", n);
    }

    return printf("%d eh primo\n", n);
}

int main()
{
    int Ncasos;
    int x;

    scanf("%d", &Ncasos);

    for (size_t i = 0; i < Ncasos; i++)
    {
        scanf("%d", &x);
        primo(x);
    }

    return 0;
}