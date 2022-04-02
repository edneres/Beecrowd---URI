//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>
#include <math.h>
 
int main() 
{
    double a;
    double b;
    double c;

    scanf("%lf %lf %lf",&a,&b,&c);

    double delta = pow(b, 2)-(4*a*c);

    if((delta < 0) || (a == 0))
    {
        printf("Impossivel calcular\n");
    }

    else
    {
        double raiz1 = ((-b + sqrt(delta)) / (2.0*a));
        double raiz2 = ((-b - sqrt(delta)) / (2.0*a));

        printf("R1 = %.5lf\n",raiz1);
        printf("R2 = %.5lf\n",raiz2);
    }

    return 0;
}