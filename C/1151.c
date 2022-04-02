//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int fibonacci(int n)
{
    int N_anterior1 = 1, N_anterior2 = 0, N_atual = 0;

    if (n == 1)
        return printf("0\n");
    
    if (n == 2)
        return printf("0 1\n"); 

    if (n >= 3)
    {
        for (size_t i = 3; i <= n; i++)
        {
            N_atual = N_anterior1 + N_anterior2;

            if (i == 3)
                printf("%d %d", N_anterior2, N_anterior1);

            printf(" %d", N_atual);            

            N_anterior2 = N_anterior1;
            N_anterior1 = N_atual; 
        } 

        printf("\n");
    }   
}

int main()
{
    int n;

    scanf("%d", &n);

    fibonacci(n);

    return 0;
}