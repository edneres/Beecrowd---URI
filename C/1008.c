//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>
 
int main() 
{
    int numero;
    int horas;
    float valor;

    scanf("%d",&numero);
    scanf("%d",&horas);
    scanf("%f",&valor);
    printf("NUMBER = %d\n",numero);

    float salario = horas*valor;

    printf("SALARY = U$ %.2f\n",salario);
 
    return 0;
}