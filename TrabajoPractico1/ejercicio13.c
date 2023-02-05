#include <stdio.h>

int main()
{
    int numeroBuscado;

    printf("Inserte el numero a buscar: ");
    scanf("%d", &numeroBuscado);

    for(int i = 2; i < numeroBuscado; i++)
    {
        if(numeroBuscado % i == 0)
        {
            printf("No es primo.");
            return 0;
        }
    }
    printf("Es primo.");
    return 0;
}