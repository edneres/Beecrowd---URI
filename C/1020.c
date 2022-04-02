//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    int idade;

    scanf("%d",&idade);

    int anos = idade/365;
    int meses = (idade-anos*365)/30;
    int dias = idade - anos*365 - meses*30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}