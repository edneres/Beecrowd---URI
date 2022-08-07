//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>
#include <math.h>

int main()
{	
	int num_casos, PA,PB, i, aux, anos = 0; // PA e PB >> população de A e B
	double G1, G2;			 // G1 e G2 >> crescimento populacional de A e B (em percentual).
	
	scanf("%d", &num_casos);

	for(i = 0; i < num_casos; i++)
	{
		scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
		
		while(PA <= PB)
		{
			if(PA <= 100)
			{
				aux = floor(G1);
				PA += aux*(PA/100.0);
			}
			
			else
				PA += G1*(PA/100.0);
			
			if(PB <= 100)
			{
				aux = floor(G2);
				PB += aux*(PB/100.0);
			}
			
			else
				PB += G2*(PB/100.0);
			
			anos++;
			
			if(anos == 101)
				break;
		}
		
		if(anos <= 100)
			printf("%d anos.\n", anos);
	
		else
			printf("Mais de 1 seculo.\n");
	
		anos = 0;
	}
		
	return 0;
}
