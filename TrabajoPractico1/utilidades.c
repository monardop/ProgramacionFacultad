#include "utilidades.h"
#include <stdio.h>


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

double pow(double base, int exponente)
{
    double potencia = 1;
    for (size_t i = 1; i <= exponente; i++)
    {
        potencia *= base;
    }
    return potencia;
}

double fact(double n)
{
    double fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int validarDato(int a, int b)
{
    int x;
    do
    {
        printf("Insertar un valor de %d a %d", a, b);
        scanf("%d", &x);
    } while (x < a || x > b);
    
}