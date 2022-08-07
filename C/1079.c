//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
	int N;
	float v1, v2, v3;
	
	scanf("%d", &N);
	
	/*
		Apresente a média ponderada para cada um destes conjuntos de 3 valores, 
		sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o 
		terceiro valor tem peso 5.
	*/
	
	while(N > 0)
	{
		scanf("%f %f %f", &v1, &v2, &v3);
		
		printf("%0.1f\n", (v1*2 + v2*3 + v3*5)/10);
		
		N--;
	}
		
	return 0;
}