// Ejercicio 18.3. Operaciones aritméticas.
/* ---------- operaciones.h ---------- */
#ifndef OPERACIONES_H
#define OPERACIONES_H
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);   /* División entera; asume b != 0 */
#endif

/* ---------- operaciones.c ---------- */
#include "operaciones.h"
int suma(int a, int b) {
   return a + b;
}
int resta(int a, int b) {
   return a - b;
}
int multiplicacion(int a, int b) {
   return a * b;
}
int division(int a, int b) {
   /* En producción convendría comprobar b==0 en el llamador */
   return a / b;
}

/* ---------- main.c ---------- */
#include <stdio.h>
#include "operaciones.h"
int main(void) {
   int a = 20, b = 6;
   printf("suma=%d\n", suma(a, b));
   printf("resta=%d\n", resta(a, b));
   printf("multiplicacion=%d\n", multiplicacion(a, b));
   printf("division=%d\n", division(a, b));
   return 0;
}
