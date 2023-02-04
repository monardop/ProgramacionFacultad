/*
Desarrollar una función que permita dar una aproximacion de e^x dando x y una maxima toleracia
*/
#include <stdio.h>

// Callbacks
double aproximare(int potencia, float tolerancia);
double proximoTermino(int potencia, int grado);
double factorial(int x);
double pow(int, int);

int main(){
    printf("e^3 es 20.0855, su aproximacion sera de %f\n", aproximare(3, 0.005));
    printf("e^2 es 7.3890, su aproximacion sera de %f\n", aproximare(2, 0.005));
    printf("e^6 es 403.4287, su aproximacion sera de %f\n", aproximare(6, 0.005));

    system("pause");
    return 0;
}

double aproximare(int potencia, float tolerancia){
    double aproximacion = 1, siguiente;
    int grado = 1;

    siguiente = proximoTermino(potencia, grado);

    while (siguiente > tolerancia)
    {
        aproximacion += siguiente;
        grado++;
        siguiente = proximoTermino(potencia, grado);
    }
    
    return aproximacion;
}

double proximoTermino(int potencia, int grado){
    return pow(potencia, grado)/factorial(grado);
}

double pow(int base, int exponente){
    double potencia = 1;
    for (size_t i = 1; i <= exponente; i++)
    {
        potencia *= base;
    }
    return potencia;
}

double factorial(int x){
    double fact = 1;
    for(int i = 1; i <= x; i++){
        fact *= i;
    }
    return fact;
}
