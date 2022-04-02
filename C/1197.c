//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main() 
{
    int t, v;
        
    while (scanf("%d %d", &v, &t) != EOF)
        printf("%d\n", v * (t + t));
    
    return 0;
}