//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    int par[5];
    int impar[5];
    int contPar = 0;
    int contImpar = 0;
    int N;

   for (size_t i = 0; i < 15; i++)
   {
        scanf("%d", &N);

        if(N % 2 == 0)
        {    
            par[contPar] = N;
            contPar ++;

            if (contPar == 5)
            {
                contPar = 0; 

                for (size_t j = 0; j < 5; j++)
                {
                    printf("par[%d] = %d\n", j, par[j]);
                }             
            }
        }

        else
        {
            impar[contImpar] = N;
            contImpar ++;

            if (contImpar == 5)
            {
                contImpar = 0; 

                for (size_t j = 0; j < 5; j++)
                {
                    printf("impar[%d] = %d\n", j, impar[j]); 
                }              
            }
        }
   }
   
    for (size_t j = 0; j < contImpar ; j++)
        printf("impar[%d] = %d\n", j, impar[j]); 

    for (size_t j = 0; j < contPar; j++)
        printf("par[%d] = %d\n", j, par[j]);

    return 0;
}