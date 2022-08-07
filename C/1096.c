//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
	int I = 1, J = 7, cont = 3;
	
	while(I <= 9)
	{
		printf("I=%d J=%d\n", I, J);
		
		cont--;
		J--;
		
		if(cont == 0)
		{
			if(I == 9)
				break;
			
			cont = 3;
			I += 2;
			J = 7;
		}
	}
	
	return 0;
}