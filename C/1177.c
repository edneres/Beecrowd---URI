//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
	int N[1000], x, i, y = 0;
	
	scanf("%d", &x);
	
	for(i = 0; i < 1000; i++)
	{
		N[i] = y;
		
		y ++;
		
		if(y == x)
			y = 0;
		
		printf("N[%d] = %d\n", i, N[i]);
	}
	
	return 0;
}