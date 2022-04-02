//////////////
// EDIVÂNIA //
//   UFPI   //
//   2022   //
//////////////

#include <stdio.h>

int main() 
{
   float x, y;

   scanf("%f %f", &x, &y);

   while (1)
   {
        if((x == 0) || (y == 0)) 
            break;

        if(x > 0 && y > 0 )
            printf("primeiro\n");
        
        if(x > 0  && y < 0)
            printf("quarto\n");

        if(x < 0 &&  y > 0)
            printf("segundo\n");

        if(x < 0  && y < 0)
            printf("terceiro\n");

        scanf("%f %f", &x, &y);
   }
   
    return 0;
}