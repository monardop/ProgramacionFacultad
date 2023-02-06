#include <stdio.h>
#include "validacionFechas.h"


int esBisiesto(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int esFechaValida(tFecha fecha)
{
    if(fecha.year < BASEYEAR)
    {
        printf("Solo fechas pasados el 1900.\n");
        return 0;
    }
    if(fecha.mes < 0 || fecha.mes > 12)
    {
        printf("Mes equivocado.\n");
        return 0;
    }
    if(esBisiesto(fecha.year))
    {
        if(fecha.dia < 0 || fecha.dia > diasBisiesto[fecha.mes])
        {
            printf("Error en el ingreso de días.\n");
            return 0;
        }
    } else
    {
        if(fecha.dia < 0 || fecha.dia > diasNormal[fecha.mes])
        {
            printf("Error en el ingreso de días.\n");
            return 0;
        }
    }

    return 1;
}

tFecha ingresarFecha()
{
    char boolAprobado = 0;
    tFecha fecha;
    while (!boolAprobado)
    {
        printf("Ingrese una fecha formato dd/mm/yyyy: ");
        scanf("%d/%d/%d", &fecha.dia, &fecha.mes, &fecha.year);
        boolAprobado = esFechaValida(fecha);
    }
    return fecha;
}