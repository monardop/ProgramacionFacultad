#include <stdio.h>

int main()
{
    int vector[10] = {123, 45, 12, 2, 34343, 12, 6, 7, 2, 29};
    int posicionEliminar;
    do
    {
        printf("Ingresar la posicion a eliminar: ");
        scanf("%d", &posicionEliminar);
    } while (posicionEliminar < 0 || posicionEliminar > 9);
    vector[posicionEliminar] = NULL;
}
