//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
    int x, cont;
    cont = 1;

    scanf("%d", &x);

    while (cont < x + 1)
    {
        if (cont % 2 != 0)
            printf("%d\n", cont); 

        cont++; 
    }
    
    return 0;
}