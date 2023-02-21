#include "moduloMatrices.h"

void sumatoriaTriangularSuperior(const int *p, int dimension)
{
    int sumatoria = 0;
    for(size_t i = 0; i < dimension; i++)
    {
        for (size_t j = 0; j < dimension; j++)
        {
            if (i < j)
            {
                sumatoria += *(p + i * dimension + j);
            }
        }
    }
    printf("El resultado es: %d", sumatoria);
}

void sumatoriaTriangularInferior(const int *p, int dimension)
{
    int sumatoria = 0;
    for(size_t i = 0; i < dimension; i++)
    {
        for (size_t j = 0; j < dimension; j++)
        {
            if (i > j)
            {
                sumatoria += *(p + i * dimension + j);
            }
        }
    }
    printf("El resultado es: %d", sumatoria);
}

void trazaPrincipalSecundaria(const int *p, int dimension)
{
    int diagonalPrincipal = 0, diagonalSecundaria = 0;
    for(size_t i = 0; i < dimension; i++)
    {
        for (size_t j = 0; j < dimension; j++)
        {
            if (i > j)
            {
                diagonalPrincipal += *(p + i * dimension + j);
            }
        }
    }
    printf("Diagonal principal: %d\n", diagonalPrincipal);
    for (size_t i = 0; i < dimension; i++)
    {
        diagonalSecundaria += *(p + i * dimension + ((dimension - 1 )-i));
    }
    printf("Diagonal secundaria: %d", diagonalSecundaria);
}

void esSimetrica(const int*p, int dimension)
{
    for(size_t i = 0; i < dimension; i++)
    {
        for (size_t j = 0; j < dimension; j++)
        {
            if (*(p + i * dimension + j) != *(p + j * dimension + i))
            {
                printf("No es simetrica.\n");
                return
            }
        }
    }
    printf("Es simetrica.\n");
}