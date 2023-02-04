#include <stdio.h>
#include "utilidades.h"

int main()
{
    int dividendo, divisor, cociente;
    char esNegativo;

    printf("Ingrese el dividendo: ");
    scanf("%d", &dividendo);
    printf("Ingrese el divisor: ");
    scanf("%d", &divisor);

    if(divisor == 0)
    {
        printf("La division por 0 no esta definida.\n");
        return 0;
    }

    if(divisor < 0 && dividendo < 0)
    {
        esNegativo = 0;
    }
    else if(divisor < 0 || dividendo < 0)
    {
        esNegativo = 1;
    }
    else
    {
        esNegativo = 0;
    }

    dividendo = abs(dividendo);
    divisor = abs(divisor);

    while(dividendo - divisor > 0)
    {
        dividendo -= divisor;
        cociente++;
    }

    if(esNegativo)
    {
        printf("El cociente es -%d con un resto de %d", cociente, dividendo);
    }
    else
    {
        printf("El cociente es %d con un resto de %d", cociente, dividendo);
    }
    return 0;
}