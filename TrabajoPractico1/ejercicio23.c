#include <stdio.h>

#define CANTIDAD 10

int main()
{
    int array[CANTIDAD], nuevoNro, desorden;
    
    for(int i = 0; i < CANTIDAD; i++)
    {
        desorden = 1;
        printf("Ingrese un numero: ");
        scanf("%d", &nuevoNro);
        array[i] = nuevoNro;
        while (desorden == 1)
        {
            desorden = 0;
            for (int x = 0; x < i; x++)
            {
                if(array[x] > array[x + 1])
                {
                    int aux;
                    aux = array[x];
                    array[x] = array[x+1];
                    array[x + 1] = aux;
                    desorden = 1;
                }
            }
        } 
    }
    
    printf("Lista de nros:\n");
    for (int x = 0; x < CANTIDAD; x++)
    {
        printf("%d\t", array[x]);
    }
    
    return 0;
}