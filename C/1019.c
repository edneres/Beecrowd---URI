//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>
#include <math.h>

int main()
{
    int tempo;

    scanf("%d",&tempo);

    if (tempo < 60)
    {
        printf("0:0:%d\n",tempo);
    }

    else if(tempo >= 60 && tempo < 3600)
    {
        float divisao = tempo / 60;
        float conversao1 = (tempo / 60.0 - divisao)  * 60;

        printf("0:%.0f:%.0f\n",divisao,conversao1);
    }

    else if (tempo >= 3600)
    {
        float conversao1 = tempo / 3600; // parte inteira da hora (DEFINITIVO-38)
        float resto1 = (tempo / 3600.0) - conversao1; // 0.9313...
        float conversao2 = resto1 * 60; // 55.8833...
        float resto2 = conversao2 - floor(conversao2); // segundos fracionados
        float conversao3 = resto2 * 60;
        
        printf ("%0.f:%.0f:%.0f\n",conversao1,floor(conversao2), conversao3);
    }

    return 0;
}