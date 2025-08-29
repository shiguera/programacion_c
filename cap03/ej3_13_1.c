// Ejercicio 1.13.1. Operadores unarios y asignaciones
#include <stdio.h>

int main(void) {
   int x = 2;
   int y = x++;      // y = 2; después x = 3
   printf("x = %d, y = %d\n", x, y);
   return 0;
}