//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
	double M[12][12], soma = 0, media = 0;
	int linha, coluna, cont = 0;
	char c;

	scanf("%c", &c);

	for(linha = 0; linha < 12; linha++)
	{
        for(coluna = 0; coluna < 12; coluna++) 
			{
				scanf("%lf", &M[linha][coluna]);

				if (coluna < linha)
				{
					soma += M[linha][coluna];
					cont++;
				}
			}
    }

	if (c == 'M')
    	printf("%.1lf\n", soma / cont);

    if (c == 'S')
    	printf("%.1lf\n", soma);

	return 0;
}