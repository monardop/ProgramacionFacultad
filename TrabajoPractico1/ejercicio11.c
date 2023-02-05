#include <stdio.h>

int main()
{
    int numeroDeseado, suma;

    printf("Ingrese el numero deseado: ");
    scanf("%d", &numeroDeseado);

    for(int i = 0; i <= numeroDeseado; i++)
    {
        suma += i;
    }
    printf("El resultado es: %d", suma);
    
    return 0;
}