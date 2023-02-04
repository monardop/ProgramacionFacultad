#include <stdio.h>
#include "utilidades.h"

void cargarDatos(int*, int*);
int esNegativo(int, int);
void imprimirDatos(char*, int*, int*);

int main()
{
    int dividendo, divisor, cociente = 0;
    char boolNegativo;

    cargarDatos(&dividendo, &divisor);

    if(divisor == 0)
    {
        printf("La division por 0 no esta definida.\n");
        return 0;
    }

    boolNegativo = esNegativo(dividendo, divisor);

    dividendo = abs(dividendo);
    divisor = abs(divisor);

    while(dividendo - divisor >= 0)
    {
        dividendo -= divisor;
        cociente++;
    }

    imprimirDatos(&boolNegativo, &dividendo, &cociente);
    
    return 0;
}

void cargarDatos(int* dividendo, int* divisor)
{
    printf("Ingrese el dividendo: ");
    scanf("%d", &(*dividendo));
    printf("Ingrese el divisor: ");
    scanf("%d", &(*divisor));
}

int esNegativo(int dividendo , int divisor)
{
    if(divisor < 0 && dividendo < 0)
    {
        return 0;
    }
    else if(divisor < 0 || dividendo < 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void imprimirDatos(char* boolNegativo, int* dividendo, int* cociente)
{
    if((*boolNegativo))
    {
        printf("El cociente es -%d con un resto de %d", (*cociente), (*dividendo));
    }
    else
    {
        printf("El cociente es %d con un resto de %d", (*cociente), (*dividendo));
    }
}