#ifndef VALIDACIONFECHAS_H
#define VALIDACIONFECHAS_H

#define BASEYEAR 1900

typedef struct 
{
    int dia, 
        mes, 
        year;
}tFecha;


const int diasBisiesto[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int diasNormal[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

const int gregorianoNormal[13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
const int gregorianoBisiesto[13] = {0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};

int esBisiesto(int);
tFecha ingresarFecha();

#include "validacionFechas.c"

#endif