//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
    int x, y, soma, cont, aux;
    
    while(scanf("%d %d",&x, &y) == 2)
    {
        soma = 0;

        if(x > y)
        {
            aux = x;
            x = y;
            y = aux;
        }
        
        if(x % 2 != 0)
        {
            for(cont = x + 2; cont < y; cont++)
            {
                if(cont % 2 != 0)
                    soma += cont;
            }
        }

        else
        {
            for(cont = x + 1; cont < y; cont++)
            {
                if(cont % 2 != 0)
                    soma += cont;
            }
        }

        printf("%d\n", soma);
    }
    
    return 0;
}      