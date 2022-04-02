//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>
#include <math.h>

int main() {
    
    int n, x, primo;
    
    scanf("%i", &n);
    
    while (n--) {
        
        scanf("%i", &x);
        
        int contador = 3;
        
        if (x % 2 == 0 && x > 2)
            primo = 0;
        
        else
            primo = 1;
        
        while (contador <= (int) sqrt(x)) {
            
            if (x % contador == 0) {
                primo = 0;
                break;
            }
            
            contador += 2;
            
        }
 
        if (primo == 0 || x == 1 || x == 0)
            printf("Not Prime\n");
        else
            printf("Prime\n");
        
    }
    
    return 0;
}