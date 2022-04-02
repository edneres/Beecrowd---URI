//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>
#include <math.h>

int pega_ou_nao_pega(int x, int y, int z)
{   
    int cateto1 = pow(x, 2);
    double soma_catetos = cateto1 + 144;
    double hipotenusa = sqrt(soma_catetos); // distância a ser percorrida pela Guarda Costeira

    double tempo_fugitivo = 12.0 / y;     //   Velocidade = Distância / Tempo
    double tempo_guarda = hipotenusa / z; // > Tempo = Distância / Velocidade <

    if (tempo_guarda <= tempo_fugitivo)
        return printf("S\n");

    else
        return printf("N\n");   
    
}

int main()
{
    int D, VF, VG;

    while (scanf("%d %d %d", &D, &VF, &VG) != EOF)
        pega_ou_nao_pega(D, VF, VG);

    return 0;
}