//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    float x, y;

    scanf("%f %f", &x, &y);

    // 1� QUADRANTE
    if (x>0 && y>0 )
    {
        printf("Q1\n");
    }
    
    // 2� QUADRANTE
    if (x<0 && y>0)
    {
        printf("Q2\n");
    }
    
    // 3� QUADRANTE
    if (x<0 && y<0)
    {
        printf("Q3\n");
    }

    // 4� QUADRANTE
    if (x>0 && y<0)
    {
        printf("Q4\n");
    }

    // EIXO X (x, 0)
    if (y == 0 && x != 0)
    {
        printf("Eixo X\n");
    }

    // EIXO Y (0, y)
    if (x == 0 && y != 0)
    {
        printf("Eixo Y\n");
    }

    // ORIGEM
    if (x == 0 && y == 0)
    {
        printf("Origem\n");
    }
        
    return 0;
}