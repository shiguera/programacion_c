// Ejercicio 1.13.1. Operadores unarios y asignaciones
#include <stdio.h>

int main(void) {
   int x = 5;
   int y = x + 2;    // y = 7
   x = y++;          // x = 7; luego y = 8
   printf("x = %d, y = %d\n", x, y);
   return 0;
}