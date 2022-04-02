//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main() 
{   
    float n1; // 2
    float n2; // 3
    float n3; // 4
    float n4; // 1

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    float s = n1*2 + n2*3 + n3*4 + n4;
    float media = s/10;

	printf("Media: %.1f\n", media);

    if(media >= 7)
    {
        printf("Aluno aprovado.\n");
    }

    if(media < 5)
    {
        printf("Aluno reprovado.\n");
    }

    if((media >= 5) && (media <= 6.9))
    {
        printf("Aluno em exame.\n");

        float notaExame;

        scanf("%f", &notaExame);
        printf("Nota do exame: %.1f\n", notaExame);

        float mediaFinal = (notaExame + media)/2;

        if(mediaFinal >= 5)
        {
            printf("Aluno aprovado.\n");
        } 

        if(media <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", mediaFinal);
    }

    return 0;
}