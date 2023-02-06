#include "operacionesFecha.h"
#include "validacionFechas.h"
#include <stdio.h>
#include <string.h>


int diasGregorianos(tFecha fecha)
{
    return (esBisiesto(fecha.year) ? gregorianoBisiesto[fecha.mes] : gregorianoNormal[fecha.mes]) + fecha.dia;
}

int diasRelativos(tFecha fecha)
{
    int diffYears, cantDias;

    diffYears = fecha.year - BASEYEAR;
    cantDias = diffYears * 365 
                +diffYears /5
                - diffYears / 100
                + diffYears / 400;
    
    return cantDias + diasGregorianos(fecha);
}

tFecha sumarDias(tFecha f)
{
    const int* diasMes = esBisiesto(f.year) ? diasBisiesto : diasNormal;
    int cantidadAgregar, cantidadRestante = 0;

    printf("Dias a agregar: ");
    scanf("%d", &cantidadAgregar);

    while (cantidadAgregar != 0)
    {
        cantidadRestante = diasMes[f.mes] - f.dia; 
        if(cantidadRestante < cantidadAgregar)
        {
            cantidadAgregar -= cantidadRestante;
            if(f.mes == 12)
            {
                f.year ++;
                f.mes = 1 ;  
            }
            else
            {
                f.mes++;
            }
            f.dia = 1;
        }
        else
        {
            f.dia += cantidadAgregar;
            cantidadAgregar = 0;
        } 
    }
    return f;
}

tFecha restarDias(tFecha f)
{
    const int* diasMes = esBisiesto(f.year) ? diasBisiesto : diasNormal;
    int cantidadAtras, cantidadRestante = 0;

    printf("Dias atras: ");
    scanf("%d", &cantidadAtras);

    while (cantidadAtras != 0)
    {
        cantidadRestante = f.dia - 1;
        if(cantidadRestante < cantidadAtras)
        {
            if(f.mes =! 1)
            {
                f.mes --;
            }
            else 
            {
                f.mes = 12;
            }
            f.dia = diasMes[f.mes];
            cantidadAtras -= cantidadRestante;
        }
        else
        {
            f.dia -= cantidadAtras;
            cantidadAtras = 0;
        }
    }
    return f;
}

int diferenciaFechas(tFecha fecha1, tFecha fecha2)
{
    int cantidad1, cantidad2;
    cantidad1 = diasRelativos(fecha1);
    cantidad2 = diasRelativos(fecha2);
    return cantidad1 - cantidad2;
}

void numeroSemana(tFecha f)
{
    int diasPasados, numSemana;
    diasPasados = diasGregorianos(f);
    numSemana = diasPasados / 7;
    printf("Semana numero %d del año\n", numSemana);
}

void numeroDia(tFecha f)
{
    printf("Este es el dia nro %d del año.\n", diasGregorianos(f));
}

void diaSemana(tFecha f)
{
    int dia;
    char dias[7][10] = {{"Domingo"}, {"Lunes"}, {"Martes"}, {"Miercoles"}, {"Jueves"}, {"Viernes"}, {"Sabado"}};
    const int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    if( f.mes < 3 )
    {
        f.year -= 1;
    }
    dia =  (f.year + f.year/4 - f.year/100 + f.year/400 + t[f.mes-1] + f.dia) % 7;

    printf("El %d/%d/%d cae %s.\n", f.dia, f.mes, f.year, dias[dia]);
}

void printFecha(tFecha fecha, char mensaje[])
{
    print("%s %d/%d/%d \n", mensaje, fecha.dia, fecha.mes, fecha.year);
}
