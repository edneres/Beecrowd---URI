//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    int n;

    while (1)
    {
        int soma = 0;

        scanf("%d", &n);

        if(n == 0)
            break;

        for (size_t i = 1; i <= n; i++)
        {
            soma = soma + i*i;
        }
        
        printf("%d\n", soma);
    }
    
    return 0;
}