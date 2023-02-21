#include "moduloMatrices.h"

void sumatoriaTriangularSuperior(const int *p, int fila, int columna)
{
    int sumatoria = 0;
    for(size_t i = 0; i < fila; i++)
    {
        for (size_t j = 0; j < columna; j++)
        {
            if (i < j)
            {
                sumatoria += *(p + i * columna + j);
            }
        }
    }
    printf("El resultado es: %d", sumatoria);
}

void sumatoriaTriangularInferior(const int*, int, int)
{
    int sumatoria = 0;
    for(size_t i = 0; i < fila; i++)
    {
        for (size_t j = 0; j < columna; j++)
        {
            if (i > j)
            {
                sumatoria += *(p + i * columna + j);
            }
        }
    }
    printf("El resultado es: %d", sumatoria);
}

