//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>
#include <math.h>

int main()
{
    double n = 3.14159;
    double R;

    scanf("%lf",&R);

    double area = n * pow(R, 2) ;

    printf("A=%.4f\n", area);

    return 0;
}