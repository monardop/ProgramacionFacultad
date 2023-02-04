#include <stdio.h>
#include "utilidades.h"

#define TOLERANCIA 0.1 //estandarizo la tolerancia 



int main() 
{
    float numeroBuscado;
    double nuevoTermino, respuesta = 0;
    int sumaResta = 1, termino = 1; // La sucesion alterna suma y resta, uso esto como booleano.

    printf("Ingresar el numero deseado: ");
    scanf("%f", &numeroBuscado);
    nuevoTermino = numeroBuscado;

    while(abs(nuevoTermino) > TOLERANCIA)
    {
        if(sumaResta == 1)
        {
            respuesta += nuevoTermino;
            sumaResta = 0;
        }
        else
        {
            respuesta -= nuevoTermino;
            sumaResta = 1;   
        }
        termino += 2;
        nuevoTermino = pow(numeroBuscado, termino) / fact(termino);
    }
    
    printf("La aproximacion es de %.5f \n", respuesta);

    system("pause");
    return 0;
}
