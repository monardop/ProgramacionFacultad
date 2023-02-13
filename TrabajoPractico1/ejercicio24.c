#include <stdio.h>

int main()
{
    int vector[10] = {10, 20, 30, 40, 50, 60, 17, 90, 90, 29};
    int elementoEliminar, posicion = -1;
    printf("Ingresar elemento a eliminar: ");
    scanf("%d", &elementoEliminar);
    for (int i = 0; i < 10; i++)
    {
        if(vector[i] == elementoEliminar)
        {
            posicion = i;
            break;
        }
    }
    if(posicion == -1)
    {
        printf("No se encontro el elemento.\n");
    }
    else
    {
        vector[posicion] = NULL;
        for (size_t i = 0; i < 10; i++)
        {
            printf("%d\t", vector[i]);
        }
        
    }
    return 0;
}