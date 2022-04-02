//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    int x, y, z;
    int maior, menor, meio = 0;


    scanf("%d %d %d", &x, &y, &z);

    menor = maior = x;

    //ordene-os em ordem crescente
    if (y < menor)
        menor = y;
    
    if (z < menor)
        menor = z; 

    if (y > maior)
        maior = y;

    if (z > maior)
        maior = z;
    
    if (x > menor && x < maior)
        meio = x;
    
    if (y > menor && y < maior)
        meio = y;

    if (z != menor && z != maior)
        meio = z;

    // mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequ�ncia como foram lidos.
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", menor, meio, maior, x, y, z);

    return 0;
}