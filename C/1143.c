//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    int N;

    scanf("%d",&N);

    for (size_t i = 1; i <= N; i++)
    {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
    
    return 0;
}