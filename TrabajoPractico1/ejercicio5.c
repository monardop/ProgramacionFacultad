#include <stdio.h>

void fibonacci(int*, int*);

int main()
{
    int a = 1, b = 1;
    int numeroBuscado, posibilidadDeEncontrarlo = 1;

    printf("Inserte el numero que desea buscar: ");
    scanf("%d", &numeroBuscado);

    while (posibilidadDeEncontrarlo == 1)
    {
        if (b == numeroBuscado)
        {
            printf("Su numero pertenece a la sucesion.\n");
            posibilidadDeEncontrarlo = 0;
        }
        else if (b > numeroBuscado)
        {
            printf("No pertenece. \n");
            posibilidadDeEncontrarlo = 0;
        }
        else
        {
            fibonacci(&a, &b);
        }
    }

    system("pause");
    return 0;    
}

void fibonacci(int* primero, int* segundo)
{
    int siguienteTermino;

    siguienteTermino = (*primero) + (*segundo);
    (*primero) = (*segundo);
    (*segundo) = siguienteTermino;
}
