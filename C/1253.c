//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int nCasas = 0;
    int nCasos = 0;
    int x = 0;
    char frase[50];

    scanf("%d", &nCasos);

    while(1)
    {
        scanf("%s", frase);
        scanf("%d", &nCasas);

        for (size_t i = 0; i < 50; i++)
        {
            if (frase[i] == '\0')
                break;

            if ((frase[i] - nCasas) < 65)
                x = (frase[i] - nCasas) + 26;

            else
                x = frase[i] - nCasas;

            printf("%c", x);
        }

        printf("\n");

        nCasos--;

        if (nCasos == 0)
            break;
    }

    return 0;
}