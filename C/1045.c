//////////////
// EDIVÂNIA //
//   UFPI   //
//   2021   //
//////////////

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c,Maior, Medio, Menor;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(((a>=b)&&(b>c)) || ((a>b)&&(b>=c))) // a>=b>c ou a>b>=c
    {   
        Maior = a;
        Medio = b;
        Menor = c;
    }

    if(((a>=c)&&(c>b)) || ((a>c)&&(c>=b))) // a>=c>b ou a>c>=b
    {
        Maior = a;
        Medio = c;
        Menor = b;
    }
        
    if(((b>=a)&&(a>c)) || ((b>a)&&(a>=c))) // b>=a>c ou b>a>=c
    {
        Maior = b;
        Medio = a;
        Menor = c;
    }

    if(((b>=c)&&(c>a)) || ((b>c)&&(c>=a))) // b>=c>a ou b>c>=a
    {
        Maior = b;
        Medio = c;
        Menor = a;
    }

    if(((c>=a)&&(a>b)) || ((c>a)&&(a>=b))) // c>=a>b ou c>a>=b
    {
        Maior = c;
        Medio = a;
        Menor = b;
    }

    if(((c>=b)&&(b>a)) || ((c>b)&&(b>=a))) // c>=b>a ou c>b>=a
    {
        Maior = c;
        Medio = b;
        Menor = a;
    }

    if(((Maior>Medio)&&(Medio>Menor)))
    {
        if(Maior >= (Medio + Menor))
            printf("NAO FORMA TRIANGULO\n");
        
        else
        {
            if(pow(Maior, 2) == pow(Medio, 2) + pow(Menor, 2))
                printf("TRIANGULO RETANGULO\n");
            if(pow(Maior, 2) > pow(Medio, 2) + pow(Menor, 2))
                printf("TRIANGULO OBTUSANGULO\n");
            if(pow(Maior, 2) < pow(Medio, 2) + pow(Menor, 2))
                printf("TRIANGULO ACUTANGULO\n");
        }
    }

    if((a == b) || (b == c) || (a == c))
    {
        if((a == b) && (b == c))
        {
            printf("TRIANGULO ACUTANGULO\n");
            printf("TRIANGULO EQUILATERO\n");
        }
        else
        {
            if(pow(Maior, 2) > pow(Medio, 2) + pow(Menor, 2))
                printf("TRIANGULO OBTUSANGULO\n");
            if(pow(Maior, 2) < pow(Medio, 2) + pow(Menor, 2))
                printf("TRIANGULO ACUTANGULO\n");
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}    