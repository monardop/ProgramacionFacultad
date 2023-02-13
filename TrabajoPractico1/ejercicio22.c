#include <stdio.h>


int main()
{
    int array[10], elemento, posicion;
    do
    {
        printf("Inserte posicion: ");
        scanf("%d", &posicion);
    }while(posicion > 10 || posicion < 0);
    printf("Numero a insertar: ");
    scanf("%d", &elemento);
    array[posicion] = elemento;
}


