#include <stdio.h>


int main()
{
    int numeroDeseado, respuesta;

    printf("Ingresar un numero: ");
    scanf("%d", &numeroDeseado);

    respuesta = 0;
    for(int i = 1; i < numeroDeseado; i++)
    {
        if(numeroDeseado % i == 0)
        {
            respuesta += i;
        }
    } 

    if(respuesta == numeroDeseado)
    {
        printf("Numero perfecto.\n");
    }
    else if (respuesta < numeroDeseado)
    {
        printf("Numero deficiente.\n");
    }
    else
    {
        printf("Numero abundante.\n");
    }

    return 0;
}