//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
	double I = 0, J = 0, cont = 0, flag = 0;
	
	while (I <= 2)
	{
		cont++;
		J = J + 1;
		
		if(J == 1 || J == 2 || J == 3 || J == 4 || J == 5)
			printf("I=%.0lf J=%.0lf\n", I, J);
		
		else
			printf("I=%.1lf J=%.1lf\n", I, J);
		
		if(cont == 3)
		{
			J = 0;
			cont = 0;
			flag++;
			I += 0.2;
			J += 0.2*flag;
		}
	}
		
	return 0;
}
