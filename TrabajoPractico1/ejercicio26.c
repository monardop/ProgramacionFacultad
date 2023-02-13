#include <stdio.h>

int main()
{
    int vector[10] = {10, 20, 30, 40, 50, 60, 17, 90, 90, 29};
    int elementoEliminar, existe = 0;
    printf("Ingrese el elemento para borrar: ");
    scanf("%d", &elementoEliminar);
    for (size_t i = 0; i < 10; i++)
    {
        if (vector[i] == elementoEliminar)
        {
            vector[i] = NULL;
            existe = 1;
        }
    }
    if(existe == 1)
    {
        for (size_t i = 0; i < 10; i++)
        {
            printf("%d\t", vector[i]);
        }
        
    }
    else
    {
        printf("El elemento no se encuentra en el vector.\n");
    }
    
    return 0;
}