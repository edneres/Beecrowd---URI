//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>
 
int main() 
{
    int codpeca1, numpeca1, codpeca2, numpeca2;

    double val_pc1, val_pc2;

    scanf("%d %d %lf",&codpeca1,&numpeca1,&val_pc1);

    scanf("%d %d %lf",&codpeca2,&numpeca2,&val_pc2);

    printf("VALOR A PAGAR: R$ %.2f\n",(numpeca1*val_pc1)+(numpeca2*val_pc2));

 
    return 0;
}