//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

long long int fatorial(int n) 
{
    long long int resultado = 1;
    
    while (n > 1) 
        resultado *= n--;
    
    return resultado;
}

int main() 
{
    
    int n1, n2;
    
    while (scanf("%d %d", &n1, &n2) != EOF)
        printf("%lld\n", fatorial(n1) + fatorial(n2));
    
    return 0;
}