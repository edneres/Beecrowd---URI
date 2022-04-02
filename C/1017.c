//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
    int tempo;
    int velocidadeMedia;

    scanf("%d",&tempo);
    scanf("%d",&velocidadeMedia);

    int quilometrosRodados = tempo * velocidadeMedia;
    double combustivel = quilometrosRodados / 12.0;

    printf("%.3lf\n",combustivel); 

    return 0;
}