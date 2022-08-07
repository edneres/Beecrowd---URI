//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
	int M,N, soma = 0, flag = 0;
	
	scanf("%d %d", &M, &N);
	
	while(M > 0 && N > 0)
	{
		if(N < M)
		{
			while(N <= M)
			{
			 	printf("%d ", N);
			 	
			 	soma += N;	 	
			 	N++;
			}
			
			printf("Sum=%d\n", soma);
			
			flag++;
			soma = 0;
		}
		
		if(M < N && flag != 1)
		{
			while(M <= N)
			{
			 	printf("%d ", M);
			 	
			 	soma += M;	 	
			 	M++;
			}
			
			printf("Sum=%d\n", soma);
			soma = 0;	
		}
		
		flag = 0;
		scanf("%d %d", &M, &N);		
	}
	
	return 0;
}