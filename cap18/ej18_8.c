// Ejercicio 18.8. Organización en carpetas.
/* Estructura esperada:
include/ops.h
src/main.c
src/ops.c
*/

/* ---------- include/ops.h ---------- */
#ifndef OPS_H
#define OPS_H
int suma(int a, int b);
#endif

/* ---------- src/ops.c ---------- */
#include "ops.h"
int suma(int a, int b) { return a + b; }

/* ---------- src/main.c ---------- */
#include <stdio.h>
#include "ops.h"
int main(void) {
   printf("suma(8,5) = %d\n", suma(8, 5));
   return 0;
}

/* Compilación (referencia):
gcc -Iinclude -c src/ops.c  -o ops.o
gcc -Iinclude -c src/main.c -o main.o
gcc main.o ops.o -o programa
*/

