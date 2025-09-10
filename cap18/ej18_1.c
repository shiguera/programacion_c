// Ejercicio 18.1. Dividir un programa sencillo.
/* ---------- cuadrado.h ---------- */
#ifndef CUADRADO_H
#define CUADRADO_H
int cuadrado(int x);
#endif

/* ---------- cuadrado.c ---------- */
#include "cuadrado.h"
int cuadrado(int x) { 
   return x * x; 
}

/* ---------- main.c ---------- */
#include <stdio.h>

#include "cuadrado.h"
int main(void) {
   int n = 12;
   printf("cuadrado(%d) = %d\n", n, cuadrado(n));
   return 0;
}
