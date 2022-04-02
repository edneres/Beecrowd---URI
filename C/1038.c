//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    int codigo, quantidade;
    float valor;

    scanf("%d %d",&codigo,&quantidade);

    switch (codigo)
    {
        case 1: valor = quantidade*4.0;
                break;

        case 2: valor = quantidade*4.5;
                break;

        case 3: valor = quantidade*5;
                break;

        case 4: valor = quantidade*2;
                break;

        case 5: valor = quantidade*1.5;
                break;
    }

    printf("Total: R$ %.2f\n",valor);

    return 0;
}