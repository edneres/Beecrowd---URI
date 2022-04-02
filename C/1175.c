//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    int N[20];
    int cont = 19;
    int guarda;

    for (size_t i = 0; i < 20; i++)
    {
        scanf("%d", &N[i]);
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        guarda = N[i];
        N[i] = N[cont];
        N[cont] = guarda;
        cont --;
    }
    
    for (size_t i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }
    
    return 0;
}