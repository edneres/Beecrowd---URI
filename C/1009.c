//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>
#include <string.h>
 
int main() 
{
    char nome[20];
    double salarioFixo;
    double totalVendas;

    scanf("%s",&nome);
    scanf("%lf",&salarioFixo);
    scanf("%lf",&totalVendas);

    double salarioFinal = salarioFixo + (totalVendas*0.15);

    printf("TOTAL = R$ %.2lf\n",salarioFinal);
 
    return 0;
}