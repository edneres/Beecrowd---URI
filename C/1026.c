//////////////
// EDIV�NIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main()
{
	long long int a, b;
	
	while(scanf("%lld %lld", &a, &b) != EOF)
		printf("%lld\n", (a^b));	// Opera��o XOR 
	
	return 0;
}