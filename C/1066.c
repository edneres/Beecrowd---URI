//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5;
    int contPar = 0, contImpar = 0, contPos = 0, contNeg = 0;

    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    if (n1 % 2 == 0)
        contPar++;
    else
        contImpar++;
    if (n1 > 0)
        contPos++;
    if(n1 < 0)
        contNeg++;

    if (n2 % 2 == 0)
        contPar++;
    else
        contImpar++;
    if (n2 > 0)
        contPos++;
    if(n2 < 0)
        contNeg++;

    if (n3 % 2 == 0)
        contPar++;
    else
        contImpar++;
    if (n3 > 0)
        contPos++;
    if(n3 < 0)
        contNeg++;

    if (n4 % 2 == 0)
        contPar++;
    else
        contImpar++;
    if (n4 > 0)
        contPos++;
        if(n4 < 0)
        contNeg++;

    if (n5 % 2 == 0)
        contPar++;
    else
        contImpar++;
    if (n5 > 0)
        contPos++;
    if(n5 < 0)
        contNeg++;

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", contPar, contImpar, contPos, contNeg);

    return 0;
}