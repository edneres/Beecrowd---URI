//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    for (size_t i = 1; i <= N; i++)
    {

        if(N % i == 0)
            printf("%d\n", i);
    }

    return 0;
}