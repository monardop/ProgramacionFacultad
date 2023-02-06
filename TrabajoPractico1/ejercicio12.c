#include <stdio.h>

int main()
{
    int numeroDeseado, suma = 0;

    printf("Ingrese el numero deseado: ");
    scanf("%d", &numeroDeseado);

    for (int i = 0; i < numeroDeseado; i += 2)
    {
        suma += i;
    }
    printf("El resultado es: %d", suma);

    return 0;
}