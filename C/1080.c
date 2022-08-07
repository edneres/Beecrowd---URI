//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
	int posicao, maior = -1, numero, contador = 1;
	
	while(contador <= 100)
	{
		scanf("%d",&numero);
		
		if(numero > maior)
		{
			maior = numero;
			posicao = contador;
		}
		
		contador++;
	}
	
	printf("%d\n%d\n", maior, posicao);
	
	return 0;
}