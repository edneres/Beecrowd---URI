//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
	int N, cont = 1;
	
	scanf("%d", &N);
	
	while(cont <= 10000)
	{
		if(cont%N == 2)
			printf("%d\n", cont);
		
		cont++;
	}
	
	return 0;
}