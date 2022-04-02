//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5;
    int cont = 0;

    scanf("%d", &n1);
    if(n1%2==0)
        cont ++;

    scanf("%d", &n2);
    if(n2%2==0)
        cont ++;

    scanf("%d", &n3);
    if(n3%2==0)
        cont ++;

    scanf("%d", &n4);
    if(n4%2==0)
        cont ++;

    scanf("%d", &n5);
    if(n5%2==0)
        cont ++;

    printf("%d valores pares\n",cont);

    return 0;
}