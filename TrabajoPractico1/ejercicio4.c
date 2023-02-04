#include <stdio.h>

#define DESVIACION_STANDAR 0.9

float aproximarRaiz(int, float);
float calcularSiguiente(double, int);


int main()
{
    printf("Aproximacion de 4: %f\n", aproximarRaiz(4, DESVIACION_STANDAR));
    printf("Aproximacion de 2: %f\n", aproximarRaiz(2, DESVIACION_STANDAR));
    printf("Aproximacion de 9: %f\n", aproximarRaiz(9, DESVIACION_STANDAR));

    system("pause");
    return 0;
}

float aproximarRaiz(int raiz, float tolerancia)
{
    double anterior = 1, siguiente;
    siguiente = calcularSiguiente(anterior, raiz);
    float resultado;
    while(anterior - siguiente < tolerancia)
    {
        resultado += anterior;
        anterior = siguiente;
        siguiente = calcularSiguiente(anterior, raiz);
    }
    return resultado;
}

float calcularSiguiente(double anterior, int raiz)
{
    return 1 / (2 * (anterior + (raiz / anterior)));
}


