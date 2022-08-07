//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
	int N, x;
	
	scanf("%d", &N);

	while(N > 0)
	{
		scanf("%d", &x);
		if(x > 0 && x % 2 == 0)
		printf("EVEN POSITIVE\n");
	
		if(x > 0 && x % 2 != 0)
			printf("ODD POSITIVE\n");
		
		if(x < 0 && x % 2 == 0)
			printf("EVEN NEGATIVE\n");
		
		if(x < 0 && x % 2 != 0)
			printf("ODD NEGATIVE\n");
		
		if(x == 0)
			printf("NULL\n");
		
		N--;	   
    }	
	
	return 0;
}