//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    int X;
    float Y;

    scanf("%d",&X);
    scanf("%f",&Y);

    float consumo = X/Y;

    printf("%.3lf km/l\n",consumo);

    return 0;
}