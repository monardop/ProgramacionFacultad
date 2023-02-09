#include <stdio.h>
#include <stdlib.h>
#include "operacionesFecha.h"

void printFunctions();
int opcionValida(int, int);

int main()
{
    int continuar = 1, operacion;

    while (continuar)
    {
        printFunctions();
        operacion = opcionValida(1, 6);
        switch (operacion)
        {
        case 1:
            tFecha fecha;
            fecha = sumarDias(ingresarFecha());
            printFecha(fecha, "El resultado es: ");
            break;
        case 2:
            tFecha fecha;
            fecha = restarDias(ingresarFecha());
            printFecha(fecha, "El resultado es: ");
            break;
        case 3:
            int diferencia;
            diferencia = diferenciaFechas(ingresarFecha(), ingresarFecha());
            printf("La diferencia es de %d", diferencia);
            break;
        case 4:
            numeroDia(ingresarFecha());
            break;
        case 5:
            numeroSemana(ingresarFecha());
            break;
        case 6:
            diaSemana(ingresarFecha());
            break;
        }
        printf("Ingrese 1 para continuar, 0 para finalizar.\n");
        continuar = opcionValida(0, 1);
        system("cls");
    }
    return 0;
}

void printFunctions()
{
    printf("1 - Sumar dias a una fecha\n");
    printf("2 - Restar dias a una fecha\n");
    printf("3 - Diferencia entre fechas\n");
    printf("4 - Numero de dia del año de una fecha\n");
    printf("5 - Numero de semana del año de una fecha\n");
    printf("6 - Que dia es esta fecha.\n");
}

int opcionValida(int a, int b)
{
    int x;
    do
    {
        printf("Elegir opcion: ");
        scanf("%d", &x);
    } while (x < a ||x > b);
    return x;
}