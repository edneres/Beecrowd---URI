//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>
 
int main() 
{
    double A;
    double B;
    double C;

    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);

    double s = A*2 + B*3 + C*5;
    double media = s/10;

    printf("MEDIA = %.1lf\n", media);
 
    return 0;
}