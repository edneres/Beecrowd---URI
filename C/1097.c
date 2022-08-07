//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
	float I = 0, J = 1, cont = 3, x = 1, y = 1, flag = 0;
	
	while(I < 2.2)
	{
		if(flag != 1)
			printf("I=%0.1f J=%0.0f\n", I, J);
		
		else
			printf("I=%0.1f J=%0.1f\n", I, J);
		
		cont--;
		J++;
		
		if(cont == 0)
		{
			flag = 1;
			
			if(I == 9)
				break;
			
			cont = 3;
			I += 0.2;
			J = x + 0.2*y;
			x = 1;
			y++;
		}
	}
	
	return 0;
}