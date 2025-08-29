// Ejercicio 1.13.1. Operadores unarios y asignaciones
#include <stdio.h>

int main(void) {
   int x = 3;
   x = x + 2;        // x = 5
   int y = ++x;      // x = 6; y = 6
   printf("x = %d, y = %d\n", x, y);
   return 0;
}