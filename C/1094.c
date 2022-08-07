//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
	int n_casos, quantia, total_s = 0, total_c = 0, total_r = 0;
	float total_cobaias;
	char tipo;
	
	scanf("%d", &n_casos);
	
	while(n_casos > 0)
	{
		scanf("%d %c", &quantia, &tipo);
		
		total_cobaias += quantia;
		
		if(tipo == 'C')
			total_c += quantia;
		
		if(tipo == 'R')
			total_r += quantia;
		
		if(tipo == 'S')
			total_s += quantia;
		
		quantia = 0;
		n_casos--;	
	}
	
	printf("Total: %.0f cobaias\n", total_cobaias);
	printf("Total de coelhos: %d\n", total_c);
	printf("Total de ratos: %d\n", total_r);
	printf("Total de sapos: %d\n", total_s);
	printf("Percentual de coelhos: %.2f %%\n", (total_c/total_cobaias)*100);
	printf("Percentual de ratos: %.2f %%\n", (total_r/total_cobaias)*100);
	printf("Percentual de sapos: %.2f %%\n", (total_s/total_cobaias)*100);
	
	return 0;
}