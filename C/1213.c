//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    long long int num;

    while (scanf("%lli",&num) != EOF)
    {    
        long long int multiplo = 11;
        long long int cont = 2;

        while(multiplo % num != 0)
        {
            cont ++;
            multiplo = ((multiplo*10) + 1)%num; 

            if(multiplo % num == 0)
            {
                printf("%lli\n", cont);
                break;
            }
        }

        if(num == 11)
            printf("%lli\n", cont);
    }

    return 0;
}