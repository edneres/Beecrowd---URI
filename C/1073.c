//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
    int N, num_pares;
    int base = 2;
    int cont = 1;

    scanf("%d", &N);

    num_pares = N/2;

    while (cont <= num_pares)
    {
        printf("%d^%d = %d\n", base, 2, (base*base));
        cont ++;
        base = base + 2;
    }

    return 0;
}