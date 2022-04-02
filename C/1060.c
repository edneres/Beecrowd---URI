//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    float a, b, c, d, e, f, conPos;
    conPos = 0;

    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    if (a>0)
        conPos++;
    
    if (b>0)
        conPos++;

    if (c>0)
        conPos++;

    if (d>0)
        conPos++;

    if (e>0)
        conPos++;

    if (f>0)
        conPos++;

    printf("%0.f valores positivos\n", conPos);

    return 0;
}