//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    int cont = 2;

    while (cont < 101)
    {
        if (cont % 2 == 0)
            printf("%d\n", cont);
        
        cont++;
    }
    
    return 0;
}