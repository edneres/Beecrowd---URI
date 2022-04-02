//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
    int senha = 2002;

    scanf("%d", &senha);

    while (senha != 2002)
    {
        printf("Senha Invalida\n");
        scanf("%d", &senha);
    }
    
    printf("Acesso Permitido\n");

    return 0;
}