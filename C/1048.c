//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>
 
int main() {
   float A;
   scanf("%f", &A);
   if (0<=A && A<=400.00){
       printf("Novo salario: %.2f\n", ((A * 0.15) + A));
       printf("Reajuste ganho: %.2f\n", (A * 0.15));
       printf("Em percentual: 15 %%\n");
   }
   else if (400.00<A && A<=800.00){
       printf("Novo salario: %.2f\n", ((A * 0.12) + A));
       printf("Reajuste ganho: %.2f\n", (A * 0.12));
       printf("Em percentual: 12 %%\n");
   }
   else if (800.00<A && A<=1200.00){
       printf("Novo salario: %.2f\n", ((A * 0.10) + A));
       printf("Reajuste ganho: %.2f\n", (A * 0.10));
       printf("Em percentual: 10 %%\n");
   }
   else if (1200.00<A && A<=2000.00){
       printf("Novo salario: %.2f\n", ((A * 0.07) + A));
       printf("Reajuste ganho: %.2f\n", (A * 0.07));
       printf("Em percentual: 7 %%\n");
   }
   else if (A>2000.00){
       printf("Novo salario: %.2f\n", ((A * 0.04) + A));
       printf("Reajuste ganho: %.2f\n", (A * 0.04));
       printf("Em percentual: 4 %%\n");
   }
 
    return 0;
}