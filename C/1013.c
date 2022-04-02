//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>
 
int main() 
{
    int A;
    int B;
    int C;

    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);

    int maiorAB = (A+B+abs(A - B))/2;
    int maior = (maiorAB+C+abs(maiorAB - C))/2;

    printf("%d eh o maior\n",maior);
 
    return 0;
}