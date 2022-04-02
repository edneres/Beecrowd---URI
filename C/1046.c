//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main() 
{   
    int hi;
    int hf; 

    scanf("%d %d", &hi, &hf);

    if(hf > hi)
    {
        int duracao = hf - hi;

        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }

    if(hf < hi)
    {
        int duracao = 24 + (hf - hi);

        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }

    if (hi == hf)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    
    return 0;
}