//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////


#include <stdio.h>

int main()
{
    int x, z;
    int cont = 1;

    scanf("%d", &x);

    int soma = x;

    do
    {
        scanf("%d", &z);
    } while (z <= x);
    
    while (soma <= z)
    {
        soma = soma + (x + cont);
        cont++;

        if(soma > z)
            break;
    }
       
    printf("%d\n", cont);

    return 0;
}