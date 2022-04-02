//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
    int x;
    int cont = 0;

    scanf("%d", &x);
    
    while (cont < 6)
    {
        if (x % 2 != 0)
        {
            printf("%d\n", x);
            cont++;
        } 

        x++;    
    }

    return 0;
}