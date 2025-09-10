// Ejercicio 18.2. Cabecera asociada.
/* ---------- operaciones.h ---------- */
#ifndef OPERACIONES_H
#define OPERACIONES_H
int cuadrado(int x);
#endif

/* ---------- operaciones.c ---------- */
#include "operaciones.h"
int cuadrado(int x) {
   return x * x;
}

/* ---------- main.c ---------- */
#include <stdio.h>
#include "operaciones.h"
int main(void) {
   int n = 7;
   printf("cuadrado(%d) = %d\n", n, cuadrado(n));
   return 0;
}
