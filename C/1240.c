//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

//////////////////////////////////////////////////////////////////////
//  Construir um programa para verificar, à partir de dois valores  //
//  inteiros A e B, se B corresponde aos últimos dígitos de A.      //
//////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

int main()
{
	int casos, tam_A, tam_B, i, j, flag;
	char A[1000], B[1000];
	
	scanf("%d", &casos);

	while(casos > 0)
	{
		casos--;
		j = 0;
		flag = 0;
		
		scanf("%s %s", A, B);
		
		tam_A = strlen(A);
		tam_B = strlen(B);
		
		if(tam_B > tam_A)
		{
			printf("nao encaixa\n");
			
			break;
		}
		
		
		
		for(i = (tam_A - tam_B); i < tam_A; i++)
		{
			
			if(A[i] != B[j])
			{
				printf("nao encaixa\n");
				
				flag = 1;
			
				break;
			} 	
			
			j++;
		}
		 
		if(flag == 0)
			printf("encaixa\n");	   
	}
	
	return 0;
}




/*

#include <stdio.h>
#include <math.h>

int myFunction(long long int a);

int main()
{
    int N, i;
    long long int A, B, rec, z;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%lld %lld", &A, &B);

        z = myFunction(B);
        z = ceil(pow(10, z));

        rec = A % z;

        if(rec == B){
            printf("encaixa\n");
        }
        else{
            printf("nao encaixa\n");
        }
    }

    return 0;
}

int myFunction(long long int a)
{
    int count = 0;

    while(a){
        a /= 10;
        count++;
    }

    return count;
}

*/