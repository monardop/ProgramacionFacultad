#include <stdio.h>

int main()
{
    int multiplicando, multiplicador;
    
    printf("Ingrese valor multiplicando: ");
    scanf("%d", &multiplicando);
    printf("Ingrese valor multiplicador: ");
    scanf("%d", &multiplicador);

    if (multiplicando == 0 || multiplicador == 0)
    {
        printf("Su resultado es 0. \n");
    }
    else
    {
        printf("%d ", multiplicando);    
        for(int i = 1; i < multiplicador; i++)
        {
            printf("+ %d ", multiplicador);
        }
        printf("\nEl resultado es %d", multiplicador * multiplicando);
    }
    return 0;
}