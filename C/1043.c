//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    float a, b, c, perimetro, area;
    int triangulo = 0;

    scanf("%f %f %f", &a,&b, &c);

    if((a < (b+c)) && (b < (a+c)) && (c < (a + b)))
        triangulo = 1;

    if(triangulo == 1)
    {
        perimetro = a+b+c;
        printf("Perimetro = %.1f\n",perimetro);
    }

    if(triangulo == 0)
    {
        area = (a+b)*c/2;
        printf("Area = %.1f\n",area);
    }

    return 0;
}