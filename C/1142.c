//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    int N;
    int n1 = 1;
    int n2 = 2;
    int n3 = 3;

    scanf("%d", &N);

    for (size_t i = 0; i < N; i++)
    {
        printf("%d %d %d PUM\n", n1, n2, n3);
        n1 = n1 + 4;
        n2 = n2 + 4;
        n3 = n3 + 4;
    }

    return 0;
}