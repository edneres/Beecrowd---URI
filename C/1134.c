//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    int tipo;
    int contA = 0;
    int contG = 0;
    int contD = 0;

    while (1)
    {
        scanf("%d", &tipo);

        while ((tipo > 4) || (tipo < 1))
        {
            scanf("%d", &tipo);
        }

        if(tipo == 1)
            contA ++;

        if(tipo == 2)
            contG ++;

        if(tipo == 3)
            contD ++;

        if(tipo == 4)
        {   
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n",contA);
            printf("Gasolina: %d\n",contG);
            printf("Diesel: %d\n",contD);
            break;
        }
    }    

    return 0;
}