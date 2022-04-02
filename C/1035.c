//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main() 
{   
    int a;
    int b;
    int c;
    int d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if((b > c) && (d > a) && ((c + d) > (a + b)) && ((c + d > 0) && (a + b > 0)) && (a % 2 == 0))
    {
        printf("Valores aceitos\n");
    }
    
    else
    {
        printf("Valores nao aceitos\n");
    }

    return 0;
}