#ifndef OPERACIONESFECHA_H
#define OPERACIONESFECHA_H


int diasRelativos(tFecha);
int diasGregorianos(tFecha);
tFecha sumarDias(tFecha);
tFecha restarDias(tFecha);
int diferenciaFechas(tFecha, tFecha);
void diaSemana(tFecha);
void numeroSemana(tFecha);
void numeroDia(tFecha);
void printFecha(tFecha, char[]);

#include "operacionesFecha.c"

#endif