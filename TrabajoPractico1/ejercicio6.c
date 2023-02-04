#include <stdio.h>

#define TOLERANCIA 0.1 //estandarizo la tolerancia 

double abs(double);
double pow(double, int);
double fact(double);


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

double abs(double n)
{
    if(n < 0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}

double pow(double base, int exponente){
    double potencia = 1;
    for (size_t i = 1; i <= exponente; i++)
    {
        potencia *= base;
    }
    return potencia;
}

double fact(double x){
    double fact = 1;
    for(int i = 1; i <= x; i++){
        fact *= i;
    }
    return fact;
}
