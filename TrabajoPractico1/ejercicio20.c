#include <stdio.h>

int main()
{
    int a, b, suma = 0;

    printf("Inserte a: ");
    scanf("%d", &a);
    printf("Insertar b: ");
    scanf("%d", &b);

    
    while (a != 1)
    {
        if(a % 2 != 0 && b % 2 == 0 )
        {
            suma += b;
        }
        a /= 2;
        b *= 2;
    }
    suma += b;
    printf("El resultado es: %d", suma);

    return 0;
}