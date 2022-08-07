//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
	int N[10], x, i;
	
	scanf("%d", &x);
	
	for(i = 0; i < 10; i++)
	{
		N[i] = x;
		x *= 2;
		
		printf("N[%d] = %d\n", i, N[i]);
	}
	
	return 0;
}