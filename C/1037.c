//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>

int main()
{
  double num;

  scanf("%lf",&num);

  if(num >= 0 && num <= 100)
  {
    if(0.0 <= num && num <= 25.0)
    {
      printf("Intervalo [0,25]\n");
    }

    else if (25.0 < num && num <= 50.0)
    {
      printf("Intervalo (25,50]\n");
    }
    
    else if (50.0 < num && num <= 75.0)
    {
      printf("Intervalo (50,75]\n");
    }

    else if (75.0 < num && num <= 100.0)
    {
      printf("Intervalo (75,100]\n");
    }
  }  

  else
  {
    printf("Fora de intervalo\n");
  }

  return 0;
}