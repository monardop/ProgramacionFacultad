#include <stdio.h>

int main()
{
    int cantidadDeseada, suma = 0, contadorPares = 0;
    int i = 0;
    printf("Ingrese cuantos numeros pares desea: ");
    scanf("%d", &cantidadDeseada);

    while(contadorPares != cantidadDeseada)
    {
        suma += i;
        i += 2;
        contadorPares++;
    }

    printf("El resultado: %d", suma);
    
    return 0;
}